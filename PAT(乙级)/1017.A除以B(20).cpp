#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
	int a[1000],b,q,r=0,i=0,result=0;
	char c;
	while(c=getchar()){
		if(c==' ') break;
		a[i++]=c-'0';
	}
	cin>>b;
	int temp;
	for(int j=0;j<i;j++){
		if((a[j]+r*10)/b>=1) {
			temp=a[j]+r*10;
			printf("%d",temp/b);
			r=temp%b;
		}
		else{
			if(j||i==1)printf("0");
			r=a[j]%b;
		}
	}
	printf(" %d",r);
return 0;
}



