#include<iostream>

using namespace std;
int main(){
    
    int a[] = {2,12,35,4,99,100,83,4000,3949,4999,3999};
    int len = sizeof(a)/sizeof(a[0]);
    int max = a[0],sec_max;
    for(int i=1;i<len;i++){
        if(max < a[i]){
            sec_max = max;
            max = a[i];
        }
    }
    cout << sec_max <<" is second max number.";
}