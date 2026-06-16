//implement strstr function  substring search
#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter the main string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character if present

    printf("Enter the substring to search: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character if present

    char *result = strstr(str1, str2); // search for substring

    if(result != NULL){
        printf("Substring found at position: %ld\n", result - str1);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}