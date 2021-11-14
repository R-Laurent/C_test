#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
double rectangle(double largeur, double hauteur);

int main(){
    printf("\n\n");
    printf("aire du rectangle : %f\n",rectangle(5,10));
    printf("\n");
   return 0;
}

double rectangle(double largeur, double hauteur){
    return largeur * hauteur;
}
