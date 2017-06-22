#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int point[101],n,k,i;
	fill(point,point+101,0);
	cin>>n;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		point[k]++;
	}
	cin>>n;
	for(i=0;i<n;i++){
		scanf("%d",&k);
		printf("%d",point[k]);
		if(i+1!=n) printf(" ");
	}
    return 0;
}
