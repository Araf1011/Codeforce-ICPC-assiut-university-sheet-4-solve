#include <stdio.h>
#include <string.h>
 
int main() {
    char S[1004], T[1004];
    scanf("%s %s", S, T);
    int lenS = strlen(S);
    int lenT = strlen(T);
    
    printf("%d %d\n", lenS, lenT);
    printf("%s %s\n", S, T);
    
    return 0;
}
