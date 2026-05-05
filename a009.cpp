#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int K=7;
	string str1;
	while( getline(cin,str1) ){
		int i=0;
		while(i < str1.length() ){
			char c=str1[i]-7;
			cout<<c;
			i++;
		}	
	}
	
	
	
	
	/*int a,b;
	char a,b;
	while(cin>>a>>b){
		printf("%c-5 %c\n",a-5,b);
	}*/
	
	return 0;
}
