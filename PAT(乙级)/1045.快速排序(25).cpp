#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k,max=0;
	cin>>n;
	int num[n+1]={0},re[n+1];
	int temp,j=0;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(num[i]>=max){
			re[j++]=num[i];
			max=num[i];
		}
		else{
			for(k=j-1;k>=0;k--){
				if(re[k]<=num[i]){
					j=k+1;
					break;
				}
				else j=0;
			}
		}
	}
	if(j<=0) printf("0\n\n");
	else printf("%d\n",j);
	for(i=0;i<j;i++){
		printf("%d",re[i]);
		if(i+1!=j) printf(" ");
	}
	return 0;
}


