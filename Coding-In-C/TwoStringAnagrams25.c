#include<stdio.h>
#include<string.h>
    // check if two string are anagram or not

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};   // For all ASCII characters
    int i;

    printf("Enter first string: ");
    gets(str1); 
     
    printf("Enter second string: ");
    gets(str2);

    // If lengths differ → not an anagram
    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    // Count characters of str1 (+1) and str2 (-1)
    for (i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    // If all values become zero → anagram
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0; 
        }
    }

    printf("Anagram");
    return 0;
}

