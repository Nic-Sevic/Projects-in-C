#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
    if(argc != 2){
        printf("Usage: ./caesar key\n");
    }
    else{
        int j = 0;
        for (int i=0; i<strlen(argv[1]); i++){
            if (atoi(&argv[1][i])){
              j++;  
            }
        }
        if(j == strlen(argv[1])){
          string plaintext = get_string("plaintext: ");
          printf("ciphertext: ");
          for (int i=0; i<strlen(plaintext); i++){
            int chara = plaintext[i];
            int num = chara+(atoi(argv[1]));
            if(isupper(chara)){
                if(num >90){
                    num = 65+atoi(argv[1])%26;
                }
                printf("%c", num);
            }
            else if(islower(chara)){
                if(num>122){
                    num = 97+atoi(argv[1])%26;
                } 
                printf("%c", num);
            }
            else{
                printf("%c", chara);
            }
          }   
        }
        else{
            printf("Usage: ./caesar key\n"); 
        }
    }  
    printf("\n");
} 
