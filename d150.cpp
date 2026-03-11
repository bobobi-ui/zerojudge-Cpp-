#include<algorithm> 
#include<iostream>
using namespace std; 

int main(){
	
	int a,b,i;
	cin>>a;
	while(a--){
		int n; cin>>n;		
		int p[n]={0};
		for(i=0;i<n;i++){
			cin>>p[i];
		}
		sort(p,p+n,greater<int>());
		int res = 0;
		for(i=2;i<n;i+=3){
			res+=p[i];
		}
		cout<<res<<endl;
	}
	return 0;
}
