#include<stdio.h> 
#include<stdlib.h> 

int main(){
	
	int i,j,a;
	
	while(scanf("%d",&a)==1){
		int sum,s,m;
		int p[a][2];
		for(i=0;i<a;i++){
			sum=0;
			scanf("%d",&s);
			fflush(stdin);
			scanf("%d",&m);
			fflush(stdin);
			for(j=s;j<=m;j++){
				if(j%2==1){
					sum+=j;	
				}
			}
			printf("Case %d: %d\n",i+1,sum);
		}
		
	}
	
	
	
	
	return 0;
} 
