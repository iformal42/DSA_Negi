#include<iostream>
using namespace std;
int count(string s,int i)
{
 if(i == -1)
 return 0;
 if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
 return 1+count(s,i-1);
 else 
 return count(s,i-1);
}
int main()
{
    string s = "m";
    int x = count(s,s.length()-1);
    cout<<x;
    return 0;
}