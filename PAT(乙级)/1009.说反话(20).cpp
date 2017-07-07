#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
typedef struct{
	char words[20];
}str;
int main() {
	str mstr[100];
	int i=0;
	while(1){
		cin>>mstr[i].words;
		i++;
		if(cin.get()=='\n') break;
	}
	while(i){
		cout<<mstr[--i].words;
		if(i!=0) cout<<' ';
	}
return 0;
}


