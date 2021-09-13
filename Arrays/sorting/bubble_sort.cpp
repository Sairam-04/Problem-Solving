// Bubble Sort
// Repeatedly swaping two adjacent elements if they are in wrong order
// Time Complexity: O(n*n)

#include<bits/stdc++.h>
using namespace std;

int *bubble_sort(int *arr, int n)
{
    int temp,f;
    for(int i=0;i<n-1;i++){
        f=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                f=1;
            }
        }
        if(f==0)
            break;
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
    int *x = bubble_sort(array,n);
    for(int i=0;i<n;i++){
        cout<<x[i]<<"  ";
    }
}