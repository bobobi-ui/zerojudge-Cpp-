#include<bits/stdc++.h> 
using namespace std;

int main(){
	
	int ng,n,m;
	cin>>ng;
	for(int j=0;j<ng;j++){

		cin>>n;
		int pop[1000]={0};
		int num[1000]={0};
		int sum = 0;
		int i=0;
		pop[0]=n;
		while(n != 1 && n!=4){
			pop[i]=n;
			sum=0;
			for(int k=0;n>1;k++){
				m = n % 10;
				sum += m*m;
				n = n / 10;
			}
			sum = sum + n*n;
			n = sum;
			for(int a=0;a<i;a++){
				if(pop[a]==pop[i]){
					break;
				}	
			}
			i++;
		}
		if(n==1)
			cout<<"Case #"<<j+1<<": "<<pop[0]<<" is a Happy number."<<endl;
		else
			cout<<"Case #"<<j+1<<": "<<pop[0]<<" is an Unhappy number."<<endl;
		} 	

	return 0; 	
}		
