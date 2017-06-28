#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#define CLK_TCK 100
using namespace std;
int main() {
	int c1,c2,senconds;
	scanf("%d %d",&c1,&c2);
	senconds=(c2-c1+50)/CLK_TCK;
	int hour,min,ms;
	min=senconds/60;
	hour=min/60;
	ms=senconds%60;
	printf("%02d:%02d:%02d",hour,min%60,ms);
return 0;
}



