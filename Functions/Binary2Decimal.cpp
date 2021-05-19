#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int binary,dec=0;
    cin>>binary;
    int rem,i=1;
    while(binary>0){
        rem = binary%10;
        dec = dec+ rem*i;
        i = i*2;
        binary/=10;
    }
    cout<<"Decimal Conversion:"<< dec <<endl;
}