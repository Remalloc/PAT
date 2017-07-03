#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
	int a,b,ma=0,mb=0,sum=0,sum2=0;
	cin>>a>>ma;
	while(a){
		if(a%10==ma) sum=sum*10+ma;
		a/=10;
	}
	cin>>b>>mb;
	while(b){
	    if(b%10==mb) sum2=sum2*10+mb;
		b/=10;
	}
	cout<<sum+sum2;
return 0;
}


