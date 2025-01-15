#include <stdio.h>
#include <string.h>
 
int main() {
    char s[11];
    char a[11];
    scanf("%s", s);
    scanf("%s", a);
    int len1 = strlen(s);
    int len2 = strlen(a);
    printf("%d %d\n",len1,len2);
 
    printf("%s%s\n",s,a);
 
    
    char temp = s[0];
    s[0]=a[0];
    a[0]=temp;
 
    printf("%s %s\n",s,a);
 
    
    
    return 0;
}
