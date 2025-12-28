 //code here
 
#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
   
    for (int i=1;i<n;i++)  
    {   
        for (int j=i;j>0;j--)
            {
                if(arr[j] > arr[j-1])
                {
                   int temp = arr[j];
                   arr[j] = arr[j-1];
                   arr[j-1] = temp;
                }
                else 
                break;
            }
        }
        
    }

void printarray(int arr[],int n)
{
    for (int i=0 ;i<n;i++)
    cout << arr[i] << " ";
}

int main()
{
    int arr[] = {10,34,32,12,43,2,1,1,2,2,3,1,3};
    int n = sizeof(arr)/sizeof(arr[1]);
   
    insertion_sort(arr,n);
    printarray(arr,n);
    
} 
 
 
    