//Q) octal to Binary


#include<iostream>
using namespace std;
int main(){
    int num = 15;
    int decimal=0,rem,base = 1;
    int a[5] = {0};
    for (int i = 0 ; i<5;i++){
        cout << a[i]<<endl;
    }
    
    // octa to decimal
    while(num > 0){
        rem = num % 10;
        num /= 10;
        decimal += rem*base;
        base *= 8;
    }

    
    // cout << decimal<<endl;
    // decimal to binary;
    int binary = 0;
    base = 1;
    while(decimal>0){
        rem = decimal % 2;
        decimal /= 2;
        binary +=rem*base;
        base *= 10;
    }

    //  cout << binary;
    return 0;
}