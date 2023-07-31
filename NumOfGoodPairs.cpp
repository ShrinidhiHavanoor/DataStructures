#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    int count=0;
    int a[]={1,2,3,1,1,3};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if(a[i]==a[j])
            count++;
        }
        
    }
    cout<<"The Number of Good Pairs are:-"<<count<<endl;
    
}