/*
Zetech C Snack bar
created by DIT-01-0096/2022
89 compiler
MIT license
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ int item;
    printf("\tToday`s Menu\n");
    printf("1.smokie- Ksh 40\n");
    printf("2. Milshake- Ksh 150\n");
    printf("3.Samosa- Ksh 20\n");
    printf("4. Cocktail-Ksh 150\n");
    printf("Enter Item No:");
    scanf("%d",&item);
    if(item>0&&item<=3){
        printf("item added to cart\n");

    }
    else{
        printf("Invalid item\n");
        menu;
    }
    return item;
}

