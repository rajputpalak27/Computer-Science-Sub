#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int p,i,j;
cout<<"Enter the number of Processes"<<endl;
cin>>p;
int wait[p],burst[p],tur[p],await=0,atur=0;

for(int i=0;i<p;i++){
cout<<endl<<"Enter Burst Time for P"<<i+1<<" :";
cin>>burst[i];
}

wait[0]=0;

for(i=1;i<p;i++)
    {
        wait[i]=0;
        for(j=0;j<i;j++)
            wait[i]+=burst[j];
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"P"<<i+1<<"\t"<<i+j+1<<endl;
    }

cout<<endl<<"Process"<<"    "<<"Burst Time"<<"   "<<"Waiting Time"<<"   "<<"Turnaround Time"<<endl;


for(i=0;i<p;i++)
{
  tur[i]=burst[i]+wait[i];
        await+=wait[i];
        atur+=tur[i];
    cout<<i+1<<"\t\t"<<burst[i]<<"\t\t"<<wait[i]<<"\t\t"<<tur[i]<<endl;
    }

await=await/p;
atur=atur/p;
cout<<"Average Waiting Time "<<await<<endl;
cout<<"Average Turnaround Time "<<atur<<endl;


return 0;
}
