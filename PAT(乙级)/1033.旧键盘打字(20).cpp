#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<list>
#include<set>
using namespace std;
int main() {
	char c;
	bool flag=false;
	set<char> mset;
	while(1){
		c=getchar();
		if(c=='\n') break;
		if(c<='Z'&&c>='A') mset.insert(c+'a'-'A');
		mset.insert(c);
	}
	set<char>::iterator it;
	if(mset.count('+')) flag=true;
	while(1){
		c=getchar();
		if(c=='\n') break;
		if(flag){
			if((c<'A'||c>'Z')&&!(mset.count(c)||mset.count(c+'A'-'a'))) printf("%c",c);
		}
		else if(!mset.count(c)) printf("%c",c);
	}
return 0;
}




