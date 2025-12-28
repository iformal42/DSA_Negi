#include<iostream>

using namespace std;

int main(){
    int arr[3][4];
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[0][0]<<endl;

    int **p = new int*[3];
    for(int i=0;i<3;i++)
    {
        p[i] = new int[4];
    }
    cout<<p<<endl;
    cout<<p[0]<<endl;
    cout<<p[0][0]<<endl;
}