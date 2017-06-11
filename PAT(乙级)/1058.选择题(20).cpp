#include<bits/stdc++.h>
using namespace std;
struct stu{
	char answer[10];
	int point=0;
};
int main(){
	int n,m,i,j;
	stu mstu[1000];
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d %*d %[^\n]",&mstu[i].point,mstu[i].answer);
		getchar();
	}
	int max=0,wrong[m],student[n];
	fill(wrong,wrong+m,0);
	fill(student,student+n,0);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			char temp[10];
			scanf("(%[^)])",temp);
			getchar();
			if(strcmp(temp,mstu[j].answer)==0) student[i]+=mstu[j].point;
			else{
				wrong[j]++;
				if(wrong[j]>max) max=wrong[j];
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",student[i]);
	}
	if(max==0) printf("Too simple");
	else{
		printf("%d",max);
		for(i=0;i<m;i++){
			if(wrong[i]==max) {
				printf(" %d",i+1);
			}
		}
	}
    return 0;
}

