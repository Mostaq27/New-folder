#include<bits/stdc++.h>
using namespace std;
void merge_sort(int ar[], int l, int r){
	if(l<r){
	int mid=(l+r)/2;
	merge_sort(ar, l, mid);
	merge_sort(ar, mid+1, r);
	vector<int>v;
	int i=l,j=mid+1;
	while(i<=mid and j<=r){
		if(ar[i]<ar[j]){
			v.push_back(ar[i]);
			i++;
		}
		else{
			v.push_back(ar[j]);
			j++;
		}
	}
	while(j<=r){
		v.push_back(ar[j]);
		j++;
	}
	while(i<=mid){
		v.push_back(ar[i]);
		i++;
	}
	for(int i=0;i<v.size();i++){
		ar[l++]=v[i];
	}
	}
}
int main(){
	int n; cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	merge_sort(ar, 0, n-1);
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}cout<<endl;

	return 0;
} 