#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1, pair<int,int> p2){
	double v1= (double) p1.first/p1.second;
	double v2= (double) p2.first/p2.second;
	return v1>v2;
}
int main(){
	int n; cin>>n;
	vector<pair<int,int> > vp(n);
	for(int i=0;i<n;i++){
		cin>>vp[i].first>>vp[i].second;
	}
	sort(vp.begin(), vp.end(), compare);
	int w; cin>>w;
	double sum=0;
	for(int i=0;i<n;i++){
		if(w>=vp[i].second){
			w-=vp[i].second;
			sum+=vp[i].first;
			continue;
		}
		sum+=((double) vp[i].first/vp[i].second)*w;
		w=0; break;
	}
	cout<<sum<<endl;

	return 0;
}