#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int nbr_al;
	srand(time(0)) ;
	nbr_al = rand() % 100 + 1;
	int nbr_entre;
	printf("Devinez le nombre : ");
	scanf("%d",&nbr_entre);
	do{	
		if(nbr_entre<nbr_al){
			printf("Plus grand : ");
			scanf("%d", &nbr_entre);
			}
		else{
			printf("Plus petit : ");
			scanf("%d", &nbr_entre);
			}
			}
		
		while(nbr_entre!=nbr_al); 
	printf("Bravo !! vous avez trouvé le nombre correspondant qui est %d, EZ \n", nbr_al);
	}
