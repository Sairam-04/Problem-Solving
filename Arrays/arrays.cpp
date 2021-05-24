#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}