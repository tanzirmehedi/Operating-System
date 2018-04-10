#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int length,m,si,key,flag,w,d=0;
    char message[50007],encryptmessage[50007],ch;
    cout<<"Enter Text for Encryption: ";
    gets(message);
    length=strlen(message);
    for(i=0; i<length; i++)
    {
        if(message[i]>='a'&&message[i]<='z')
        {
            flag=message[i];

            if(i%3==0)
            {
                key=(flag+3);
            }
            else if(i%3==1)
            {
                key=(flag+7);
            }
            else if(i%3==2)
            {
                key=(flag+10);
            }
            if(key>122)
            {
                w=key-122+96;

                if(w>122)
                {
                    while(w>122)
                    {
                        w=key-122+96;
                        key=w;
                    }
                }
                ch=char(w);
            }
            else
                ch=char(key);
                encryptmessage[d++]=ch;
        }
        else if(message[i]>='A'&&message[i]<='Z')
        {
            flag=message[i];
            if(i%3==0)
                key=(flag+3);
            else if(i%3==1)
                key=(flag+7);
            else if(i%3==2)
                key=(flag+10);
            if(key>90)
            {
                w=key-90+64;
                if(w>90)
                {
                    while(w>90)
                    {
                        w=key-90+64;
                        key=w;
                    }
                }
                ch=char(w);
            }
            else
                ch=char(key);


            encryptmessage[d++]=ch;
        }
        else
        {
            encryptmessage[d++]=message[i];
        }
    }
    cout<<"Encryption Message is: ";
    for(i=0; i<d; i++)
    {
        cout<<encryptmessage[i];
    }
    cout<<endl;
    cout<<"Recovery Message is: "<<message<<endl;
}

