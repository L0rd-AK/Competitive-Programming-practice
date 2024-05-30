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
      
};

bool cmp(Student a,Student b){
    if(a.eng!=b.eng) return a.eng>b.eng; 
    else if(a.math!=b.math) return a.math>b.math;
    else return a.id<b.id;
}

int main() {
    int t;
    cin>>t;
    Student s[t];
    for(int i=0;i<t;i++){
        cin>>s[i].name>>s[i].cls>>s[i].section>>s[i].id>>s[i].math>>s[i].eng;
    }
    sort(s,s+t,cmp);
    for(int i=0;i<t;i++){
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].id<<" "<<s[i].math<<" "<<s[i].eng<<endl;
    }

    return 0;
}
