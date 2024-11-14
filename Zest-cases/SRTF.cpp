#include <iostream>
#include <climits>

using namespace std;

struct Process {
    int pid; // Process ID
    int bt;   // Burst Time
    int art;  // Arrival Time
};

void findWaitingTime(Process proc[], int n, int wt[]) {
    int rt[n];

    for (int i = 0; i < n; i++) {
        rt[i] = proc[i].bt;
    }

    int complete = 0, t = 0, minm = INT_MAX, shortest = 0, found = false;

    while (complete != n) {
        for (int j = 0; j < n; j++) {
            if ((proc[j].art <= t) && (rt[j] < minm) && rt[j] > 0) {
                minm = rt[j];
                shortest = j;
                found = true;
            }
        }

        if (found == false) {
            t++;
            continue;
        }

        rt[shortest]--;
        minm = rt[shortest] == 0 ? INT_MAX : rt[shortest];
        if (rt[shortest] == 0) {
            complete++;
            int finish_time = t + 1;
            wt[shortest] = finish_time - proc[shortest].bt - proc[shortest].art;
            if (wt[shortest] < 0) {
                wt[shortest] = 0;
            }
            found = false;
        }
    }
}

void findTurnAroundTime(Process proc[], int n, int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = proc[i].bt + wt[i];
    }
}

void findAvgTime(Process proc[], int n) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    findWaitingTime(proc, n, wt);
    findTurnAroundTime(proc, n, wt, tat);

    cout << "P\tBT\tWT\tTAT\n";
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << "P" << proc[i].pid << "\t" << proc[i].bt << "\t" << wt[i] << "\t" << tat[i] << endl;
    }

    cout << "\nAverage waiting time = " << (float)total_wt / n;
    cout << "\nAverage turnaround time = " << (float)total_tat / n << endl;
}

int main() {
    Process proc[] = {{1, 6, 2}, {2, 2, 5}, {3, 8, 1}, {4, 3, 0}, {5, 4, 4}};
    int n = sizeof(proc) / sizeof(proc[0]);

    findAvgTime(proc, n);
    return 0;
}