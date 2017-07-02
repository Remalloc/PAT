#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main() {
	int p1=0,p2=0,i,n,mp1[3]={0,0,0},mp2[3]={0,0,0};
	char ma,mb,sc[]={'B','C','J'};
	cin>>n;
	getchar();
	for(i=0;i<n;i++){
		scanf("%c %c",&ma,&mb);
		getchar();
		if(ma=='B'){
			if(mb=='J'){
				p2++;
				mp2[2]++;

			}
			if(mb=='C'){
				p1++;
				mp1[0]++;
			}
		}
		if(ma=='C'){
			if(mb=='J'){
				p1++;
				mp1[1]++;
			}
			if(mb=='B'){
				p2++;
				mp2[0]++;
			}
		}
		if(ma=='J'){
			if(mb=='C'){
				p2++;
				mp2[1]++;
			}
			if(mb=='B'){
				p1++;
				mp1[2]++;

			}
		}
	}
	printf("%d %d %d\n",p1,n-p1-p2,p2);
	printf("%d %d %d\n",p2,n-p1-p2,p1);
	int *max1=mp1,*max2=mp2;
	for(i=0,p1=p2=i;i<3;i++){
		if(mp1[i]>*max1){
			p1=i;
			max1=&mp1[i];
		}
		if(mp2[i]>*max2){
			p2=i;
			max2=&mp2[i];
		}
	}
	printf("%c %c",sc[p1],sc[p2]);
return 0;
}



