// Insertion Sort
// Inserting an element from the unsorted array to its correct position in sorted array
// Time Complexity: O(n*n)

#include<bits/stdc++.h>
using namespace std;

int *insertion_sort(int *arr, int n)
{
    int temp;
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(arr[j]>=key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    int *x = insertion_sort(array,n);
    for(int i=0;i<n;i++){
        cout<<x[i]<<"  ";
    }
}