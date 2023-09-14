#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int a[],int n,int k){
	for(int i=0;i<n;i++){
		if(a[i]==k)
			return true;
	}
	return false;
}
int main(){
	int n,k; cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	bool f=linearSearch(a,n,k);
	cout<<(f ? "YES" : "NO")<<endl;
}