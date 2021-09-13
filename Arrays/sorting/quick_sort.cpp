#include<iostream>
using namespace std;

int partition(int arr[],int n, int low, int high)
{
    int start = low,end = high;
    int pivot = arr[low];
    while(start<end)
    {
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[low],arr[end]);
    return end;
}
void quicksort(int arr[],int n,int low, int high)
{
    if(low<high){
        int mid = (low+high)/2;
        int p = partition(arr,n,low,high);
        quicksort(arr,n,low,p-1);
        quicksort(arr,n,p+1,high);
    }
}
int main()
{
    int arr[7] = {4,6,5,3,2,1,7};
    quicksort(arr,7,0,7);
    int i;
    for(i=0;i<7;i++){
        cout<<arr[i]<<"  ";
    }
}