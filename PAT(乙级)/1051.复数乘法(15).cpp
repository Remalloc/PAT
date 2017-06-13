#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	double R1,P1,R2,P2,A=0,B=0;
	cin>>R1>>P1>>R2>>P2;
	A=(R1*R2)*(cos(P1)*cos(P2)-sin(P1)*sin(P2));
	B=(R1*R2)*(cos(P1)*sin(P2)+sin(P1)*cos(P2));
	if((A<0&&abs(A)<0.005)||(A>0&&A<0.005)){
		printf("0.00");
	}
	else{
		printf("%.2lf",A);
	}
	if((B<0&&abs(B)<0.005)||(B>0&&B<0.005)){
		printf("+0.00i");
	}
	else{
		printf("%+.2lfi",B);
	}
	return 0;
}


