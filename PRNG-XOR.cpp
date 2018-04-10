#include<bits/stdc++.h>
using namespace std;

string XOR(string message, char key[])
{
    string xormessageing = message;

    int l=xormessageing.size();

    for(int i=0;i<l;i++)
    {
        xormessageing[i]=message[i]^key[i%(sizeof(key)/sizeof(char))];
    }
    return xormessageing;
}

int main()
{
    char key[]={'S','H','A','W','O','N'};
    char message[20];
    string e_message,d_message;
    cout<<"Enter text for encryption : ";
    //scanf("%[^\n]",message);
     gets(message);

    e_message=XOR(message,key);
    cout<<"Encrypted message is : "<<e_message;


    d_message=XOR(e_message,key);
    cout<<"\nDecrypted message is : "<<d_message;

    return 0;
}
