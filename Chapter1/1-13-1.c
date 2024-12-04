#include<stdio.h>

int main(void)
{
    // horizontal histogram
    int c, count;
    count = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            int i;
            for(i = 0; i < count; i++){
                putchar('-');
            }
            putchar('\n');
            count = 0;
        }
        else{
            count++;
        }
    }

    return 0;
}
