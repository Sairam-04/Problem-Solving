#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid, int r)
{
    int n1 = mid-l+1, n2 = r-mid;
    int a[n1],b[n2];

    for(int i = 0;i<n1;i++){
        a[i] = arr[l+i];
    }

    for(int i = 0; i<n2 ;i++){
        b[i] = arr[mid+1+i];
    }

    int i = 0,j = 0,k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            i++;k++;
        }
        else{
            arr[k] = b[j];
            j++;k++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        i++;k++;
    }

    while(j<n2){
        arr[k] = b[j];
        j++;k++;
    }

}

void mergeSort(int arr[],int low, int high)
{
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main()
{
    int arr[6] = {43,24,17,32,76,55};
    mergeSort(arr,0,5);
    int i;
    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}