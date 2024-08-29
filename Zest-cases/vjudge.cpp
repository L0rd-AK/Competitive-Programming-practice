#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define prnt(x) cout << x << endl

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    }
};

// Comparator class for priority queue
class cmp {
public:
    bool operator()(Student a, Student b) {
        if (a.marks > b.marks) return true;  // Min-heap by marks
        if (a.marks < b.marks) return false;
        return a.roll > b.roll;  // If marks are the same, min-heap by roll
    }
};

// Overload the << operator to print Student objects
ostream& operator<<(ostream& os, const Student& s) {
    os << s.name << " " << s.roll << " " << s.marks;
    return os;
}

void AKG() {
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    
    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;

        if (x == 0) {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top() << endl; 
        } else if (x == 1) {
            if (pq.empty()) prnt("Empty");
            else cout << pq.top() << endl; 
        } else if (x == 2) {
            if (!pq.empty()) pq.pop();
            if (pq.empty()) prnt("Empty");
            else cout << pq.top() << endl; 
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }
#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
#endif
    return 0;
}
