 #include<iostream>

using namespace std;
//bubble_sort by taking smallest number 1st
void bubble(int arr[],int n)
{
    for (int i=0 ; i<n-1;i++)   
    {  
        bool is_swap = 1;       
        for (int j=n-1;j>i;j--)
        {
            if (arr[j-1] > arr[j])
            {
                is_swap = 1;
                swap(arr[j-1],arr[j]);
            }
        }
        if(! is_swap)
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
   
    bubble(arr,n);
    printarray(arr,n);
    
}