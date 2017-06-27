#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<list>
using namespace std;
typedef struct{
	char name[6];
	int birth;
}people;
int main() {
	int n,i,count=0;
	list<people> mpl;
	cin>>n;
	for(i=0;i<n;i++){
		people node;
		int birth[3];
		scanf("%s %d/%d/%d",&node.name,&birth[0],&birth[1],&birth[2]);
		node.birth=birth[0]*10000+birth[1]*100+birth[2];
		if(node.birth>=18140906&&node.birth<=20140906){
			count++;
			if(mpl.empty()) mpl.push_back(node);
			else{
				if(mpl.back().birth>node.birth) mpl.push_back(node);
				else if(mpl.front().birth<node.birth) mpl.push_front(node);
			}
		}
	}
	if(count) cout<<count<<" "<<mpl.back().name<<" "<<mpl.front().name;
	else cout<<0;
return 0;
}



