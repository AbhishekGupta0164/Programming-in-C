// longest substring without repeating characters
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int last[256];
    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int maxLen = 0;
    int start = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        int len = i - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    return maxLen;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int ans = lengthOfLongestSubstring(s);
    printf("Longest substring length is: %d\n", ans);

    return 0;
}
