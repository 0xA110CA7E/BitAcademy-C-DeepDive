#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int inputNum1;
    int inputNum2;
    char inputOperator;
    float calcResult;
    printf("Welkom bij deze calculator.\nGeef een getal op: ");
    scanf("%d", &inputNum1);
    printf("Geef je operator: (*,-,+ etc): ");
    scanf(" %c", &inputOperator);
    printf("Geef nog een getal op: ");
    scanf("%d", &inputNum2);

	calcResult = 0;

    if (inputNum1 == 0 || inputNum2 == 0)
    {
        printf("Het nummer 0 word niet ondersteund.");
        return 0;
    }

    switch (inputOperator)
    {
    case '+':
        calcResult = inputNum1 + inputNum2;
        break;

    case '-':
        calcResult = inputNum1 - inputNum2;
        break;

    case '*':
        calcResult = inputNum1 * inputNum2;
        break;

    case '/':
        calcResult = (float)inputNum1 / (float)inputNum2;
        break;

    case '%':
        calcResult = inputNum1 % inputNum2;
        break;
    default:
        printf("Je hebt een ongeldige operator ingevoerd.\n");
        return 0;
    }

    printf("Het antwoord van %d %c %d is: %f", inputNum1, inputOperator, inputNum2, calcResult);

	return 0;
}
