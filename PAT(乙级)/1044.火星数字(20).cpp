#include<bits/stdc++.h>
using namespace std;
int main()
{
	char low[][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	char high[][4]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	char temp[10],mtemp[3];
	int i,n,k,j;
	cin>>n;
	getchar();
	for(i=0;i<n;i++){
		cin.getline(temp,10,'\n');
		if(temp[0]<='9'&&temp[0]>='0'){
			sscanf(temp,"%d",&k);
			if(k/13>0) printf("%s",high[k/13-1]);
			if(k%13>0){
				if(k>12) printf(" ");
				printf("%s",low[k%13]);
			}
			if(k==0) printf("%s",low[k]);
			printf("\n");
		}
		else{
			int count=0;
			for(k=strlen(temp)-1,j=2;j>=0;k--,j--){
				mtemp[j]=temp[k];
			}
			for(k=0;k<12;k++) if(strncmp(temp,high[k],3)==0){
				count=(k+1)*13;
				break;
			}
			for(k=0;k<13;k++) if(strncmp(mtemp,low[k],3)==0){
				count+=k;
				break;
			}
			printf("%d\n",count);
		}
	}
	return 0;
}


