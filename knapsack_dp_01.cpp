#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int wt[N],val[N];
int dp[N][N];
int knapsack(int n, int w){
	if(n<=0 || w<=0)
		return 0;
	int ans = knapsack(n-1,w);
	if(w-wt[n-1]>=0) 
		ans = max(ans, knapsack(n-1, w-wt[n-1])+val[n-1]);
	return ans;
}
int main(){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++) 
			dp[i][j]=-1;
	}
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>val[i]>>wt[i];
	}
	int w; cin>>w;
	cout<<knapsack(n,w)<<endl;;

	return 0;
}