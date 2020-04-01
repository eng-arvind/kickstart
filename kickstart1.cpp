#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include<vector>
#define ll long long int
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll t;
    cin>>t;
    ll index=1;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        vector<ll> v;
        for(ll i=0;i<n;i++)
        {
            ll a=0;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll l=-1;
        ll h=p-1,cmin=0;
        for(ll i=0;i<h;i++)
        {
           cmin+=v[h]-v[i];
         }
         ll rmin=cmin;
         for(ll i=0;i<v.size()-p;i++)
         {
           cmin-=v[++h]-v[++l];
           cmin+=p*(v[h]-v[h-1]);
           rmin = min(rmin,cmin);
         }
        cout<<"Case #"<<index<<": "<<rmin<<endl;
        index++;
    }
    return 0;
}
