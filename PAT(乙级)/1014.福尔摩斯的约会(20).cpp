#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
	char str[4][80],day[][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int i,flag=0;
	for(i=0;i<4;i++) cin>>str[i];
	for(i=0;i<strlen(str[0]);i++){
		if(flag&&str[0][i]>='0'&&str[0][i]<='9'&&str[0][i]==str[1][i]){
			cout<<0;
			cout<<str[0][i]<<":";
			break;
		}
		if(flag&&str[0][i]>='A'&&str[0][i]<='N'&&str[0][i]==str[1][i]){
			cout<<(str[0][i]-'A'+10)%24<<":";
			break;
		}
		if(str[0][i]>='A'&&str[0][i]<='G'&&str[0][i]==str[1][i]){
			cout<<day[str[0][i]-'A']<<' ';
			flag=1;
		}
	}
	for(i=0;i<strlen(str[2]);i++){
		if(((str[2][i]>='A'&&str[2][i]<='Z')||(str[2][i]>='a'&&str[2][i]<='z'))&&str[2][i]==str[3][i]){
			if(i<10) cout<<0;
			cout<<i;
			break;
		}
	}
return 0;
}


