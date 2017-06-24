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
int main() {
	int n,i,node,mp;
	cin>>n;
	int mstu[n+1][1];
	for(i=1;i<=n;i++) mstu[i][0]=0;
	for(i=1;i<=n;i++){
		scanf("%d %d",&node,&mp);
		mstu[node][0]+=mp;
	}
	int max=mstu[1][0];
	int p=1;
	for(i=1;i<=n;i++) if(mstu[i][0]>max){
		max=mstu[i][0];
		p=i;
	}
	printf("%d %d",p,max);
return 0;
}





