#include <stdio.h>
#include <stdlib.h>

int main() {
    int* numArray;
    int inputCount;

    printf("Hoeveel getallen wil je opgeven: \n");
    scanf("%i", &inputCount);
    numArray = (int*)malloc(inputCount * sizeof(int));


    for (int i = 0; i < inputCount; ++i) {
        printf("Getal %i: ", i + 1);
        scanf("%d", &numArray[i]);
    }
    printf("\n\n\n");

    for (int i = 0; i < inputCount; ++i) {
        printf("Getal %i is: ", i + 1);
        printf("%d\n", numArray[i]);
    }
    return 0;
}
