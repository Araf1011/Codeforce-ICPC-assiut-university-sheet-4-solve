#include <stdio.h>
#include <string.h>
 
int main() {
    char S[100001];
    fgets(S, sizeof(S), stdin);
 
    int len = strlen(S);
 
    for (int i = 0; i < len; i++) {
        if (S[i] == ',') {
            S[i] = ' ';
        } else if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 'a' + 'A';
        } else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] - 'A' + 'a';
        }
    }
 
    printf("%s", S);
 
    return 0;
}
