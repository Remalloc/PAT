#include<bits/stdc++.h>
using namespace std;
bool cmp(char a,char b){
	return a<b;
}
int main()
{
	char sr[1001];
	char c;
	int i=0;
	while(1){
		c=getchar();
		if(c=='\n') break;
		if(c<='Z'&&c>='A') c=c+'a'-'A';
		if(c<='z'&&c>='a') sr[i++]=c;
	}
	sr[i]='\0';
	sort(sr,sr+strlen(sr),cmp);
	int count=0,temp=0,max=0;
	char *p=&sr[0],*r=p;
	for(i=0;i<strlen(sr);i++){
		if(sr[i]==*p) temp++;
		if(sr[i]!=*p||i+1==strlen(sr)){
			if(temp>max){
				max=temp;
				r=p;
			}
			p=&sr[i];
			temp=1;
		}
	}
	cout<<*r<<" "<<max;
	return 0;
}


