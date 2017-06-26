#include <iostream>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<list>
#include<set>
using namespace std;
int main() {
	int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	int i,n;
	char c;
	cin>>n;
	getchar();
	bool count[n];
	char result[n][20];
	for(i=0;i<n;i++){
		int sum=0;
		int j=0;
		count[i]=true;
		while(1){
			c=getchar();
			if(c=='\n'){
				result[i][j]='\0';
				break;
			}
			if(j==17&&count[i]==true){
				if(c==M[sum%11]) count[i]=true;
				else count[i]=false;

			}
			else if(c<='9'&&c>='0'&&count[i]==true){
				sum+=weight[j]*(c-'0');
			}
			else{
				count[i]=false;
			}
			result[i][j++]=c;
		}

	}
	for(i=0;i<n;i++)
		if(count[i]==false) break;
	if(i==n) printf("All passed");
	else{
		for(i=0;i<n;i++) if(count[i]==false) printf("%s\n",&result[i]);
	}

return 0;
}





