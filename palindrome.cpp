#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
    int i;
    int count [256]={0};
    for(i=0;str[i];i++)
        count[str[i]]++;
    int odd=0;
    for(int i=0;i<256;i++)
     {

         if(count[i]&1)
            odd++;
         if(odd>1)
            return false;
     }
     return true;
}
int main()
{
   string  str="geekfogeek";
    if(isPalindrome(str)){
    cout<<str<<"is a palindoeme";
    }
    else {
        cout<<str<<"isnot palindrome";
    }
    return 0;

}
