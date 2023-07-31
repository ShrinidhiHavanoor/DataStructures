#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[]={2,5,1,3,4,7},b[6];
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0,j=(n/2),k=0;i<(n/2),j<n,k<n;i++,j++,k++)
    {
        b[k]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"b["<<i<<"]="<<b[i]<<endl;
    }
}