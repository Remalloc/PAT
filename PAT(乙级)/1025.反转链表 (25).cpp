#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#define N 100000
using namespace std;
typedef struct {
	int Address;
	int Data;
	int Next;
}stu;
int main() {
	stu mstu[N];
	vector<stu> list;
	int address,fn,n,k;
	scanf("%d %d %d",&fn,&n,&k);
	int i;
	for(i=0;i<n;i++){
		stu node;
		scanf("%d %d %d",&node.Address,&node.Data,&node.Next);
		mstu[node.Address]=node;
	}
	address=fn;
	while(address!=-1){
		list.push_back(mstu[address]);
		address=mstu[address].Next;
	}
	int size=list.size();
	int round=size/k;
	int start,end;
	for(i=1;i<=round;i++){
		start=(i-1)*k;
		end=i*k;
		reverse(list.begin()+start,list.begin()+end);
	}

	for(i=0;i<size-1;i++){
		printf("%05d %d %05d\n",list[i].Address,list[i].Data,list[i+1].Address);
	}
	printf("%05d %d %d\n",list[i].Address,list[i].Data,-1);
return 0;
}


