#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isPrime(int p){
    int flag=0;
    int j=sqrt(p);
    for(int i=2;i<=j;i++){
        if(p%i==0){
            flag=1;
        }
    }
    return flag;
}


int secret_random(int P,int Q,int x){
    int V;
    V=pow(Q,x);
    return (V%P);
}

int main(){

    int P,Q,a,b,A,B,Ab,Ba;
    cout<<endl<<"Enter the Prime Value open to all :";
    cin>>P;
    int p=isPrime(P);
    if(p==1){
        cout<<"Not Prime"<<endl;
        cout<<"Enter Prime Correct no: ";
        cin>>P;
    }

    cout<<endl<<"Enter the Primitive root of "<<P<<" open to all :";
    cin>>Q;

    a=13;
    A=secret_random(P,Q,a);
    cout<<endl<<"Secret Random:"<<A<<endl;

    b=23;
    B=secret_random(P,Q,b);
    cout<<"Secret Random:"<<B<<endl;

    Ab=secret_random(P,B,a);
    cout<<endl<<"Shared Random:"<<Ab<<endl;
    Ba=secret_random(P,A,b);
        cout<<"Shared Random:"<<Ba<<endl;


    if(Ab==Ba){
        cout<<endl<<"The secret random generated key is :"<<Ba<<endl;
    }

return 0;
}
