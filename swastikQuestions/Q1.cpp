#include <iostream>
using namespace std;
string one = " one";
string two = " two";
string three = " three";
string four = " four";
string five = " five";
string six = " six";
string seven = " seven";
string eight = " eight";
string nine = " nine";
string ten = " ten";

string prefixTeen = "teen";
string prefixTy = "ty";
string prefixHundred = " hundred " ;

string prefix20 = "twen";
string prefix30 = "thir";
string prefix50 = "fif";

string is11 = "eleven";
string is12 = "twelve";
string is13 = "thirteen";


void oneTo10(int n)
{
    switch (n)
    {
    case 1:
        cout << one;
        break;
    case 2:
        cout << two;
        break;
    case 3:
        cout << three;
        break;
    case 4:
        cout << four;
        break;
    case 5:
        cout << five;
        break;
    case 6:
        cout << six;
        break;
    case 7:
        cout << seven;
        break;
    case 8:
        cout << eight;
        break;
    case 9:
        cout << nine;
        break;
    case 10:
        cout << ten;
        break;
    default:
        break;
    }
}
void elevenTo99(int n)
{
    if(0<=n && n <=10 )
    {
      oneTo10(n);
      return ;
    }

    if (n == 11)
    {
        cout << is11;
    }
    else if ( n == 12)
    {
     cout << is12;
    }
    else if ( n == 13)
    {
     cout << prefix30 << prefixTeen;
    }
    else if (n == 15) 
    {
        cout<<prefix50<<prefixTeen;
    }
    
    else if(n<=19)
    {
        oneTo10(n%10);
        cout << prefixTeen;
    }
     else if(n<=29)
    {
        cout<<prefix20;
     
    }
     else if(n<=39)
    {
        cout<<prefix30;
       
    }
    else if(50<=n && n<=59)
    {
        cout<<prefix50;
        
    }
    else {
        oneTo10(n/10); 
    }
     cout << prefixTy;
     oneTo10(n%10); 
}
int main()
{   
    int n = 10;
    cout <<"enter number: ";
    cin>> n;
     cout << endl;
    if (n == 0)
    {
        cout << "zero";
    }
    else if (0 < n && n <= 10)
    {
        oneTo10(n);
        return 0;
    }
   else  if (11 <= n && n <= 99)
    {
        elevenTo99(n);
        return 0;
    }
    else{
        oneTo10(n/100);
        cout<<prefixHundred;
        elevenTo99(n%100);
    }

    return 0;
}