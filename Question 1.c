#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isVowel(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void reverseVowels(char s[]) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        while (left < right && !isVowel(s[left])) left++;
        while (left < right && !isVowel(s[right])) right--;

        if (left < right) {
            
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
}

int main() {
    char str1[] = "IceCreAm";
    reverseVowels(str1);
    printf("%s\n", str1); 
    char str2[] = "leetcode";
    reverseVowels(str2);
    printf("%s\n", str2); 

    return 0;
}

