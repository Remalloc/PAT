#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,pd[2];
	cin>>n;
	int a[2],b[2];
	fill(pd,pd+2,0);
	for(i=0;i<n;i++){
		int sum;
		scanf("%d %d %d %d",&a[0],&a[1],&b[0],&b[1]);
		sum=a[0]+b[0];
		if(a[1]==sum&&b[1]!=sum) pd[1]++;
		else if(a[1]!=sum&&b[1]==sum) pd[0]++;
	}
	cout<<pd[0]<<" "<<pd[1];
	return 0;
}

