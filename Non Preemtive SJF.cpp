#include<bits/stdc++.h>
using namespace std;

int main()
{
    float arr[20],p[20],waiting[20],trararound[20];
    int i,j,n,pos,temp;
    float avwaiting=0,avturnarounrd=0;
    cout<<"Enter Total Processes: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Process: "<<i+1<<" burst time: ";
        cin>>arr[i];
        p[i]=i+1;
    }

    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[pos])
                pos=j;
        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;

        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }

    waiting[0]=0;

    for(i=1;i<n;i++)
    {
        waiting[i]=0;
        for(j=0;j<i;j++)
            waiting[i]+=arr[j];
    }
    cout<<"\n    Process\tBurst Time\tWaiting Time\tTurnaround Time"<<endl;
    for(i=0;i<n;i++)
    {
        trararound[i]=arr[i]+waiting[i];
        avwaiting+=waiting[i];
        avturnarounrd+=trararound[i];
        cout<<"\nProcess: "<<p[i]<<"\t\t"<<arr[i]<<"\t\t"<<waiting[i]<<"\t\t"<<trararound[i];
    }
    avwaiting=avwaiting/n;
    avturnarounrd=avturnarounrd/n;
    cout<<"\n\nAverage Waiting Time: "<<avwaiting;
    cout<<"\nAverage Turnaround Time: "<<avturnarounrd<<endl;
}
