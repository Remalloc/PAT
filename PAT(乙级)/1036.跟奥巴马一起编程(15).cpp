#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,j,n;
	char c;
	cin>>n>>c;
	for(i=1;i<=(n+1)/2;i++){
		for(j=1;j<=n;j++){
			if(i==1||i==(n+1)/2){
				printf("%c",c);
			}
			else {
				if(j==1||j==n) printf("%c",c);
				else printf(" ");
			}
		}
		printf("\n");
	}
    return 0;
}
