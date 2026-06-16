// Check if one string is subsequence of another
#include <stdio.h>
#include <string.h>

int isSubsequence(char sub[], char main[]) {
    int i = 0, j = 0;

    while (main[i] != '\0' && sub[j] != '\0') {
        if (main[i] == sub[j]) {
            j++;
        }
        i++;
    }

    return sub[j] == '\0';
}

int main() {
    char mainStr[100], subStr[100];

    printf("Enter main string: ");
    scanf("%s", mainStr);

    printf("Enter subsequence string: ");
    scanf("%s", subStr);

    if (isSubsequence(subStr, mainStr))
        printf("YES, it is a subsequence\n");
    else
        printf("NO, it is not a subsequence\n");

    return 0;
}
