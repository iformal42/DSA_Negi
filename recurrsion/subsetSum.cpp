#include<iostream>
using namespace std;
void subsetSum(int arr[],int n,int i,int sum)
{
    if(i == n)
    {
        cout<<sum<<endl;
        return ;
    }
    subsetSum(arr,n,i+1,sum);
    subsetSum(arr,n,i+1,sum+arr[i]);
   
}
int main()
{
    int arr[] = {3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    subsetSum(arr,n,0,0);

    return 0;
}