#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[20],waiting[20],turnarounrd[20],avwaiting=0,avturnarounrd=0,i,j;
    cout<<"Enter Total Processes: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Process: "<<i<<" burst time: ";
        cin>>arr[i];
    }
    waiting[0]=0;
    for(i=1; i<n; i++)
    {
        waiting[i]=0;
        for(j=0; j<i; j++)
            waiting[i]=waiting[i]+arr[j];
    }

    cout<<"\n    Process\tBurst Time\tWaiting Time\tTurnaround Time";

    for(i=0; i<n; i++)
    {
        turnarounrd[i]=arr[i]+waiting[i];
        avwaiting+=waiting[i];
        avturnarounrd+=turnarounrd[i];
        cout<<"\nProcess: "<<i<<"\t\t"<<arr[i]<<"\t\t"<<waiting[i]<<"\t\t"<<turnarounrd[i]<<endl;
    }

    avwaiting=avwaiting/i;
    avturnarounrd=avturnarounrd/i;
    cout<<"\n\nAverage Waiting Time: "<<avwaiting<<endl;
    cout<<"\nAverage Turnaround Time: "<<avturnarounrd<<endl;

    return 0;
}
