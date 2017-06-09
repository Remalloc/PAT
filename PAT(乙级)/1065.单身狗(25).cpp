#include<bits/stdc++.h>
using namespace std;
const int N=100005;
struct stu{
	bool have=false;
	bool same=false;
	int per=-1;
};
int main(){
	int n,i,count=0;
	stu mstu[N];
	cin>>n;
	for(i=0;i<n;i++){
		int t1,t2;
		scanf("%d %d",&t1,&t2);
		mstu[t1].per=t2;
		mstu[t2].per=t1;
	}
	cin>>n;
	for(i=0;i<n;i++){
		int temp,mt;
		scanf("%d",&temp);
		if(mstu[temp].have==true) continue;
		mstu[temp].have=true;
		mt=mstu[temp].per;
		if(mt!=-1) mstu[mt].same=true;
		if(mstu[temp].same) count--;
		else count++;
	}
	printf("%d\n",count);
	int flag=1;
	for(i=0;i<N;i++){
		if(mstu[i].have==true&&mstu[i].same==false){
			if(flag){
				printf("%.5d",i);
				flag=0;
			}
			else printf(" %.5d",i);
		}
	}
    return 0;
}

