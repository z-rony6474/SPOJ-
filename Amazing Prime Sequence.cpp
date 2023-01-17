#include<bits/stdc++.h>
#define nl cout<<endl;
#define First_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef long long ll;
const ll mx=1e7;
ll min_p[mx];
bool prime[mx + 1];
void seive()
{
	memset(prime, true, sizeof(prime));
	for (int p = 2; p<= mx; p++) {
		if (prime[p] == true) {
			for (int i = p; i <=mx; i += p)
			{
				if(min_p[i]==0)
				{
					min_p[i]=p;
					prime[i] = false;
				}
			}
			
		}
	}
	min_p[0]=min_p[1]=0;
	for(ll i=2;i<=mx;i++)
	{
	   min_p[i]=min_p[i]+min_p[i-1];
	}
}
void solve()
{
	ll n;cin>>n;
	cout<<min_p[n]<<endl;
}
int main()
{
	seive();
	First_IO; ll t;
	cin>>t;
	while(t--) solve();
	return 0;
}
// Alhamdulillah
