#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
int main() {
	int sum,i,n,count;
	char c;
	scanf("%d %c",&sum,&c);
	i=1;
	count=1;
	while(1){
		count+=(2*i+1)*2;
		if(count>sum)break;
		i++;
	}
	sum=sum-(count-(2*i+1)*2);
	n=i-1;
	for(i=n;i>=0;i--){
		int j;
		for(j=0;j<n-i;j++) printf(" ");
		for(j=2*i+1;j>0;j--){
			printf("%c",c);
			if(j-1==0) printf("\n");
		}
	}
	for(i=1;i<=n;i++){
		int j;
		for(j=0;j<n-i;j++) printf(" ");
		for(j=2*i+1;j>0;j--){
			printf("%c",c);
			if(j-1==0) printf("\n");
		}
	}
	printf("%d",sum);

return 0;
}


