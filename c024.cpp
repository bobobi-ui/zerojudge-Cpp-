#include<stdio.h> 
#include<stdlib.h>

int main(){
	
	long long int i,m,a;
	
	while(scanf("%lld",&a)==1)
	{	

		if(a<0 || a>= 210000000)
			break;
		m=(((1+a)*a)/2+1);
		printf("%lld\n",m);
			
	}
		
	return 0;
} 
