/*
Pattern
n=5
1              
0 1
1 0 1
0 1 0 1
1 0 1 0 1

1s printing at location where adding row and column will be even
suppose 1 at location (3,1) = 3+1 = 4
location (5,3) = 5+3 = 8
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}