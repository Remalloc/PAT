#include<bits/stdc++.h>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	set<int> mset;
	int sr[10],i=0,j,sum=0,n;
	cin>>n;
	for(i=0;i<n;i++) cin>>sr[i];
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			int temp;
			temp=sr[i]*10+sr[j];
			if(mset.count(temp)==0){
				mset.insert(temp);
				sum+=temp;
			}

			temp=sr[i]+sr[j]*10;
			if(mset.count(temp)==0){
				mset.insert(temp);
				sum+=temp;
			}
		}
	}
	cout<<sum;
    return 0;
}

