#include<iostream>


using namespace std;
void selection_sort(int arr[], int n)
{
    
    for (int i =0;i<n-1;i++)
    {
    int min_index = i;
    for (int j = i+1; j<n;j++)
    {
        if (arr[min_index] > arr[j])
        {
            min_index = j;
        } 
    }
    swap(arr[min_index],arr[i]);
    }
}
void printarray(int arr[],int n)
{
    for (int i=0 ;i<n;i++)
    cout << arr[i] << " ";
}

int main()
{
    int arr[1000];

    int n ;
    cout<< "Enter number : ";
    cin >> n;
    cout<< "Enter array : ";
    for (int i = 0 ;i<n;i++)
    cin >> arr[i];

    selection_sort(arr,n);
    printarray(arr,n);
    
}