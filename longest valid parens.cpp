#include<bits/stdc++.h>
using namespace std;
int findparens(string str)
{
    stack <int> s;
    s.push(-1);
    int result =0;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(')
            s.push(i);
        else
        {
                s.pop();
                if (!s.empty())
                result = max(result, i - s.top());
            else
                s.push(i);
        }
    }
    return result;
}
int main()
{
    string str="((()";
    cout<<findparens(str)<<endl;
    return 0;
}
