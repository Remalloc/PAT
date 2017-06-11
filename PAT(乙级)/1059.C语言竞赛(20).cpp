#include<bits/stdc++.h>
using namespace std;
struct stu{
	int type=1;
	bool use=false;
	bool check=true;
};
int main(){
	int i,n,j,k;
	stu mstu[10001];
	cin>>n;
	int sr;
	for(i=1;i<=n;i++){
		cin>>sr;
		mstu[sr].use=true;
		if(i==1) mstu[sr].type=0;
		else {
			int k=sqrt(i);
			for(j=2;j<=k;j++){
				if(i%j==0) break;
			}
			if(j<=k) mstu[sr].type=2;
		}
	}
	cin>>n;
	for(i=1;i<=n;i++){
		int temp;
		cin>>temp;
		cout<<setw(4)<<setfill('0')<<temp<<": ";
		if(mstu[temp].use){
			if(mstu[temp].check==false) cout<<"Checked";
			else if(mstu[temp].type==1) cout<<"Minion";
			else if(mstu[temp].type==2) cout<<"Chocolate";
			else cout<<"Mystery Award";
			mstu[temp].check=false;
		}
		else cout<<"Are you kidding?";
		cout<<endl;
	}
    return 0;
}

