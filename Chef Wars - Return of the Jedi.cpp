#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define mod 1e6+7
using namespace std;
int main()
{
    fast;
    ll t;cin>>t;
    while(t--)
    {
        double a,b;cin>>a>>b;
        while(b!=0)
        {
            a=a-b;
            if(a<=0)
              {break;}
            b=b/2;
            if(b==0.5)
            {
                b=0;
            }
        }
        if(a>b)
          cout<<0<<endl;
        else
          cout<<1<<endl;
    }
}