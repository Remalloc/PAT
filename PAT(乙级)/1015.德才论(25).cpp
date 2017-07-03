#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <algorithm>
#include<list>
using namespace std;
int H,L;
typedef struct{
	int id;
	int point1;
	int point2;
}stu;
bool cmp(const stu &a,const stu &b){
	if(a.point1+a.point2==b.point1+b.point2){
		if(a.point1==b.point1) return a.id < b.id;
		return a.point1>b.point1;
	}
	return a.point1+a.point2 > b.point1+b.point2;
}
int main() {
	list<stu> mstu[4];
	list<stu>::iterator mit;
	int n,i,mp1,mp2,mid,count=0;
	cin>>n>>L>>H;
	for(i=0;i<n;i++){
		int j;
		scanf("%d%d%d",&mid,&mp1,&mp2);
		if(mp1<L||mp2<L) {
			count++;
			continue;
		}
		else if(mp1>=H&&mp2>=H) j=0;
		else if(mp1>=H)	j=1;
		else if(mp1>=mp2) j=2;
		else j=3;
		stu node={mid,mp1,mp2};
		mstu[j].push_back(node);
	}
	for(i=0;i<4;i++) mstu[i].sort(cmp);
	cout<<n-count<<endl;
	for(i=0;i<4;i++){
		if(mstu[i].empty()) continue;
		for(mit=mstu[i].begin();mit!=mstu[i].end();++mit){
			printf("%d %d %d\n",mit->id,mit->point1,mit->point2);
		}
	}
return 0;
}



