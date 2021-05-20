#include<bits/stdc++.h>
using namespace std;

// Binary to Decimal Conversion
int bin2dec(int n)
{
    int dec=0,i=1,r;
    while(n>0){
        r = n%10;
        dec = dec + (r*i);
        i = i*2;
        n = n/10;
    }
    return dec;
}

// Octal to Decimal Conversion
int oct2dec(int n)
{
    int dec=0,i=1,r;
    while(n>0){
        r = n%10;
        dec = dec +(r*i);
        i = i*8;
        n/=10;
    }
    return dec;
}

// HexaDecimal to Decimal Conversion
int hex2dec(string n)
{
    int dec=0,x=1,r;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]>= '0' && n[i]<='9'){
            dec = dec + ((n[i]-'0')*x);
        }
        else if(n[i]>='A' && n[i]<='F'){
            dec = dec+ ((n[i]-'A'+10)*x);
        }
        x*=16;
    }
    return dec;
}


int main()
{
    int ch,bin,oct;
    string hex;
    while(1){
        cout<<"\nConversions to Decimal\n";
        cout<<"\n1:Binary to Decimal\n2:Octal to decimal\n3:Hexadecimal to Decimal\4:Exit\n";
        cout<<"\nenter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"enter binary number:";
                cin>>bin;
                cout<<"\nBinary to Decimal:\n";
                cout<<"Binary number: "<< bin << "  Decimal number: " << bin2dec(bin);
                break;
            case 2:
                cout<<"enter Octal number:";
                cin>>oct;
                cout<<"\nOctal to Decimal:\n";
                cout<<"Octal number: "<< oct << "  Decimal number: " << oct2dec(oct);
                break;
            case 3:
                cout<<"enter hexadecimal number:";
                cin>>hex;
                cout<<"\nHexadecimal to Decimal:\n";
                cout<<"hexadecimal number: "<< hex << "  Decimal number: " << hex2dec(hex);
                break;
            case 4:
                exit(0);
            default:
                cout<<"Please enter correct choice:";
            
        }
    }
}