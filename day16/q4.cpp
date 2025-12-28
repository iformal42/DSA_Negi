#include<iostream>

using namespace std;


int main(){
    int num ,rem;
    cout << "Enter number: ";
    cin >> num;

    int decimal = 0;
    int base = 1;
    while (num>0){
        rem = num % 10;
        num /= 10;
        
        decimal += rem*base;
        base *= 2;
    }

    cout << decimal<<endl;
    
    int octal = 0;
    base = 1;
    
    while (decimal>0){
        rem = decimal % 8;
        decimal /= 10;
        
        octal += rem*base;
        base *=10;
       
    }
    cout << octal;

    return 0;

}