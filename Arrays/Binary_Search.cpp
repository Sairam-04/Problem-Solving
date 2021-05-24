/*
Binary Search
Time Complexity = O(logn)
*/

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int l=0,h=n;
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}
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
    int search_ele;
    cout<<"Enter search element:";
    cin>>search_ele;
    int y = binarySearch(arr,n,search_ele);
    if(y==-1){
        cout<<"Element is not found in the array:";
    }
    else{
        cout<<"Element is found at index: "<<y<<endl;
    }
}