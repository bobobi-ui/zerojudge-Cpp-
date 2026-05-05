#include<bits/stdc++.h>
using namespace std;
//ª`·N§PÂ_¦¡¬A¸¹ 

int P(int D){
	
	for(int i=1;i<(D/2);i++){
		if(i*i==D){
			return i;
			break;
		}	
	}
}

int main(){
	int a,b,c,D;
	while(cin>>a>>b>>c){
		int x1=0,x2=0;
		D=(b*b)-(4*a*c);
		if(D==0){
			cout<<"Two same roots x="<<(-b)/(2*a)<<endl;
		}
		else if(D>0){
			x1=(-b+P(D))/2*a;
			x2=(-b-P(D))/2*a;
			cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<endl;
		}
		else{
			cout<<"No real root"<<endl;
		}
	}
	
	return 0;
} 
