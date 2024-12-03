#include<stdio.h>

int main(void)
{
    long nb, nt, nl;
    nb = nt = nl = 0;
    
    int c;
    while((c = getchar()) != EOF){
        
        if(c == ' '){
            nb++;
        }
        
        if(c == '\t'){
            nt++;
        }
        
        if(c == '\n'){
            nl++;
        }
    }
    
    printf("Blanks: %ld, Tabs: %ld, Newlines: %ld\n", nb, nt, nl);
    
    return 0;
}
