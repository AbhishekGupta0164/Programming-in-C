//group anagram
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

void sortString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[50][50];
    char sorted[50][50]; 

    printf("Enter %d words:\n", n);

    // input words
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
        strcpy(sorted[i], words[i]);
        sortString(sorted[i]);  // store sorted version
    }

    int visited[50] = {0};

    printf("\nGrouped Anagrams:\n");

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        printf("[ ");
        printf("%s ", words[i]);

        visited[i] = 1;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && strcmp(sorted[i], sorted[j]) == 0) {
                printf("%s ", words[j]);
                visited[j] = 1;
            }
        }

        printf("]\n");
    }
    return 0;
}