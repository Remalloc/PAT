#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main() {
	long c;
	int a,b,d,sc[100];
	cin>>a>>b>>d;
	c=a+b;
	int j=0;
	while(c){
		int i;
		i=c%d;
		c/=d;
		sc[j++]=i;
	}
	if(j==0) printf("0");
	for(int i=j-1;i>=0;i--){
		if(sc[i]>9) printf("%c",sc[i]+55);
		else printf("%d",sc[i]);
	}
return 0;
}


