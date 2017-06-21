#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count[6],k=0,n=0;
	char c,sc[]={'P','A','T','e','s','t'};
	fill(count,count+6,0);
	while(1){
		c=getchar();
		if(c=='\n') break;
		switch(c){
			case'P':count[0]++;break;
			case'A':count[1]++;break;
			case'T':count[2]++;break;
			case'e':count[3]++;break;
			case's':count[4]++;break;
			case't':count[5]++;break;
			default:k++;
		}
		n++;
	}
	int i;
	while(n-k){
	for(i=0;i<6;i++){
		if(count[i]!=0){
			printf("%c",sc[i]);
			count[i]--;
			n--;
		}
	}
	}
	return 0;
}

