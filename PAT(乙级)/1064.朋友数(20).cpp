#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a<b;
}
int main(){
	set<int> mset;
	int n,i,j=0,count=0;
	cin>>n;
	int sc[n];
	for(i=0;i<n;i++){
		int temp,sum=0;
		scanf("%d",&temp);
		while(temp){
			sum+=temp%10;
			temp/=10;
		}
		if(mset.count(sum)==0){
			count++;
			sc[j++]=sum;
			mset.insert(sum);
		}
	}
	sort(sc,sc+j,cmp);
	cout<<count<<endl;
	for(i=0;i<j;i++){
		if(i==0)printf("%d",sc[i]);
		else printf(" %d",sc[i]);
	}
    return 0;
}

