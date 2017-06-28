#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main() {
	char a[10000],c,pd;
	int i=0,zs=0,bpoint=0;
	while(1){
		c=getchar();
		if(c=='E') break;
		if(c=='+'||c=='-') pd=c;
		else {
			if(c!='.') a[i++]=c;
		}
	}
	bpoint=i-1;
	cin>>zs;
	if(pd=='-') printf("%c",pd);
	if(zs<0){
		printf("0.");
		while(zs+1){
			printf("0");
			zs++;
		}
		printf("%s",a);
	}
	else if(zs>0){
		if(zs>=bpoint){
			printf("%s",a);
			while(zs-bpoint){
				printf("0");
				zs--;
			}
		}
		else{
			for(int i=0;i<strlen(a);i++){
				if(i!=0||a[i]!=0){
					printf("%c",a[i]);
					if(i==zs) printf(".");
				}
			}
		}
	}
	else{
		for(int i=0;i<strlen(a);i++){
			printf("%c",a[i]);
			if(i==1) printf(".");
		}
	}
	return 0;
}


