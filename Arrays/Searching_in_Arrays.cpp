#include<bits/stdc++.h>
using namespace std;

// Linear Search
int linearSearch(int arr[], int n, int x)
{
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

// Binary Search 
// Input array is always sorted. Binary Search works only on Sorted array
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
    int ch,n,y;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int search_ele;
    cout<<"enter search element: ";
    cin>>search_ele;
    cout<<"1:Linear Search\n2:Binary Search\n";
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            y = linearSearch(arr,n,search_ele);
            if(y==-1){
                cout<<"Key is not found in the array:";
            }
            else{
                cout<<"Key is found at index:"<<y<<endl;
            }
            break;
        case 2: 
            y = binarySearch(arr,n,search_ele);
            if(y==-1){
                cout<<"Key is not found in the array:";
            }
            else{
                cout<<"Key is found at index:"<<y<<endl;
            }
            break;
    }
}