#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,key,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 and a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
        }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" "; cout<<endl;

return 0;
}
