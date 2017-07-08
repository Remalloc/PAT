#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
	bool prime[100000];
	int n,i,j,count=0;
	memset(prime,false,sizeof(prime));
	cin>>n;
	for(i=3;i<=n;i+=2){
		prime[i]=true;
	}
	prime[2]=true;
	for(i=0;i<=sqrt(n);i++){
		if(prime[i]){
			for(j=i*i;j<=n;j+=i*2) prime[j]=false;
		}
	}
	for(i=0;i<n-1;i++){
		if(prime[i]&&prime[i+2])count++;
	}
	cout<<count;

return 0;
}


