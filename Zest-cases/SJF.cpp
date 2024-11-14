#include <iostream>
using namespace std;

int main() {
    int A[100][4];
    int n = 5;

    int total_wt = 0, total_tat = 0;

    int burst_times[] = {10, 5, 8, 1, 6};
    for (int i = 0; i < n; i++) {
        A[i][0] = i + 1;
        A[i][1] = burst_times[i];
    }

    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j][1] < A[min_index][1]) {
                min_index = j;
            }
        }
        swap(A[i][1], A[min_index][1]);
        swap(A[i][0], A[min_index][0]);
    }

    A[0][2] = 0;
    for (int i = 1; i < n; i++) {
        A[i][2] = A[i - 1][2] + A[i - 1][1];
    }

    cout << "P\tBT\tWT\tTAT" << endl;
    for (int i = 0; i < n; i++) {
        A[i][3] = A[i][1] + A[i][2];
        total_wt += A[i][2];
        total_tat += A[i][3];
        cout << "P" << A[i][0] << "\t" << A[i][1] << "\t" << A[i][2] << "\t" << A[i][3] << endl;
    }

    float avg_wt = (float)total_wt / n;
    float avg_tat = (float)total_tat / n;

    cout << "Average Waiting Time = " << avg_wt << endl;
    cout << "Average Turnaround Time = " << avg_tat << endl;

    return 0;
}