// Finding maximum and minimum number in the array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=INT_MIN,min=INT_MAX;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Maximum number in the array is: "<<max<<endl;
    cout<<"Minimum number in the array is: "<<min<<endl;
}