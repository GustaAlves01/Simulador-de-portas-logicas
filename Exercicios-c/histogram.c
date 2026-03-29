#include <stdio.h>
#define MIN_ASCII 32
#define MAX_ASCII 93

//converte codigo ascii para caracteres
//conta cada ocorrencia

int main(){
    int ch, all_ch[MAX_ASCII];
    for (int i = 0; i < MAX_ASCII; i++){
        all_ch[i] = 0;
    }

    while((ch = getchar()) != EOF){
        all_ch[ch - MIN_ASCII]++;
        
    }
    for (int i = 0; i < MAX_ASCII; i++){
        if (all_ch[i] > 0){
            printf("%c: ", i + MIN_ASCII);
            for (int j = 0; j < all_ch[i]; j++){
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}