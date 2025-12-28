 //code for descending order
 
#include<iostream>

using namespace std;
static int x = 0;

void merge(int arr[],int start,int mid,int end){
    int temp[end-start+1];
    int left = start,right=mid+1,index=0;
    //sorting
    while(left<=mid && right<=end){
        //code for descending order 
        if(arr[left]>=arr[right]){
            temp[index] = arr[left];
            left++;
        }
         //right subarray putting
        else{
            temp[index] = arr[right];
            right++;
        }
        index++;
    }
    // if left subarray is not empty
    while(left<=mid){
         temp[index] = arr[left];
            left++,index++;
    }
    // if right subarray is not empty
    while(right<=end){
         temp[index] = arr[right];
            right++,index++;

    }
  
    // putting sorted array back to original array
    for( index=start;index<=end;index++){
        arr[index] = temp[index-start];
    }
    //   index = 0;
    // while(start<=end){
    //     arr[start] = temp[index];
    //     start++,index++;
    // }
}
void merge_sort(int arr[],int start,int end)
{
   if (start == end ){
    // cout<<x;
    return;
   }
   int mid = start + (end - start)/2;
  
   merge_sort(arr,start,mid);
   merge_sort(arr,mid+1,end);
   merge(arr,start,mid,end);
    // x++;
        
    }

void printarray(int arr[],int n)
{
    for (int i=0 ;i<n;i++)
    cout << arr[i] << " ";
}

int main()
{
    int arr[] = {10,34,32,12,43,2,1,1,2,2,3,1,0,-2,3};
    int n = sizeof(arr)/sizeof(arr[1]);
   
    merge_sort(arr,0,n-1);
    printarray(arr,n);
    
} 
 
 
    