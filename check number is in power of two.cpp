#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int a=n-1;
	
	n=n&a;
	if(n==0)
	{
		cout<<"number is power of 2 "<<endl;
	}
	else
	{
		cout<<"not there"<<endl;
	}
}
