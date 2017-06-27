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
	set<char> mset;
	list<char> mlist;
	char str1[100],str2[100];
	cin>>str1>>str2;
	int len=strlen(str1);
	int i,j;
	for(i=0,j=0;i<len;i++){
		if(str1[i]!=str2[j]){
			if(str1[i]<='z'&&str1[i]>='a') str1[i]+='A'-'a';
			if(mset.find(str1[i])==mset.end()){
				mset.insert(str1[i]);
				mlist.push_back(str1[i]);
			}
		}
		else if(j<strlen(str2))j++;
	}
	list<char>::iterator it;
	for(it=mlist.begin();it!=mlist.end();it++){
		printf("%c",*it);
	}

return 0;
}



