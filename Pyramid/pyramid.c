#include <stdio.h>

int main() {
    int row, col, number_of_rows;

    printf("How many rows do you want?\n");
    scanf("%d", &number_of_rows);
    for(row=1; row<=number_of_rows; row++){
        for(col=1; col<=(2*number_of_rows)-1; col++){
            if(col<=number_of_rows+(number_of_rows-row) && col>=number_of_rows-(number_of_rows-row)){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(row=1; row<=number_of_rows; row++){
        for(col=1; col<=(2*number_of_rows)-1; col++){
            if(col<=number_of_rows+(row-1) && col>=number_of_rows-(row-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
