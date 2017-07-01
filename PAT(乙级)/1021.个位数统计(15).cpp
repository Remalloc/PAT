#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main() {
	char sr[1000];
	int pd[10],len,i;
	fill(pd,pd+10,0);
	cin>>sr;
	len=strlen(sr);
	for(i=0;i<len;i++){
		pd[sr[i]-'0']++;
	}
	for(i=0;i<10;i++){
		if(pd[i]!=0) cout<<i<<":"<<pd[i]<<endl;
	}


return 0;
}


