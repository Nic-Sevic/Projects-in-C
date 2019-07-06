#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int shift(char c);
int key;

int main(int argc, string argv[]){
// checks if only 1 argument
    if(argc != 2){
        printf("Usage: ./vigenere keyword \n");
    }
    else{
        int j = 0;
        for (int i=0; i<strlen(argv[1]); i++){
            if (isalpha(argv[1][i])){
              j++;  
            }
        }
// if all char in key alpha
        if(j == strlen(argv[1])){
          string plaintext = get_string("plaintext: ");
          printf("ciphertext: ");
          int k=0;
          for (int i=0; i<strlen(plaintext); i++){
            if(k>=strlen(argv[1])){
                k=0;
            }
            shift(argv[1][k]);
            int chara = plaintext[i];
            int num = chara+key;
            k++;
// cycles through to preserve case
              if(isupper(chara)){
                if(num >90){
                    num = num-26;
                }
                  printf("%c", num);
            }
            else if(islower(chara)){
                if(num>122){
                    num = num-26;
                }
                printf("%c", num);
            }
//  preserves nonalpha chars
              else{
                printf("%c", chara);
            }
          }   
        }
        else{
            printf("Usage: ./vigenere keyword\n"); 
        }
    }  
    printf("\n");
}
// reassigns key char to uniform value 
int shift(char c){
    if(isupper(c)){
       key = c-65;
    }
    else{
       key = c-97;
    }
     return 0;
 }
