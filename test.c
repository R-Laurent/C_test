#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int menu;
    printf("menu 1\n");
    printf("menu 2\n");
    printf("menu 3\n");
    printf("menu 4\n");
    printf("choisissez votre menu ");
    scanf("%d",&menu);
    switch (menu)
    {
    case 1:
        printf("tu as choisi le menu 1\n");
        break;
    case 2:
        printf("tu as choisi le menu 2\n");
        break;
    case 3:
        printf("tu as choisi le menu 3\n");
        break;
    case 4:
        printf("tu as choisi le menu 4\n");
        break;
    
    default:
        printf("nous n'avons pas ce menu");
        break;
    }
    return 0;
}