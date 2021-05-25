// Selection Sort
// Time Complexity : O(n*n)
// Finding the minimum element in unsorted array and swap it with first element
#include<bits/stdc++.h>
using namespace std;

int *selection_sort(int *arr, int n)
{
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;   
            }
        }
    }
    return arr;
}


int main()
{
    int n;
    cout<<"Enter the Size of the array:";
    cin>>n;
    int array[n];
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Sorted array:";
    int *x = selection_sort(array,n);
    for(int i=0;i<n;i++){
        cout<<x[i]<<"  ";
    }
}