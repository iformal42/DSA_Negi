 //code here
 
#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
   
    for (int i=n-2;i>=0;i--)  
    {   
        for (int j=i;j<n-1;j++)
            {
                if(arr[j] > arr[j+1])
                {
                   swap(arr[j],arr[j+1]);
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
    int arr[] = {10,34,32,12,43,2,1,3};
    int n = sizeof(arr)/sizeof(arr[1]);
   
    insertion_sort(arr,n);
    printarray(arr,n);
    
} 
 
 
    