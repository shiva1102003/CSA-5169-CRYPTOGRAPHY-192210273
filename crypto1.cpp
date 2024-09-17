#include <stdio.h>
#include <ctype.h>

void caesarCipher(char text[], int k) {
    int i = 0;
    char ch;
    
    // Loop through each character of the string
    while (text[i] != '\0') {
        ch = text[i];
        
        // If the character is uppercase
        if (isupper(ch)) {
            text[i] = ((ch - 'A' + k) % 26) + 'A';
        }
        // If the character is lowercase
        else if (islower(ch)) {
            text[i] = ((ch - 'a' + k) % 26) + 'a';
        }
        // If the character is not a letter, leave it unchanged
        i++;
    }
}

int main() {
    char text[100];
    int k;

    // Input the plaintext string
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    // Input the value of k (shift amount)
    printf("Enter the shift value (1-25): ");
    scanf("%d", &k);

    // Apply the Caesar cipher
    caesarCipher(text, k);
    
    // Output the encrypted text
    printf("Encrypted text: %s", text);

    return 0;
}
