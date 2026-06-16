#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[100];
    printf("Enter 3 strings:\n");
    scanf("%s %s %s", s1, s2, s3);

    char prefix[100];
    int i = 0;

    while (s1[i] && s2[i] && s3[i]) {
        if (s1[i] == s2[i] && s2[i] == s3[i]) {
            prefix[i] = s1[i];
            i++;
        } else {
            break;
        }
    }
    prefix[i] = '\0';

    printf("Longest Common Prefix = %s\n", prefix);
    return 0;
}
