#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int age;
    printf("donnez votre age ");
    scanf("%d",&age);
    if (age >= 18)
    {
        printf("vous etes majeur !! \n");
    }
    else
    {
        printf("vous êtes mineur \n");
    }
    
    
    return 0;
}