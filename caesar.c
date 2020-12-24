#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    if (argc !=2) {
        return 1;
    }
    
    string plain = get_string("plaintext: ");
    int shift = atoi(argv[1]);
    
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plain); i++) {
        if (!isalpha(plain[i])) {
            printf("%c", plain[i]);
        } else {
            if (plain[i] > 'Z') {
                printf("%c", (plain[i] - 'a' + shift) % 26 + 'a');
            } else {
                printf("%c", (plain[i] - 'A' + shift) % 26 + 'A');
            }
        }
    }
    printf("\n");
}