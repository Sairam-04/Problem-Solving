// Finding sum of all the sub arrays
// No of Sub arrays of size n = nc2 + n or n*(n+1)/2
// Eg: arr = [1,2,3], n = 3; Subarrays: 3*(3+1)/2 = 6
// Subarrays for eg {1}, {1,2}, {1,2,3}, {2}, {2,3}, {3}
// No of sub arrays for above example : 6
// Time complexity: O(n*n)
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
}