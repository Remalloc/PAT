#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main() {
	int num[10],mcin;
	for(int i=0;i<10;i++) cin>>num[i];
	for(int i=1;i<10;i++){
		if(num[i]>0){
			printf("%d",i);
			num[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++){
		while(num[i]){
			printf("%d",i);
			num[i]--;
		}
	}
return 0;
}


