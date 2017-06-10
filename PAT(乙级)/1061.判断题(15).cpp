#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i;
	std::ios::sync_with_stdio(false);
	cin>>n>>m;
	int ti[m][2];
	for(i=0;i<m;i++){
		cin>>ti[i][0];
	}
	for(i=0;i<m;i++){
		cin>>ti[i][1];
	}
	for(i=0;i<n;i++){
		int count=0;
		for(int j=0;j<m;j++){
			int temp=0;
			cin>>temp;
			if(temp==ti[j][1]) count+=ti[j][0];
		}
		cout<<count<<endl;
	}
    return 0;
}

