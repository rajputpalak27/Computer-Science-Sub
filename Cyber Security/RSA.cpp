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

int GCD(int p,int q){
    int val;
    while(1){
        val= p % q;
        if(val==0)
            return q;
        p=q;
        q=val;
    }
}

int main(){
    double p,q,n,On,plaintext,ciphertext,decryptedtext;
    int flag=0;

    cout<<"Enter first Prime no :";
    cin>>p;
    int pc;
    pc=isPrime(p);

    if(pc==1){
        cout<<"Not Prime"<<endl;
        cout<<"Enter Prime Correct no: ";
        cin>>p;
    }

    int qc;
    qc=isPrime(q);

    if(qc==1 || p==q){
        cout<<"Not Prime"<<endl;
        cout<<"Enter Prime Correct no: ";
        cin>>q;
    }

    cout<<"Enter second Prime no :";
    cin>>q;

    cout<<endl<<"Enter the Plain-text :";
    cin>>plaintext;

    n=p * q;
    On=(p-1)*(q-1);

    cout<<endl<<"\nValue of N: "<<n<<endl;
    cout<<endl<<"Value of Phi: "<<On<<endl;

    double count,e=7;
    while(e<On){
        count=GCD(e,On);
        if(count==1){
            break;
        }else{
            e++;
        }
    }

    double d,d1;
    d1=1/e;
    d=fmod(d1,On);

    cout<<endl<<"Value of e: "<<e<<endl;
    cout<<endl<<"Value of d: "<<d<<endl;
    cout<<endl<<"Public Key: ("<<e<<","<<n<<")"<<endl;
    cout<<endl<<"Private Key: ("<<d<<","<<n<<")"<<endl;


 //   double ciphertext1;
    ciphertext=pow(plaintext,e);
    decryptedtext=pow(ciphertext,d);

    ciphertext=fmod(ciphertext,n);
    decryptedtext=fmod(decryptedtext,n);

    cout<<endl<<endl<<"Cipher-Text is: "<<ciphertext;
    cout<<endl<<endl<<"Decrypted-Text is: "<<decryptedtext<<endl;


    return 0;

}
