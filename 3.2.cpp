#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
		printf("Podaj liczbe:\n");
			scanf("%d\n", &n);
			int suma = 0;
			for(int i = 1 ; i <= n ; i++){
				if(i%7 == 0){
					suma = suma + i;
				}
			}
				printf("Suma wszystkich liczb od 1 do %d to: %d\n", n , suma); 
				
					return 0;
}
