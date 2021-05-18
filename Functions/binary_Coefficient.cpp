#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n,r;
    cin>>n>>r;
    //ncr = n!/((n-r)!*r!)
    int result = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<result<<endl;

    return 0;
}