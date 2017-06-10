#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int n;
	cin>>n;
	int sr[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&sr[i]);
	}
	sort(sr,sr+n,cmp);
	int max=n;
	for(i=1;i<=n;i++){
		if(sr[i-1]<=i) break;
	}
 cout<<i-1;
    return 0;
}

