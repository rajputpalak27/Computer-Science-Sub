#include<iostream>
#include<algorithm>
using namespace std;

struct node{
    int memsize;
    int allocp=-1;
    int pos;
    int allocSize;
}m[200];


bool posSort(node a,node b){
    return a.pos < b.pos;
}

bool memSort(node a,node b){
    return a.memsize > b.memsize;
}

int main(){
    int nm,np,choice, i, j, p[200];
    cout<<"Enter number of Blocks\n";
    cin>>nm;
    cout<<"Enter Block Size\n";
    for(i=0;i<nm;i++){
        cin>>m[i].memsize;
        m[i].pos=i;
    }

    cout<<"Enter number of Processes\n";
    cin>>np;

    cout<<"Enter Process Size\n";
    for(i=0;i<np;i++){
        cin>>p[i];
    }

    cout<<"\n\n";
    sort(m,m+nm,memSort);
    int globalFlag=0;
    for(i=0;i<np;i++){
        int flag=0;
        for(j=0;j<nm;j++){
            if(p[i]<=m[j].memsize && m[j].allocp==-1){
                m[j].allocp=i;
                m[j].allocSize=p[i];
                flag=1;
                break;
            }
        }
        if(flag==0){
                cout<<"Unallocated Process P"<<i+1<<"\n";
                globalFlag=1;
            }
        }
    sort(m,m+nm,posSort);
    cout<<"\n";
    int intFrag=0,extFrag=0;
    int remainBlock=0;
    cout<<"Memory Blocks\t\t";
    for(i=0;i<nm;i++){
        cout<<m[i].memsize<<"\t";
    }
    cout<<"\n";
    cout<<"Allocated Blocks\t";
    for(i=0;i<nm;i++){
        if(m[i].allocp!=-1){
            cout<<"P"<<m[i].allocp+1<<"\t";
        }
        else{
         remainBlock=remainBlock+1;
            cout<<"---\t";
        }
    }
    cout<<"\n";
    cout<<"Remainging Space\t";
    for(i=0;i<nm;i++){
            if(m[i].allocp!=-1){
                cout<<m[i].memsize-m[i].allocSize<<"\t";
                intFrag+=m[i].memsize-m[i].allocSize;
            }
            else{
                extFrag+=m[i].memsize;
                cout<<"---\t";
            }
    }
    cout<<"\n";
    cout<<"\n";
    if(globalFlag==1){
        cout<<"Blocks Left: "<<remainBlock<<endl;
    cout<<"Total Reaming Size for Reaming Blocks: "<<extFrag<<"\n";
    }

    else
    {
        cout<<"Available Memory: "<<extFrag<<"\n";
    }
        cout<<"Total Internal Fragmentation: "<<intFrag<<"\n";

}
