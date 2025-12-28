#include<iostream>

int main(){
    int i,n;
    int j;
    std::cout<<"enter n: ";
    std::cin >> n;

    for (i=0;i<=n;i++){
        for (j=n-i; j>0;j--){
             std::cout<<"  ";
        }
           
        for (j=0;j<i;j++){
            char c = 'E' - j;  
            std::cout<<c<<" ";
        }
        std::cout<<std::endl;

    }
    return 0;
}