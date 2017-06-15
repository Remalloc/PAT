#include<bits/stdc++.h>
using namespace std;
typedef struct stu{
	int id;
	int point=0;
	bool operator==(const stu &a) const{
		return a.id==id;
	}
};
bool cmp(stu a,stu b){
	return a.point>b.point;
}
int main()
{
	vector<stu> mstu;
	vector<stu>::iterator mit;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		stu node;
		scanf("%d-%*d %d",&node.id,&node.point);
		mit=find(mstu.begin(),mstu.end(),node);
		if(mit!=mstu.end()) mit->point=mit->point+node.point;
		else mstu.push_back(node);
	}
	sort(mstu.begin(),mstu.end(),cmp);
	printf("%d %d",mstu[0].id,mstu[0].point);
	return 0;
}

