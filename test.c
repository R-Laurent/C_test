#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int vies = 1;
    int nourriture = 4;
    int achat = 0;
    printf("bonjour vous avez %d vie(s), vous avez %d nourritures \n\n",vies,nourriture);
    printf("quel quantité voulez vous achter ? ");
    scanf("%d",&achat);
    nourriture = nourriture + achat;
    printf("vous avez maintenant %d nourriture \n\n",nourriture);
    return 0;
}