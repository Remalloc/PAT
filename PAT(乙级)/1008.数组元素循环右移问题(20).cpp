#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
	int num[100],n,m;
	cin>>n>>m;
	m%=n;
	for(int i=0;i<n;i++){
		if(m+i<n) cin>>num[m+i];
		else cin>>num[i+m-n];
	}
	for(int i=0;i<n;i++) {
		cout<<num[i];
		if(i!=n-1) cout<<" ";
	}
return 0;
}


