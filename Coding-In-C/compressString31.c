//leetcode 443 - String Compression 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char result[200];  // result may be longer because of numbers
    
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int j = 0; // index for result

    for (int i = 0; i < len; i++) {
        result[j++] = str[i];   // store character
        
        int count = 1;
        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // convert count to characters & add to result
        if (count > 1) {
            j += sprintf(&result[j], "%d", count);
        }
    }

    result[j] = '\0';

    printf("Compressed String: %s\n", result);

    return 0;
}
