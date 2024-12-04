#include<stdio.h>
#define IN 1
#define OUT 0

int main(void)
{
    int nc, nw, nl, state;
    nc = nw = nl = 0;
    state = OUT;

    int c;

    while((c = getchar()) != EOF){
        nc++; // new character count

        if(c == '\n'){
            nl++; // new line count
        }

        if(c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            nw++;
        }
    }

    printf("No. of characters: %d, No. of words: %d, No. of new lines: %d\n", nc, nw, nl);

    return 0;
}
