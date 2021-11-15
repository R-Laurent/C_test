#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
double rectangle(double largeur, double hauteur);
void triplePointeur(int *pointeur);
void printElement(int* tableau, int taille);

int main(){
    printf("\n\n");
    int taille = 10;
    int *adresse = &taille;
    int index = 0;
    int tableau[10] = {0};
    tableau[0]=1;
    printElement(tableau,taille);
    printf("adresse : %p \n", adresse);
    printf("contenu de l'adresse : %d \n",*adresse);
    //printf("%d \n",tableau[index]);
    printf("\n\n");
    return 0;
}

void printElement(int* tableau, int taille){
    int i =0;
    for ( i = 0; i < taille; i++)
    {
        printf("%d \n",tableau[i]);
    }
    
}

double rectangle(double largeur, double hauteur){
    return largeur * hauteur;
}

void triplePointeur(int *pointeur){
    *pointeur *= 3;
}