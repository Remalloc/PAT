#include<bits/stdc++.h>
using namespace std;
struct stu{
	string name;
	int tall;
};
bool cmp(stu a,stu b){
	if(a.tall==b.tall) return a.name<b.name;
	else return a.tall>b.tall;
}
int main(){
	vector<stu> mstu;
	int n,k,mk,i,j,count=0;
	std::ios::sync_with_stdio(false);
	cin>>n>>k;
	for(i=0;i<n;i++){
		stu node;
		cin>>node.name>>node.tall;
		mstu.push_back(node);
	}
	sort(mstu.begin(),mstu.end(),cmp);
	for(i=0;i<k;i++){
		if(i==0){
			mk=n-n/k*(k-1);
		}
		else mk=n/k;
		string s[mk];
		s[mk/2]=mstu[count].name;
		count++;
		int pd=1,flag=1;
		for(j=0;j<mk-1;j++){
			if(flag){
				s[mk/2-pd]=mstu[count++].name;
				flag=0;
			}
			else{
				s[mk/2+pd]=mstu[count++].name;
				pd++;
				flag=1;
			}
		}
		for(j=0;j<mk;j++){
			cout<<s[j];
			if(j+1!=mk) cout<<" ";
			else cout<<endl;
		}
	}
    return 0;
}

