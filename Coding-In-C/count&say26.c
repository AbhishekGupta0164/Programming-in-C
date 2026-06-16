#include <stdio.h>
#include <string.h>
//26 left code
//count and say sequence
void countAndSay(int n)
{
    if (n <= 0)
        return;

    char curr[5000] = "1"; // first term
    char next[5000];

    for (int step = 1; step < n; step++)
    {
        int len = strlen(curr);
        int idx = 0;

        for (int i = 0; i < len;)
        {
            char ch = curr[i];
            int count = 0;

            // count frequency of same digits
            while (i < len && curr[i] == ch)
            {
                count++;
                i++;
            }

            next[idx++] = count + '0'; // count
            next[idx++] = ch;          // digit
        }

        next[idx] = '\0';   // end string
        strcpy(curr, next); // copy to current
    }

    printf("%s\n", curr);
}

int main()
{
    int n;
    printf("Enter n: ");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    scanf("%d", &n);

    countAndSay(n);
    return 0;
}
