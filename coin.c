#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;
    int r=0;
    int j=0;
    int k=0;
    char str[10];

printf("Tossing a coin...\n");
    for(i = 0; i < 3; i++){
       r = rand()%2;
       if(r == 0){
       printf("Round %d: Heads\n",r);
       j++;
       }

       else if(r == 1){
        printf("Round %d: Tails\n",r);
        k++;
       }
    }
    printf("Heads: %d, Tail: %d\n", j,k);
    return 0;

}