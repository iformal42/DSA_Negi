#include<iostream>
using namespace std;
bool subsetSum(int arr[],int n,int i,int target,int steps[])
{
     if (target == 0)
    {
        return true;
    }
    if(i == n || target <0)
    {
        return false;
    }
    steps[0]++;
    return subsetSum(arr,n,i+1,target,steps) || subsetSum(arr,n,i+1,target - arr[i],steps);
   
}
int subsetSum2(int arr[],int n,int i,int target,int steps[])
{
    if (target == 0)
    {
        return 1;
    }
    if(i == n || target <0)
    {
        return 1;
    }
    steps[0]++;
    return subsetSum(arr,n,i+1,target,steps) + subsetSum(arr,n,i+1,target - arr[i],steps);
   
}
int main()
{
    int arr[] = {9,3,3,3,3};
    int totalFunctionCall[] = {0};
    int target = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<subsetSum(arr,n,0,target,totalFunctionCall)<<endl;
    cout<<"Total function call by OR function "<<totalFunctionCall[0]<<endl;
    totalFunctionCall[0] = 0;
    cout<<subsetSum2(arr,n,0,target,totalFunctionCall)<<endl;
    cout<<"Total function call by add function "<<totalFunctionCall[0];

    
    
  
    return 0;
}