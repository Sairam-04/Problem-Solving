#include<iostream>
#include<math.h>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x,max(y,z));
    int b,c;
    if(a==x){
        b = y;
        c = z;
    }
    else if(a==y){
        b = x;
        c = z;
    } 
    else{
        b = x;
        c = y;
    }
    if(a*a == b*b + c*c){
        return true;
    }
    return false;
} 

int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    if(check(a1,a2,a3)==true){
        cout<<"The triple is the Pythogorian triplet it satisfies the condition(a*a = b*b+c*c)";
    }
    else{
        cout<<"The triplet is not Pythogorian triplet";
    }
}