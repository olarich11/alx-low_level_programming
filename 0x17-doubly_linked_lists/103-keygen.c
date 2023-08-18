#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *characterSet = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char generatedKey[7] = "      ";
    unsigned int usernameLength, sumOfAscii, productOfAscii, maxAscii, sumOfSquares, randIterations, randomNum;
    size_t i;

    if (argc != 2) {
        printf("Correct usage: ./keygen5 username\n");
        return 1;
    }

    usernameLength = strlen(argv[1]);
    sumOfAscii = 0;
    productOfAscii = 1;
    maxAscii = argv[1][0];
    sumOfSquares = 0;
    randIterations = argv[1][0];
    randomNum = 0;

    for (i = 0; i < strlen(argv[1]); i++) {
        sumOfAscii += argv[1][i];
        productOfAscii *= argv[1][i];
        if ((unsigned char)argv[1][i] >= maxAscii) {
            maxAscii = (unsigned char)argv[1][i];
        }
        sumOfSquares += argv[1][i] * argv[1][i];
    }

    srand(maxAscii ^ 14);
    for (i = 0; i < randIterations; i++) {
        randomNum = rand();
    }

    generatedKey[0] = characterSet[(usernameLength ^ 59) & 63];
    generatedKey[1] = characterSet[(sumOfAscii ^ 79) & 63];
    generatedKey[2] = characterSet[(productOfAscii ^ 85) & 63];
    generatedKey[3] = characterSet[(randomNum ^ 229) & 63];
    generatedKey[4] = characterSet[(sumOfSquares ^ 239) & 63];
    generatedKey[5] = characterSet[(randomNum ^ 229) & 63];

    printf("%s\n", generatedKey);

    return 0;
}
