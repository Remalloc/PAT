#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
typedef struct{
	double fprice;
	double price;
	double num;
}yb;
bool cmp(yb a,yb b){
	return a.fprice>b.fprice;
}
int main() {
	int n,need;
	cin>>n>>need;
	yb myb[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&myb[i].num);
	}
	double temp;
	for(int i=0;i<n;i++){
		scanf("%lf",&temp);
		myb[i].price=temp;
		myb[i].fprice=temp/myb[i].num;
	}
	sort(myb,myb+n,cmp);
	double result=0;
	int i=0;
	while(need!=0&&i<n){
		if(myb[i].num<need){
			need-=myb[i].num;
			result+=myb[i].price;
		}
		else{
			result+=need*myb[i].fprice;
			need=0;
		}
		i++;
	}
	printf("%.2lf",result);
return 0;
}



