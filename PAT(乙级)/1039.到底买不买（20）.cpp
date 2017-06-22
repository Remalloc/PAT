#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<set>
#include<iterator>
#include<list>
using namespace std;
int main()
{
	list<char> mlist;
	char c;
	int n=0,k=0,count=0;
	list<char>::iterator it;
	while(1){
		c=getchar();
		if(c=='\n') break;
		mlist.push_back(c);
		n++;
	}
	while(1){
		c=getchar();
		if(c=='\n') break;
		it=find(mlist.begin(),mlist.end(),c);
		if(it!=mlist.end()){
			mlist.erase(it);
		}
		else count++;
		k++;
	}
	if(count){
		printf("No %d",count);
	}
	else printf("Yes %d",n-k);

	return 0;
}

