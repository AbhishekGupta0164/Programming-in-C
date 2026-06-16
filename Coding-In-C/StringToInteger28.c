#include <stdio.h>
#include <stdlib.h>
//string to integer conversion(like atoi)
int main() {
    char str[100];
    printf("Enter a number string: ");
    scanf("%s", str);

    int num = atoi(str); // convert string to integer

    printf("Integer value = %d\n",num);

    return 0;
}
