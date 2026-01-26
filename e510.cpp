#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int j,i,n,s,k;
	double p,win,p1=0,p2=0;
	
	scanf("%d",&s);
	for(k=0;k<s;k++){
		p1=1,p2=1,win=0;
		scanf("%d %f %d",&n,&p,&i);
		
		for(j=0;j<n;j++){//¤À¥À 
			p1*=(1-p);
		}
		p1=1-p1;
		
		if(i==1){//¤À¤l 
			win=(p/p1);
			printf("%.4f\n",win);
		}
		
		else if(i>1){
			for(j=0;j<(i-1);j++){
				p2*=(1-p);
			}
			p2=p2*p;
			win=p2/p1;
			printf("%.4f\n",win);
		}
	}
	
	return 0;
}
