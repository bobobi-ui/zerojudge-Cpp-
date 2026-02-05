#include<stdio.h>
#include<stdlib.h>

int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}

int min(int a,int b){
	if(a<b)
		return a;
	else
		return b;
}

int main(){
	
	int k,q,n;

	while(scanf("%d %d %d",&k,&q,&n)==3){
		int qr,nr,qc,nc,kr,kc;
		
		//Illegal state
		if(k==q){
			printf("Illegal state\n");
			continue;
		}
		
		
		//Illegal move
		qr=q/8,qc=q%8;
		nr=n/8,nc=n%8;
		kr=k/8,kc=k%8;

		if(q==n||n==k){
			printf("Illegal move\n");
			continue;
		}	
		if(qr!=nr && qc!=nc){
			printf("Illegal move\n");
			continue;
		}	

		if (qr == nr) { // horizontal move
			if (kr == qr && kc > min(qc, nc) && kc < max(qc, nc)) {
				printf("Illegal move\n");
				continue;
			}
		}
		if (qc == nc) { // vertical move
			if (kc == qc && kr > min(qr, nr) && kr < max(qr, nr)) {
				printf("Illegal move\n");
				continue;
			}
		}
		
		//Move not allowed
		
		if(n==(k-1)||n==(k+1)||n==(k-8)||n==(k+8)){
			printf("Move not allowed\n");
			continue;		
		}

		//Continue & Stop
		if((n==9 && k==0)||(n==14&&k==7)||(n==49&&k==56)||(n==54&&k==63)){
			printf("Stop\n");
			continue;
		}
		else{
			printf("Continue\n");
			continue;
		}
	}
	return 0;
} 
