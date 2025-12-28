#include<iostream>

using namespace std;

int main()
{
    int j,i,count;
    int n;
    cout<<"Enter input: ";
    // cin>>n;
    n = 4;
    int total = n*2;
    cout<<endl;
    for (i=0 ; i<total;i++){
        for (j=0; j<total;j++){
    
            if (i == 0  or i == total - 1){
                cout<<"* "; 
                
            }
            else if ( j > n - i-1  and j <n+i and n>i){
                 cout<<"  ";
            }
            // else if (j > total - i and j < )
            else if ( j > i - n and j < total + n +1 - i and n<= i ){
                 cout<<"  ";
            }
            else 
             cout<<"* ";
            

        }
        cout<<endl; 

    }

    return 0;

}