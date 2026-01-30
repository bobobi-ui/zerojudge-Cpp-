#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,k,a,b;
	
	while(scanf("%d %d",&a,&b)==2){
		j=0;
		if(a==0 && b==0)
			break;	
		for(i=1;a*a<=b;i++){
			if(i*i>=a)
				j++;
		}
		printf("%d\n",j);
	}
	
	
	
	
	
	return 0;
}
