#include<cs50.h>
#include<stdio.h>
#include<math.h>

// Calculates # coins needed to make change
int main(void) {
    int change = round(get_float("How much change?\n")*100);
    int coins = 0;
    if (change == 0){
        printf("If you don't need change, we're good.\n");
    }
    if (change < 0){
        main();
    }
    if (change > 0){
      while (change > 25){
        change = change - 25;
        coins++; 
      } 
      while (change > 10){
          change = change -10;
          coins++;
      }
      while (change > 5){
          change = change - 5;
          coins++;
      }
      while (change > 0){
          change = change - 1;
          coins++;
      }
    }
    printf("%i\n", coins);
}
