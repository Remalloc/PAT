#include<bits/stdc++.h>
using namespace std;
int main(){
	vector< vector<string> > v;
	int i;
	for(i=0;i<3;i++){
		vector<string> temp;
		string s;
		getline(cin,s);
		int j=0,k=0;
		while(j<s.length()){
			if(s[j]=='['){
				while(k<s.length()){
					k++;
					if(s[k]==']'){
						temp.push_back(s.substr(j+1,k-j-1));
						break;
					}
				}
			}
			j++;
		}
		v.push_back(temp);
	}
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		int lh,le,mo,re,rh;
		cin>>lh>>le>>mo>>re>>rh;
		//scanf("%d%d%d%d%d",&lh,&le,&mo,&re,&rh);
		if(lh>v[0].size()||rh>v[0].size()||le>v[1].size()||re>v[1].size()||mo>v[2].size()){
			printf("Are you kidding me? @\\/@\n");
		}
		else if(lh<1||le<1||mo<1||re<1||rh<1||mo<1){
			printf("Are you kidding me? @\\/@\n");
		}
		else{
			cout<<v[0][lh-1]<<"("<<v[1][le-1]<<v[2][mo-1]<<v[1][re-1]<<")"<<v[0][rh-1]<<endl;
		}
	}
    return 0;
}
