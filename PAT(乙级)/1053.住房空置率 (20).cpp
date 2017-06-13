#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n,D,mem=0,em=0;
	double e;
	cin>>n>>e>>D;
	for(i=0;i<n;i++){
		int day,min=0,k;
		cin>>day;
		for(k=0;k<day;k++){
			double temp;
			cin>>temp;
			if(temp<e) min++;
		}
		if(day>D&&min>(day/2)) em++;
		else if(min>(day/2)) mem++;

	}
	printf("%.1lf%% %.1lf%%",(double)mem/n*100,(double)em/n*100);
    return 0;
}
