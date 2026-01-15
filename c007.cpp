#include<stdio.h> 
#include<stdlib.h>

int main(){
	int i,n=0;
	char ch[1000];
	while(fgets(ch,sizeof(ch),stdin)){
		if(n==1)
			continue;
		for(i=0;ch[i]!='\0';i++){
			if(ch[i]=='"'&&n==0){
				printf("``");
				n=1;
			}	
			else if(ch[i]=='"' && n==1){
				printf("''");
				n=0;
			}
				
			else
				printf("%c",ch[i]);
		}
	}
	
	
	return 0;
 } 
