#include<stdio.h>
//Remove duplicate characters from a string
int main(){

    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    char str[n+1]; // +1 for null terminator
    printf("Enter the string: ");
    scanf("%s", str);
    // Remove duplicates
    int index = 0; // index of the next unique character
    for(int i=0; i<n; i++){
        int j;
        for(j=0; j<index; j++){
            if(str[i] == str[j]){
                break; // duplicate found
            }
        }
        if(j == index){ // no duplicate found
            str[index++] = str[i];
        }
    }
    str[index] = '\0'; // null terminate the new string
    printf("String after removing duplicates: %s\n", str);
    return 0;

}