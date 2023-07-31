#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int res=0;
    string a[]={"++x","x++","x--"};
    for(int i=0;i<4;i++)
    {
        if(a[i]=="++x" || a[i]=="x++")
            res+=1;
        else if(a[i]=="--x" || a[i]=="x--")
            res-=1;
    }
    cout<<"Result="<<res<<endl;
}