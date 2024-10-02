#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    // Convert the integer to long to handle possible overflow during reversal
    long y = (long)x;
    long rev = 0;
    long temp = y;
    int d;
    
    // Check if the number is negative
    if (y < 0) {
        return false;
    }

    // Reverse the integer
    while (y != 0) {
        d = y % 10;
        rev = rev * 10 + d;
        y = y / 10;
    }

    // Compare the original number with the reversed number
    return temp == rev;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    
    return 0;
}
