#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int cls;
        char section;
        int id;
        int math;
        int eng;
        int total;
      
};

bool cmp(Student a,Student b){
    if(a.total==b.total) return a.id<b.id;
    else return a.total>b.total;
}

int main() {
    int t;
    cin>>t;
    Student s[t];
    for(int i=0;i<t;i++){
        cin>>s[i].name>>s[i].cls>>s[i].section>>s[i].id>>s[i].math>>s[i].eng;
        s[i].total=s[i].math+s[i].eng;
    }
    sort(s,s+t,cmp);
    for(int i=0;i<t;i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].id<<" "<<s[i].math<<" "<<s[i].eng<<endl;
    }

    return 0;
}
