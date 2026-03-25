#include<bits/stdc++.h> 
using namespace std;

int main(){
	
	char c;
	int t=0;
	while(cin.get(c)){
		if(c=='"' && t==0){
			cout<<"``";
			t++;
		}			
		else if(c=='"' && t==1){
			cout<<"''";
			t=0;
		}			
		else if(c=='\n')
			cout<<"\n";
		else if(c==' ')
			cout<<" ";
		else
			cout<<c;		
	}
	return 0;
} 
