#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<set>
#include<iterator>
#include<list>
#include<vector>
#define N 1000000007
using namespace std;
int main()
{
	char sr[100001];
	int p=0,a=0,t=0,count=0;
    scanf("%s",sr);
    int len=strlen(sr);
    int i;
    for(i=len-1;i>=0;i--){
    	if(sr[i]=='T'){
    		t++;
		}
		else if(sr[i]=='A'){
			a=(a+t)%N;
		}
		else if(sr[i]=='P'){
			p=(p+a)%N;
		}
	}
	cout<<p;
	return 0;
}

