#include<stdio.h> 
#include<stdlib.h> 

int main(){
	
	int a=0,b=0,i,j,n;
	char ch[1000];
		
	while(scanf("%s",ch)==1&& ch[0]!='0'){
		
		a=0,b=0;
		for(i=0;ch[i]!='\0';i++){
			if(i%2==0){
				n=(ch[i]-'0');
				a+=n;
			}
			if(i%2==1){ 
				n=(ch[i]-'0');
				b+=n;
			}
		 
		}	
		i++;
		if((a-b)==0 || (a-b)%11==0) 
			printf("%s is a multiple of 11.\n",ch);
		else
			printf("%s is not a multiple of 11.\n",ch);	
	}		
	return 0;
	
}
