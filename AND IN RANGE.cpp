#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c;
	cin>>n>>c;
	int*arr=new int[n];
	int*ans=new int[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    for(int i=0;i<n;i++){
	ans[i]=0;
    }
    
    for(int i=0;i<n;i++){
	int count=0;
	while(arr[i]!=0){
		arr[i]=arr[i]/2;
		count=count+1;
	}
	ans[i]=count;
	count=0;
    }
    
     
    
	int max=0;
	int maxInd=0;
	for(int i=0;i<n;i++){
	if(ans[i]>=max){
	    max=ans[i];
	    maxInd=i;
	    
	}	
	}
	cout<<maxInd+1;
    
    
    
}
