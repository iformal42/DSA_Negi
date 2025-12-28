
#include<iostream>
#include<math.h>


using namespace std;
bool GCDIs1(int a,int b){

    int r=b;
    while(r!=0)
    {
        r = a%r;
        a = b;
        b = r;
    }

    return a == 1;

}

int valid_int(char var)
{
    int a;
    while(true)
    {
        cout << "Enter " << var << " = ";
        cin >> a;

        if (cin.fail()) 
        {
            
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer."<<endl;
        } 
        else
        break;
    }
    
    return a;
}
int main(){
    int a,b;
    
    a = valid_int('a');
    b = valid_int('b');
    


    if(GCDIs1(a,b))
    cout<<a<<" "<<b<<" are relatively prime"<<endl;
    else
    cout<<a<<" "<<b<<" are not relatively prime"<<endl;
    int i=0;

    cout<<"\nAll relatively prime to "<<a<<" :-\n";
    for(i=2;i<a;i++)
    if(GCDIs1(i,a))
    cout<<i<<" ";

    cout<<"\nAll relatively prime to "<<b<<" :-\n";
    for(i=2;i<b;i++)
    if(GCDIs1(i,b))
    cout<<i<<" ";


    
    return 0;
    



}