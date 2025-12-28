
#include<iostream>


using namespace std;


void printarray(int arr[],int n)
{
    for (int i=0 ;i<n;i++)
    cout << arr[i] << " ";
}

int main()
{
    int arr[] = {10,34,32,12,43,2,1,3};
    int n = sizeof(arr)/sizeof(arr[1]);
   
    for (int i = n-1 ;i>0;i--)
    {
        int max_index = i;
        for (int j=i-1;j>=0;j--)
        {
            if (arr[max_index] < arr[j])
            {
                max_index = j;
            }
        }
        swap(arr[max_index],arr[i]);
    }
   
    printarray(arr,n);
    
}