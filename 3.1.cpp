#include <stdio.h>
#include <stdlib.h>

#define KW 0.73549875

int main(){
	float n , kw , km;
	int w;
	do{
		printf("z KM na KW(1) czy z KW na KM(2)?\n");
			scanf("%d", &w);
		printf("Podaj wartosc:\n");
			scanf("%f", &n);
		if(w==1){
			kw = n * KW;
				printf("%.2f KM to %.3f KW\n", n , kw);
		}
			else{
				km = n/KW;
					printf("%.2f KW to %.3f KM\n", n , km);
			}
			
		
	}while(n != 0);
	
	return 0;
}
