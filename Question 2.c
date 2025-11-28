#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome
int isPalindrome(char s[]) {
    int start = 0;
    int end = strlen(s) - 1;

    while (start < end) {
        if (s[start] != s[end])
            return 0; 
        start++;
        end--;
    }
    return 1;
}

// Function to find the first palindromic string
char* firstPalindrome(char words[][101], int n) {
    static char empty[] = ""; // Safe empty string

    for (int i = 0; i < n; i++) {
        if (isPalindrome(words[i]))
            return words[i];
    }
    return empty; // No palindrome found
}

int main() {
    char words1[][101] = {"abc","car","ada","racecar","cool"};
    int n1 = 5;
    printf("%s\n", firstPalindrome(words1, n1)); // Output: ada

    char words2[][101] = {"notapalindrome","racecar"};
    int n2 = 2;
    printf("%s\n", firstPalindrome(words2, n2)); // Output: racecar

    char words3[][101] = {"def","ghi"};
    int n3 = 2;
    printf("%s\n", firstPalindrome(words3, n3)); // Output: (empty string)

    return 0;
}

