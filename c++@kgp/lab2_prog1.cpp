#include<iostream>
using namespace std;
int main()
{
    int n,flag;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"So the primes not greater than n are:"<<endl;
    for(int i=2;i<=n;i++)
    {
        flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}