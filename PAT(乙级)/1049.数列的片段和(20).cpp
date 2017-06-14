#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,i,j;
	cin>>n;
	double num[n],count=0;
	for(i=0;i<n;i++){
		scanf("%lf",&num[i]);
	}
	for(i=0;i<n;i++){
		double temp=0;
		temp=(n-i)*(i+1)*num[i];
		count+=temp;
	}
	printf("%.2lf",count);
	return 0;
}


