#include <iostream>
using namespace std;

int main() {
    int i, time, remain, temps = 0, time_quantum = 2;
    int wt = 0, tat = 0; // Waiting time and turnaround time
    int n = 5; // Number of processes
    remain = n;

    // Process IDs
    int at[n] = {1, 3, 4, 5, 6};  // Arrival times
    int bt[n] = {7, 5, 2, 7, 8};  // Burst times
    int rt[n];  // Remaining times (initially equal to burst times)

    // Initialize remaining times with burst times
    for (i = 0; i < n; i++) {
        rt[i] = bt[i];
    }

    cout << "\n\nProcess\t\tTurnaround Time\t\tWaiting Time\n";

    // Simulation of the Round Robin scheduling
    for (time = 0, i = 0; remain != 0;) {
        if (rt[i] <= time_quantum && rt[i] > 0) {
            time += rt[i];
            rt[i] = 0;
            temps = 1;
        } else if (rt[i] > 0) {
            rt[i] -= time_quantum;
            time += time_quantum;
        }

        if (rt[i] == 0 && temps == 1) {
            remain--;
            printf("Process%d\t\t%d\t\t%d\n", i + 1, time - at[i], time - at[i] - bt[i]);
            wt += time - at[i] - bt[i];
            tat += time - at[i];
            temps = 0;
        }

        if (i == n - 1)
            i = 0;
        else if (at[i + 1] <= time)
            i++;
        else
            i = 0;
    }

    // Display average waiting and turnaround times
    cout << "\nAverage waiting time: " << wt * 1.0 / n << endl;
    cout << "Average turnaround time: " << tat * 1.0 / n << endl;

    return 0;
}
