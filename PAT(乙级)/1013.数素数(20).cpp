#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define N 1000000
using namespace std;
int main() {
	bool prime[N];
	int n,m,i,j;
	cin>>m>>n;
	for(i=1;i<=N;i++) prime[i]=true;
	for(i=3;i<=N;i++) if(i%2==0) prime[i]=false;
	prime[2]=true;
	for(i=3;i<sqrt(N);i++){
		 if(prime[i]==true)for(j=i*i;j<=N;j+=2*i){
			 prime[j]=false;
		}
	}
	int count=0,flag=0;
	for(i=2;i<=N;i++){
		if(prime[i]==true){
			count++;
			if(count>n) break;
			else if(count>=m){
				cout<<i;
				flag++;
				if(flag%10==0||count==n) cout<<endl;
				else cout<<" ";
			}
		}
	}
return 0;
}



