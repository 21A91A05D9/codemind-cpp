#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,b=1,i=2;
		cin>>n;
		while(i<=n){
			if(i%2 == 0) b=(b^i);
			else b=(b&i);
			i+=1;
		}
		cout<<b<<endl;
	}
}