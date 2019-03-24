#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
using namespace std;
bool arePermutation(string str1,string str2)
{


    int n1=str1.length();
    int n2=str2.length();
    if(n1!=n2)
        return false;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
     int result;
for(int i=0;i<n1);i++)
   if(str1[i]!=str2[i])
    return false;
    return true;
}
int main(){
    string str1="abcde";
    string str2="edcba";
    if(arePermutation(str1,str2))
    {
        cout<<"the strings "<<str1<<" "<<  str2 <<" are permutation\n";
    }
    else{
        cout<<"the strings "<<str1<<" "<<  str2<<" are not in  permutation\n";
    }

}
