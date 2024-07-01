#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int mark;
      
};

int main() {
    int t;
    cin>>t;
    Student s[t];
    for(int i=0;i<t;i++){
        cin>>s[i].name>>s[i].cls>>s[i].section>>s[i].mark;
    }
    for(int i=0;i<(t/2);i++){
        swap(s[i].section,s[t-i-1].section);
    }
    for(int i=0;i<t;i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].mark<<endl;
    }

    return 0;
}
