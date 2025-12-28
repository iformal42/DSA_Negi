#include<iostream>

using namespace std;

void bubble_sort(int arr[],int n)
{
   
    for (int i= n-2;i>=0 ;i--) { 
        bool is_swap = 0;              
        for (int j=0;j<=i;j++)
        {
            if (arr[j] > arr[j+1])
            {
                is_swap = 1;
                swap(arr[j+1],arr[j]);
            }
        }
        if (not is_swap)
        break;

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
   
    bubble_sort(arr,n);
    printarray(arr,n);
    
}