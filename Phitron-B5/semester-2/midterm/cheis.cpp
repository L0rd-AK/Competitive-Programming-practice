#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int marks;

    Student(int id, const string& name, char section, int marks){
        this->id=id;
        this->name=name;
        this->section=section;
        this->marks=marks;
    }

};

int main() {
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin>>t;
    while(t--){
        int n=3;
        int a; string b; char c; int d;
        int max_a; string max_b; char max_c; int max_d=-999;
        while(n--){
            cin>>a>>b>>c>>d;
            if(d>max_d){
                max_a=a;
                max_b=b;
                max_c=c;
                max_d=d;
            }
        }
        cout<<max_a<<" "<<max_b<<" "<<max_c<<" "<<max_d<<endl;
    }

    return 0;
}
