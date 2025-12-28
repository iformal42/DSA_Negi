#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int partition(int arr[],int start,int end){
    int pos = start;
    int pivot = arr[end];
    for (int i=start; i<=end; i++)
    {
        if(arr[i]<= pivot)
        {
            // cout<< arr[i];
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos - 1;

}
void quicksort(int arr[],int start,int end){
    if (start >= end)
    return;
    int pivot_i = partition(arr,start,end);
    // left
    quicksort(arr,start,pivot_i-1);
    //right
    quicksort(arr,pivot_i+1,end);


}
int main(){
    int arr[] = {10,3,4,1,5,6,3,2,11,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for (int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }


}