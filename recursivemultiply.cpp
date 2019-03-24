#include<stdio.h>
#include<iostream>
int multiply(int x,int y)
{
    if(y==0)
        return 0;
     if(y>0)
        return x+multiply(x,y-1);

}
int main()
{
    int res=multiply(2,3);
    cout<< "the ans is "<< res;
    return 0;

}
