#include<stdio.h> 
#include<stdlib.h> 

int main(){
	
	int a,i,j,m,t=1,n=2,w=3,e=4,s=5,b=6;
	
	char ch[10];
	
	while(scanf("%d",&a)==1 && a!=0){
		t=1,n=2,w=3,e=4,s=5,b=6;
		for(i=0;i<a;i++){
			scanf("%s",&ch);
			if(ch[0]=='n'){
				m=s;
				s=b;
				b=n;
				n=t;
				t=m;
			}
			if(ch[0]=='w'){
				m=e;
				e=b;
				b=w;
				w=t;
				t=m;
			}
			if(ch[0]=='s'){
				m=t;
				t=n;
				n=b;
				b=s;
				s=m;
			}
			if(ch[0]=='e'){
				m=t;
				t=w;
				w=b;
				b=e;
				e=m;
			}
		}
		printf("%d\n",t);		
	}
	
	
	
	return 0;
}
