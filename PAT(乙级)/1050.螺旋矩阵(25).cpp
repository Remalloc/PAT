#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int sr,i;
	cin>>sr;
	int num[sr];
	for(i=0;i<sr;i++){
		scanf("%d",&num[i]);
	}
	sort(num,num+sr,cmp);
	int m = ceil(sqrt(sr));
    int n = sqrt(sr);
    while (m*n!=sr){
        if (m*n<sr) {
            m++;
        } else if (m*n>sr){
            n--;
        }
    }
	int mnum[m][n],j,k;
	for(i=0;i<m;i++) fill(mnum[i],mnum[i]+n,0);
	i=0,j=0,k=0;
	while(i<sr){
		for(;j<n;j++){
			if(!mnum[k][j]){
				mnum[k][j]=num[i++];
			}
			else break;
		}
		j--;
		k++;
		for(;k<m;k++){
			if(!mnum[k][j]){
				mnum[k][j]=num[i++];
			}
			else break;
		}
		k--;
		j--;
		for(;j>=0;j--){
			if(!mnum[k][j]){
				mnum[k][j]=num[i++];
			}
			else break;
		}
		j++;
		k--;
		for(;k>=0;k--){
			if(!mnum[k][j]){
				mnum[k][j]=num[i++];
			}
			else break;
		}
		k++;
		j++;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",mnum[i][j]);
			if(j+1!=n) printf(" ");
			else printf("\n");
		}
	}
	return 0;
}


