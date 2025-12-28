#include<iostream>

using namespace std;

int main(){
    int j,i,count;
    int n;
    cout<<"Enter input: ";
    cin>>n;

    for (i=1;i<=n;i++){
        for (j=n-i;j>0;j--){
            cout<<"  ";
        }
        
        // odd numbers
        count = 2*i - 1;
        for(j=0 ;j<count;j++){
            cout <<"* ";

        }
        cout<<endl;
    }
    // return 0;
    
}