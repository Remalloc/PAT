#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
	int a[5],n,flag=0,count=0;
	memset(a,0,sizeof(a));
	cin>>n;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		if(temp%5==0&&temp%2==0) a[0]+=temp;
		else if(temp%5==1){
			if(flag==2) {
				a[1]-=temp;
				flag=1;
			}
			else {
				a[1]+=temp;
				flag=2;
			}
		}
		else if(temp%5==2) a[2]++;
		else if(temp%5==3){
			count++;
			a[3]+=temp;
		}
		else if(temp%5==4){
			if(temp>=a[4]) a[4]=temp;
		}
	}
	for(int i=0;i<5;i++){
		if(i==1&&flag!=0) cout<<a[i];
		else if(a[i]==0) cout<<'N';
		else{
			if(i==3) printf("%.1lf",(double)a[i]/count);
			else cout<<a[i];
		}
		if(i+1!=5) cout<<" ";
	}
return 0;
}



