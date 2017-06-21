#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<set>
#include<iterator>
#include<list>
#include<vector>
using namespace std;
typedef struct{
	string id;
	int mnum;
	int num;
}stu;
int main()
{
	int n,i;
	cin>>n;
	stu mstu[n+1];
	for(i=1;i<=n;i++){
		stu node;
		cin>>node.id>>node.mnum>>node.num;
		mstu[node.mnum]=node;
	}
	cin>>n;
	for(i=1;i<=n;i++){
		int temp;
		cin>>temp;
		cout<<mstu[temp].id<<" "<<mstu[temp].num<<endl;
	}

	return 0;
}


