#include <stdio.h>
#include <stdio.h>

float convertCelsiusToFahrenheit(float C);
float convertFahrenheitToCelsius(float F);

int main() {
    float F, C;
    int type;

    printf("Hello, please choose a conversion type (F -> C = 1, C -> F = 2): ");
    scanf("%d", &type);

    if (type == 1) {
        printf("Please enter F: ");
        scanf("%f", &F);

        C = convertFahrenheitToCelsius(F);

        printf("\n%f F is %f C\n", F, C);

    } else if (type == 2) {
        printf("Please enter C: ");
        scanf("%f", &C);

        F = convertCelsiusToFahrenheit(C);

        printf("\n%f C is %f F\n", C, F);

    } else {
        printf("Invalid option. Please try again\n");
    }

    return 0;
}

float convertCelsiusToFahrenheit(float C) {   
    return (C * 9.0 / 5.0) + 32;
}

float convertFahrenheitToCelsius(float F) {
    return (F - 32) * (5.0 / 9.0);
}
