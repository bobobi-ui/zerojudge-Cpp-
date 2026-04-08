#include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int j,ng,n,m,sum,start;
	cin>>ng;
	for(j=0;j<ng;j++){
		cin>>n;
		start=n;
		m = 0,sum = 0;
		if(n==1){
			cout<<"Case #"<<j+1<<": "<<start<<" is a Happy number."<<endl;
			break;
		}
		while(sum != start && sum != 1){
			sum=0;
			for(int i=0;n>=10;i++){
				m = n % 10;
				n = n / 10;
				sum = sum + m*m;
			}
			sum = sum + n*n;
			n = sum;
		}
		if(n==1)
			cout<<"Case #"<<j+1<<": "<<start<<" is a Happy number."<<endl;
		else
			cout<<"Case #"<<j+1<<": "<<start<<" is an Unhappy number."<<endl;	
		}	
		
	return 0; 	
}		
