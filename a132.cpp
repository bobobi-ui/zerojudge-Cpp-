#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,n,B,P;
	
	while(scanf("%d",&n)==1){
		char ch[100];
		B=0;P=0,j=0;
		if(n==0)
			break;
		printf("The parity of ");
		while(n>0){		
			if(n%2==1){
				ch[j]='1';
				P++;
			}
			else{
				ch[j]='0';
			}
			n=n/2;
			j++;
		}
		
		for(i=j-1;i>=0;i--)
			printf("%c",ch[i]);
		printf(" is %d (mod 2).\n",P);
	}
	
	
	
	return 0;
} 
