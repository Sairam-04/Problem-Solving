// For every two elements print the maximum
// Eg: arr = [0, -9, 1, 3, -4, 5]
//  Output: 0 0 1 3 3 5
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT16_MIN;
    for(int i=0;i<n;i++){
        mx = max(mx, arr[i]);
        cout<< mx <<endl;

    }
}