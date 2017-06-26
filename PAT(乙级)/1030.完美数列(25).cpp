#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<list>
#include<set>
using namespace std;
bool cmp(long long a,long long b){
	return a<b;
}
int main() {
	long long n,p;
	vector<long long> mlist;
	cin>>n>>p;
	int i;
	for(i=0;i<n;i++){
		long long temp;
		scanf("%d",&temp);
		mlist.push_back(temp);
	}
	sort(mlist.begin(),mlist.end(),cmp);
	long long count=0;
	int j=1;
	for(i=0;i<mlist.size();i++){
		for(j=i+count;j<mlist.size();j++){
			if(mlist[j]<=mlist[i]*p){
				count<j-i+1?count=j-i+1:1;
			}
			else break;
		}
	}
	cout<<count;
return 0;
}



