#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,txor=0,sb,ans=0,ans1=0;
	cin>>n;
	vector<int> arr(n);
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
	// total xor,find the Rightmostsetbit,divide into two by anding
	for(int i=0 ; i<n ; i++){
		txor=txor^arr[i];
	}
	sb=(txor & ~(txor - 1));
	for(int i=0 ; i<n ; i++){
		if(arr[i] & sb) ans=ans^arr[i];
		else ans1=ans1^arr[i];
	}
	if(ans>ans1){
	    cout<<ans1<<" "<<ans;
	}
	else{
	    cout<<ans<<" "<<ans1;
	}
}