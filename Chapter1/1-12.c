#include<stdio.h>

int main(void)
{
    int c;
    int prev_char;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\t' || c == '\n'){
            if(prev_char != '\n'){
                putchar('\n');
                prev_char = '\n';
            }
        }else{
            putchar(c);
            prev_char = c;
        }
    }

    return 0;
}
