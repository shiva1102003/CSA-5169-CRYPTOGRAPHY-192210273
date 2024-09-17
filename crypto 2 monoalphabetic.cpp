#include <stdio.h>
#include <ctype.h>
void monoalphabeticSubstitution(char *text, const char *mapping) {
    for (int i = 0; text[i] != '\0'; ++i) {
        if (isalpha(text[i])) {
            // Use lowercase or uppercase mapping
            text[i] = islower(text[i]) ? tolower(mapping[text[i] - 'a']) : toupper(mapping[text[i] - 'A']);
        }
    }
}

int main() {
    char text[100];
    const char *mapping = "DEFGHIJKLMNOPQRSTUVWXYZABC"; // Substitution mapping

    printf("Enter the plaintext: ");
    fgets(text, sizeof(text), stdin);

    monoalphabeticSubstitution(text, mapping);
    printf("Ciphertext: %s\n", text);

    return 0;
}