#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,i;
	double max=0;
	cin>>n;
	for(i=0;i<n;i++){
		double temp;
		scanf("%d %d",&a,&b);
		temp=a*a+b*b;
		if(temp>max) max=temp;
	}
	printf("%.2lf",sqrt(max));
    return 0;
}

