#include<bits/stdc++.h>
using namespace std;

int main(){
	
	while(1){
		int n; cin>>n;
		if(n==0)
			break;
		vector<int> data;
		for(int i=0;i<n;i++){
			int tmp; cin>>tmp;
			data.push_back(tmp);
		}
		int total = 0;
		while(data.size() >1){
			sort(data.begin(),data.end());
			int cost =data[0] + data [1];
			total += cost;
			data.erase(data.begin());
			data.erase(data.begin());
			data.push_back(cost);
				
		}
		cout<<total<<endl;
	}
	return 0;
}
