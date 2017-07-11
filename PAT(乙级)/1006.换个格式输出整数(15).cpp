#include <iostream>
#include<string>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main() {
	int n,i;
	cin>>n;
	for(i=0;i<n/100;i++) cout<<'B';
	for(i=0;i<(n-n/100*100)/10;i++)cout<<'S';
	for(i=1;i<=n%10;i++) cout<<i;

return 0;
}


