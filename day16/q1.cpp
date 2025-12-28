#include<iostream>

using namespace std;

int main(){
    int i,num,ans,rem;
    cout << "Enter bit: ";
    cin >> num;
    ans = 0;
    int base = 1;
    for (i = 0; i<32; i++){
        rem =num % 10;
        num /= 10;
        ans += rem*base;
        base *= 2;
        if (num == 0){
            break;
        }
    }
    cout << ans;
    return 0;

}