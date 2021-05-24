// Linear Search 
// Time complexity: O(n)
#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
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
    cout<<"enter search element: ";
    cin>>search_ele;
    int y = linearSearch(arr,n,search_ele);
    if(y==-1){
        cout<<"Key is not found in the array:";
    }
    else{
        cout<<"Key is found at index:"<<y<<endl;
    }
}