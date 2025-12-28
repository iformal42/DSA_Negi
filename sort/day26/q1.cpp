 #include<iostream>

using namespace std;
//bubble_sort DESC order
void bubble(int arr[],int n)
{
    for (int i=0;i<n-1;i++ )
    {
        for (int j=n-1;j>i;j--)
        {
            if (arr[j] > arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
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
    int arr[] = {10,34,32,12,1,43,2,3};
    int n = sizeof(arr)/sizeof(arr[1]);
    bubble(arr,n);
    printarray(arr,n);
    
}