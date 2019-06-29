#include <cs50.h>
#include <stdio.h>

// Makes a pyramid of #'s according to input
int main(void){
    int height = get_int("How high can you jump?\n");
    // Checks for valid response (1-8)
    if (height<1 || height>8){
       while(height<1 || height>8){
           height = get_int("How high can you jump?\n");
       }
    }
    // Builds pyramid
    if(0<height && height<9){
        int build = 1;
        int row = height;
        while(build <= height){
            for(int i=row; i>0 ; i--){
                printf(" ");
            }
            row--;
            for(int i = 0; i<build; i++){
                printf("#");
            }
            printf("  ");
            for(int i=build; i>0; i--){
                printf("#");
            }
            printf("\n");
            build++;
        }
    }       
}
