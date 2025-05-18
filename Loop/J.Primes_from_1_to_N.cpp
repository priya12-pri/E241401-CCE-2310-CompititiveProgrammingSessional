//Problem Name : Primes from 1 to N
//Course Title : Competitive programming sessional 
//course code : CCE -2310
// course Teacher Name : Mirza Raquib
//Date :19.05.2025
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool a[n+1];
    for(int i=0;i<=n;i++)
    {
        a[i]=true;
    }

    for(int j=2;j<=sqrt(n)+1;j++)
    {
        if(a[j]==true)
        {
            for(int k=j+j;k<=n;k++)
            {
                if(k%j==0)
                {
                    a[k]=false;
                }
            }
        }
    }
        
    for(int t=2;t<=n;t++)
    {
        if(a[t]==true)
        {
            cout<<t<<" ";
        }
    }
    cout<<endl;
}
