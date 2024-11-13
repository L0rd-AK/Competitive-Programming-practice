//C++ Program to implement Round Robin 
//Scheduling CPU Algorithm
//Ariful Islam Batch E-64 Roll: 34

#include <iostream>

/*at = Arrival time,
bt = Burst time,
time_quantum= Quantum time
tat = Turn around time,
wt = Waiting time*/

using namespace std;

int main(){
	int i,time,remain,temps=0,time_quantum=2;
	int wt=0,tat=0;
	int n=5;
	remain=n;

	int at[n]={1,3,4,5,6};
	int bt[n]={7,5,2,7,8};
	int rt[n];

	for(i=0;i<n;i++){
		rt[i]=bt[i];
	}

	cout<<"\n\nProcess\t:\tTurnaround Time:\tWaiting Time\n\n";
	for(time=0,i=0;remain!=0;){
		if(rt[i]<=time_quantum && rt[i]>0){
			time += rt[i];
			rt[i]=0;
			temps=1;
		}
        else if(rt[i]>0){
			rt[i] -= time_quantum;
			time += time_quantum;
		}

		if(rt[i]==0 && temps==1){
			remain--;
			printf("Process{%d}\t:\t%d\t:\t%d\n",i+1,time-at[i],time-at[i]-bt[i]);
			cout<<endl;

			wt += time-at[i]-bt[i];
			tat += time-at[i];
			temps=0;
		}

		if(i == n-1)
			i=0;
		else if(at[i+1] <= time)
			i++;
		else
			i=0;
	}
	cout<<"Average waiting time "<<wt*1.0/n<<endl;
	cout<<"Average turn around time "<<tat*1.0/n<<endl;

	return 0;
}