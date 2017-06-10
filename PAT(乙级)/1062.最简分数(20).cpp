#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	return a==0?b:gcd(b%a,a);
}
int main(){
	int a1,a2,b1,b2,k,n,i,flag=1;
	scanf("%d/%d %d/%d %d",&a1,&a2,&b1,&b2,&k);
	double s1=(double)a1/a2,s2=(double)b1/b2,s3;
	if(s2<s1){
		double temp;
		temp=s2;
		s2=s1;
		s1=temp;
	}
	for(i=0;i<=k;i++){
		s3=(double)i/k;
		if(s3>s1&&s3<s2){
			if(gcd(i,k)!=1) continue;
			if(flag) {
				printf("%d/%d",i,k);
				flag=0;
			}
			else  printf(" %d/%d",i,k);
		}
	}
    return 0;
}

