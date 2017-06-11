#include<bits/stdc++.h>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	string sr;
	int count[2]={0,0},i,sum=0;
	getline(cin,sr);
	for(i=0;i<sr.length();i++){
		if(sr[i]<='z'&&sr[i]>='a'){
			sum+=sr[i]-'a'+1;
		}
		if(sr[i]<='Z'&&sr[i]>='A'){
			sum+=sr[i]-'A'+1;
		}
	}
	while(sum){
		int temp;
		temp=sum%2;
		if(temp==0) count[0]++;
		else count[1]++;
		sum/=2;
	}
	cout<<count[0]<<" "<<count[1];
    return 0;
}

