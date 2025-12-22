#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,a,x,y,m,stop=0,con=0;
	
	scanf("%d",&a);
	int pp[a][2];
	
	for(i=0;i<a;i++){
		scanf("%d %d",&pp[i][0],&pp[i][1]);
	}
	
	for(i=0;i<a;i++){
		stop=0;
		con=0;
		if(pp[i][0]<pp[i][1]){
			printf("impossible\n");
			stop=1;		
		}
	
		else if((pp[i][0]-pp[i][1])%2!=0 && (pp[i][0]+pp[i][1])%2!=0){
			printf("impossible\n");
			stop=1;
		}
		
		else if(stop==0){
			x=(pp[i][0]+pp[i][1])/2;
			y=(pp[i][0]-pp[i][1])/2;
			if(x<0 && y<0){
				printf("impossible\n");
			}
			else
				printf("%d %d\n",x,y);
		}
		
	}

	return 0;
}
