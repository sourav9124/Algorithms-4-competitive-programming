#include<bits/stdc++.h>
using namespace std;

long long func1(long long a, long long b) {
    long long x = a^b;
    long long s = x>>1;

    while (s) {
        x = x|s;
        s >>= 1;
    }
    return a&b&~x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   long long int a,b,ans;
	   cin>>a>>b;
	   
	    ans=func1(a,b);
	    cout<<ans<<endl;
	   
	}
	
	
	
}
