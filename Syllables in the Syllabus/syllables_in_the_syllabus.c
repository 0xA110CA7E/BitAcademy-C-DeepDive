#include <stdio.h>


int main() {

    struct stringResults
    {
        int klinkers;
        int medeklinkers;
    };

    struct stringResults res1 = { 0, 0 };
	char inputString[256];

    fgets(inputString, 256, stdin);

    for (int i = 0; inputString[i]; i++)
    {
        if ((inputString[i] >= 65 && inputString[i] <= 90) || (inputString[i] >= 97 && inputString[i] <= 122))
        {

            if (inputString[i] == 'a' || inputString[i] == 'e' || inputString[i] == 'i' || inputString[i] == 'o' || inputString[i] == 'u' || inputString[i] == 'A' || inputString[i] == 'E' || inputString[i] == 'I' || inputString[i] == 'O' || inputString[i] == 'U')
                res1.klinkers++;
            else
                res1.medeklinkers++;
        }

    }

    printf("Klinkers: %i\nMedeklinkers: %i", res1.klinkers, res1.medeklinkers);

    return 0;
}