#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    int r,sum=0,i=0;
    cin>>n;
    while(n!=0){
        r = n%10;
        sum = sum + r*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<sum;
}