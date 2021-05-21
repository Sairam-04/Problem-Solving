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

// Decimal to Binary

int dec2bin(int n)
{
    int rem,bin=0,i=1;    
    while(n>0){
        rem = n%2;
        bin = bin+(rem*i);
        n/=2;
        i = i*10;
    }
    return bin;
}

// Decimal to Octal 
int dec2oct(int n)
{
    int oct=0,rem,i=1;
    while(n>0){
        rem = n%8;
        oct+=(rem*i);
        n/=8;
        i = i*10;
    }
    return oct;
}

// Decimal to Hexadecimal
void dec2hex(int n)
{
    int rem,i=1,s=0;
    char hex[50];
    while(n>0){
        rem = n%16;
        if(rem<10){
            hex[s++] = rem+48;
        }
        else{
            hex[s++] = rem+55;
        }
        n/=16;
    }
    for(int j=s-1;j>=0;j--){
        cout<<hex[j];
    }
    cout<<endl;
}


int main()
{
    int ch,data;
    string hex;
    while(1){
        cout<<"\nConversions to Decimal\n";
        cout<<"\n1:Binary to Decimal\n2:Octal to decimal\n3:Hexadecimal to Decimal\n4:Decimal to Binary\n5:Decimal to Octal\n6:Decimal to Hexadecimal\n7:Exit\n";
        cout<<"\nenter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"enter binary number:";
                cin>>data;
                cout<<"\nBinary to Decimal:\n";
                cout<<"Binary number: "<< data << "  Decimal number: " << bin2dec(data);
                break;
            case 2:
                cout<<"enter Octal number:";
                cin>>data;
                cout<<"\nOctal to Decimal:\n";
                cout<<"Octal number: "<< data << "  Decimal number: " << oct2dec(data);
                break;
            case 3:
                cout<<"enter hexadecimal number:";
                cin>>hex;
                cout<<"\nHexadecimal to Decimal:\n";
                cout<<"hexadecimal number: "<< hex << "  Decimal number: " << hex2dec(hex);
                break;
            case 4:
                cout<<"enter decimal number:";
                cin>>data;
                cout<<"\nDecimal to Binary:\n";
                cout<<"Decimal number: "<< data << "  Binary number: " << dec2bin(data);
                break;
            case 5:
                cout<<"enter decimal number:";
                cin>>data;
                cout<<"\nDecimal to Octal:\n";
                cout<<"Decimal number: "<< data << "  Octal number: " << dec2oct(data);
                break;
            case 6:
                cout<<"enter decimal number:";
                cin>>data;
                cout<<"\nDecimal to Hexadecimal:\n";
                cout<<"Decimal number: "<< data;
                cout<<" Hexadecimal number:";
                dec2hex(data);
                break;
            case 7:
                exit(0);
            default:
                cout<<"Please enter correct choice:";
            
        }
    }
}