#include<iostream>

using namespace std;

int main()
{
    int j,i,count;
    int n;
    cout<<"Enter input: ";
    cin>>n;

    for (i=1;i<=n;i++){
        for (j=n-i;j>0;j--){
            cout<<"  ";
        }
        count = i;
        for (j=1;j<=2*i-1;j++) {
            if (j > i){
                count -= 1;
                cout<<count<<" ";
            }
            else{
                cout<<j<<" ";
            }
            
        }
        cout<<endl;
   
    }    
 return 0;
}