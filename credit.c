#include <stdio.h>
#include <cs50.h>

// 
int main(void){
    int numbers[16] = get_long("What's your card number?\n");
    printf("%i\n", numbers);
    /*if(numbers > 5599999999999999 || numbers < 4000000000000){
        printf("INVALID\n");
    }
    char number = numbers;
    int first = 0;
    int second = 0;
    for (int i = 0; i<17; i++){
        if(i==0 || i%2==0){
            char num = number[i]*2;
            for(i in num){
                first = first + i;
            }
        }
        else{
          second = second + number[i];
        }
    }
    if (first+second%10==0){
        switch (number) {  
            //figure first two cases!
            case number[0]==3 && number[1]==4||7 : printf("AMEX\n");
                break;
            case number[0]==5 && number[1] >0 && <6 : printf("MASTERCARD\n");
                break;
            case number[0]==4 : printf("VISA\n");
                break;
        }
    }
    else{
        printf("INVALID\n");
    }*/
}
