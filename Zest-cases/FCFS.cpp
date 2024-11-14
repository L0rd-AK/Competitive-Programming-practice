#include <iostream>
using namespace std;

void findWaitingTime(int bt[], int n, int wt[]) {
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}

void findTurnAroundTime(int bt[], int n, int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

void findAvgTime(int bt[], int n) {
    int wt[n], tat[n];
    int total_wt = 0, total_tat = 0;

    findWaitingTime(bt, n, wt);
    findTurnAroundTime(bt, n, wt, tat);

    cout << "Processes \tBurst time \tWaiting time \tTurn around time\n";
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << " " << i + 1 << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << endl;
    }

    cout << "Average waiting time = " << (float)total_wt / n << endl;
    cout << "Average turn around time = " << (float)total_tat / n << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int burst_time[] = {10, 5, 8, 1, 6};
    int n = sizeof(burst_time) / sizeof(burst_time[0]);

    findAvgTime(burst_time, n);
    return 0;
}