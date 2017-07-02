#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
bool cmpdown(char a,char b){
	return a>b;
}
bool cmpup(char a,char b){
	return a<b;
}
int main() {
	int i=0,temp;
	char c,n[5],m[5];
	fill(n,n+4,'0');
	for(i=3;i>=0;i--){
		c=getchar();
		if(c=='\n')break;
		n[i]=c;
	}
	sscanf(n,"%d",&temp);
	if(temp%1111==0) printf("%04d - %04d = 0000",temp,temp);
	else{
		while(1){
			int a,b;
			strcpy(m,n);
	        sort(n,n+4,cmpdown);
			sort(m,m+4,cmpup);
			sscanf(n,"%d",&a);
			sscanf(m,"%d",&b);
			printf("%04d - %04d = %04d\n",a,b,a-b);
			if(a-b==6174) break;
			sprintf(n,"%d",a-b);
			while(strlen(n)<4) n[strlen(n)]='0';
		}

	}

return 0;
}



