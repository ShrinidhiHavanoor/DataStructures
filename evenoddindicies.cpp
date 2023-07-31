#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,a[n],esum,osum;
    cout<<"Enter the elements of the array:-"<<endl;
    cout<<"Enter the elements of the array:-"<<endl;
    for(auto x:a){
        cin>>x;
    }
    for(int i=0;i<n;i++)
    {
        esum+=a[i];
        osum+=a[++i];
    }
    cout<<"Even Sum:-"<<esum<<endl;
    cout<<"Odd Sum:-"<<osum<<endl;
    cout<<"Difference="<<esum-osum<<endl;

}