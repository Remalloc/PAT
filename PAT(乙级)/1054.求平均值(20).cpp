#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,count=0;
	cin>>n;
	double sum=0,temp;
	char mbuf[50],buf[50];
	for(i=0;i<n;i++){
		cin>>buf;
		sscanf(buf,"%lf",&temp);
		sprintf(mbuf,"%.2lf",temp);
		if(strncmp(buf,mbuf,strlen(buf))!=0||temp>1000||temp<-1000){
			printf("ERROR: %s is not a legal number\n",buf);
		}
		else{
			sum+=temp;
			count++;
		}
	}
	if(count==0) printf("The average of 0 numbers is Undefined");
	else if(count==1)printf("The average of 1 number is %.2lf",sum);
	else printf("The average of %d numbers is %.2lf",count,sum/count);
    return 0;
}
