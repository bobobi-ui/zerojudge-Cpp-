#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,time=0,m,k=0,n,fib[50];

	scanf("%d",&m);
	for(j=0;j<m;j++){
		while(scanf("%d",&n)==1){
			
			fib[0]=1;
			fib[1]=2;
			time=0,k=0;
			
			for(i=0;i<n;i++){
				if(i>1){
					fib[i]=fib[i-1]+fib[i-2];
				}
				if(fib[i]>n)
					break;
				time+=1;
			}
			
			printf("%d = ",n);
			for(i=(time-1);i>=0;i--){
				if(fib[i]<=n){
					if(k==2){
						k=0;
						break;
					}
					printf("1");
					n-=fib[i];
					k++;
				}
				else{
					k--;
					printf("0");	
				}
				
			}
			printf(" (fib)\n");
		}
	}
	
	

	return 0;
}
