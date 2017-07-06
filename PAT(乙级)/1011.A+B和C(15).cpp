#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
	long long a,b,c;
	int i,n;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a>>b>>c;
		if(a+b>c) cout<<"Case #"<<i+1<<": true"<<endl;
		else cout<<"Case #"<<i+1<<": false"<<endl;

	}
return 0;
}



