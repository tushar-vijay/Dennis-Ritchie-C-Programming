#include<stdio.h>

int main(void)
{
    int c, prev_char;
    
    while((c = getchar()) != EOF){
        
        if(prev_char != ' '){
            putchar(c);
        }
        
        prev_char = c;
    }
    
    return 0;
}
