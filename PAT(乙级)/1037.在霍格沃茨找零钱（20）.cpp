#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long  g[2],s[2],k[2],sum=0;
	scanf("%ld.%ld.%ld %ld.%ld.%ld",&g[0],&s[0],&k[0],&g[1],&s[1],&k[1]);
	sum=g[1]*17*29+s[1]*29+k[1]-g[0]*17*29-s[0]*29-k[0];
	if(sum<0){
		sum=-sum;
		printf("-");
	}
	g[0]=sum/29/17;
	s[0]=(sum-g[0]*29*17)/29;
	k[0]=sum-g[0]*29*17-s[0]*29;
	printf("%ld.%ld.%ld",g[0],s[0],k[0]);
    return 0;
}
