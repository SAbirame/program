#include <stdio.h>
void processInput(char input[]) {
    char currentChar;
    int repeatCount;
    int i = 0;
    while (input[i] != '\0') {
        currentChar = input[i++];
        if (input[i] >= '0' && input[i] <= '9') {
            repeatCount = 0;
            while (input[i] >= '0' && input[i] <= '9') {
                repeatCount = repeatCount * 10 + (input[i] - '0');
                i++;
            }
            for (int j = 0; j < repeatCount; j++) {
                printf("%c", currentChar);
            }
        } else {
            printf("%c", currentChar);
        }
    }
}

int main() {
    char input1[] = "a1b10";
    char input2[] = "b3c6d15";
    printf("Input: %s\nOutput: ", input1);
    processInput(input1);
    printf("\n");

    printf("Input: %s\nOutput: ", input2);
    processInput(input2);
    printf("\n");

    return 0;
}