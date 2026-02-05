#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,n,x1,y1,x2,y2,x3,y3,x4,y4;
	int a1,b1,c1,a2,b2,c2,D;
	float x,y;
	
	scanf("%d",&n);
	printf("INTERSECTING LINES OUTPUT\n");
	for(i=0;i<n;i++){
		scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		
		a1=y2-y1,b1=x1-x2,c1=x2*y1-x1*y2;
		a2=y4-y3,b2=x3-x4,c2=x4*y3-x3*y4;
		D=a1*b2-a2*b1;
		
		
		if(D==0){
			//重疊（無限多交點）
			if((c1*b2)==(b1*c2)&&(a1*c2)==(c1*a2)){
				printf("LINE\n");
				continue;
			}
			//平行（沒有交點）
			else{
				printf("NONE\n");
				continue;	
			}
		}
		else{
			x=float((b1*c2)-(b2*c1))/float(D);
			y=float((a2*c1)-(a1*c2))/float(D);
			printf("POINT %.2f %.2f\n",x,y);
			continue;
		}
	}
	printf("END OF OUTPUT");	
	return 0;
}
