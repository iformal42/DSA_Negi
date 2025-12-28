#include<iostream>

using namespace std;
int main(){
    
    int a[] = {13,2,12,35,9,4,99,100,83,4000,3949,4999,3999};
    int len = sizeof(a)/sizeof(a[0]);
    int min = a[0],sec_min,third_min;
    for(int i=1;i<len;i++){
        if(min > a[i] ){  
            sec_min = min;
            min = a[i];
        }
        if (a[i] > min && a[i] < sec_min){
            third_min = sec_min;
            sec_min = a[i];
        }
       
    }
    cout << third_min <<" is second max number.";
}