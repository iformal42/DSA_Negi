
#include<iostream>


using namespace std;


void printarray(char arr[],int n)
{
    for (int i=0 ;i<n;i++)
    cout << arr[i] << " ";
}

int main()
{
    char arr[] = {'c','d','a','e','g','b'};
    int n = sizeof(arr)/sizeof(arr[1]);
   
    for (int i = 0 ;i<n-1;i++)
    {
        int min_index = i;
        for (int j=i+1;j<n;j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
   
    printarray(arr,n);
    
}