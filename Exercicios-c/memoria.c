#include <stdio.h>


int main(){
   int i = 1, limite = 8;
   printf("%d", limite);
   printf("Digite o limite para loop: ");
   scanf("%d", &limite);

   while ( i <= limite){
      printf("%d \n", i);
      i++;}

   return 0;
}




