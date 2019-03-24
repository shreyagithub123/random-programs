
#include<string>
#include <bits/stdc++.h>
using namespace std;
bool uniqueCharacters(string str)
{
    int n=str.length();
    int i,j;
    for( i=0;i<n;i++);
    {
    	for(j=i+1;j<n;j++)
    	if(str[i]==str[j])
    	return false;
	}
	return true;

}
int main()
{
    string str="abc";
    if(uniqueCharacters(str))
    {
        cout<<"the string is "<<str<<" is unique\n";
    }
    else
    {
         cout<<"the string is "<<str<<" is not unique\n";
    }
        return 0;
}
