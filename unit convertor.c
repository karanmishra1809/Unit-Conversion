
#include <stdio.h>
#include <stdlib.h>

void length_menu();
void weight_menu();
void temperature_menu();

/* --- Length conversions --- */
double meters_to_kilometers(double m) { return m / 1000.0; }
double kilometers_to_meters(double km) { return km * 1000.0; }
double centimeters_to_meters(double cm) { return cm / 100.0; }
double meters_to_centimeters(double m) { return m * 100.0; }
double inches_to_centimeters(double in) { return in * 2.54; }
double feet_to_meters(double ft) { return ft * 0.3048; }

/* --- Weight conversions --- */
double grams_to_kilograms(double g) { return g / 1000.0; }
double kilograms_to_grams(double kg) { return kg * 1000.0; }
double pounds_to_kilograms(double lb) { return lb * 0.45359237; }
double ounces_to_grams(double oz) { return oz * 28.3495231; }

/* --- Temperature conversions --- */
double celsius_to_fahrenheit(double c) { return (c * 9.0/5.0) + 32.0; }
double fahrenheit_to_celsius(double f) { return (f - 32.0) * 5.0/9.0; }
double celsius_to_kelvin(double c) { return c + 273.15; }
double kelvin_to_celsius(double k) { return k - 273.15; }

int main(void) {
    int main_choice = -1;

    while (1) {
        printf("=== Unit Converter ===\n");
        printf("1) Length\n");
        printf("2) Weight\n");
        printf("3) Temperature\n");
        printf("0) Exit\n");
        printf("Choose: ");

        if (scanf("%d", &main_choice) != 1) {
            // clear stdin if invalid input
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid input. Please enter a number.\n\n");
            continue;
        }

        switch (main_choice) {
            case 1: length_menu(); break;
            case 2: weight_menu(); break;
            case 3: temperature_menu(); break;
            case 0: printf("Goodbye!\n"); exit(0);
            default: printf("Invalid choice. Try again.\n\n");
        }
    }

    return 0;
}

void length_menu() {
    int choice = -1;
    double input, result;

    while (1) {
        printf("\n-- Length conversions --\n");
        printf("1) meters -> kilometers\n");
        printf("2) kilometers -> meters\n");
        printf("3) centimeters -> meters\n");
        printf("4) meters -> centimeters\n");
        printf("5) inches -> centimeters\n");
        printf("6) feet -> meters\n");
        printf("0) Back\n");
        printf("Choose: ");

        if (scanf("%d", &choice) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid input.\n");
            continue;
        }

        if (choice == 0) { printf("\n"); return; }

        printf("Enter value: ");
        if (scanf("%lf", &input) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid number.\n");
            continue;
        }

        switch (choice) {
            case 1:
                result = meters_to_kilometers(input);
                printf("Result: %f meters = %f kilometers\n\n", input, result);
                break;
            case 2:
                result = kilometers_to_meters(input);
                printf("Result: %f kilometers = %f meters\n\n", input, result);
                break;
            case 3:
                result = centimeters_to_meters(input);
                printf("Result: %f centimeters = %f meters\n\n", input, result);
                break;
            case 4:
                result = meters_to_centimeters(input);
                printf("Result: %f meters = %f centimeters\n\n", input, result);
                break;
            case 5:
                result = inches_to_centimeters(input);
                printf("Result: %f inches = %f centimeters\n\n", input, result);
                break;
            case 6:
                result = feet_to_meters(input);
                printf("Result: %f feet = %f meters\n\n", input, result);
                break;
            default:
                printf("Invalid choice.\n\n");
        }
    }
}

void weight_menu() {
    int choice = -1;
    double input, result;

    while (1) {
        printf("\n-- Weight conversions --\n");
        printf("1) grams -> kilograms\n");
        printf("2) kilograms -> grams\n");
        printf("3) pounds -> kilograms\n");
        printf("4) ounces -> grams\n");
        printf("0) Back\n");
        printf("Choose: ");

        if (scanf("%d", &choice) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid input.\n");
            continue;
        }

        if (choice == 0) { printf("\n"); return; }

        printf("Enter value: ");
        if (scanf("%lf", &input) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid number.\n");
            continue;
        }

        switch (choice) {
            case 1:
                result = grams_to_kilograms(input);
                printf("Result: %f grams = %f kilograms\n\n", input, result);
                break;
            case 2:
                result = kilograms_to_grams(input);
                printf("Result: %f kilograms = %f grams\n\n", input, result);
                break;
            case 3:
                result = pounds_to_kilograms(input);
                printf("Result: %f pounds = %f kilograms\n\n", input, result);
                break;
            case 4:
                result = ounces_to_grams(input);
                printf("Result: %f ounces = %f grams\n\n", input, result);
                break;
            default:
                printf("Invalid choice.\n\n");
        }
    }
}

void temperature_menu() {
    int choice = -1;
    double input, result;

    while (1) {
        printf("\n-- Temperature conversions --\n");
        printf("1) Celsius -> Fahrenheit\n");
        printf("2) Fahrenheit -> Celsius\n");
        printf("3) Celsius -> Kelvin\n");
        printf("4) Kelvin -> Celsius\n");
        printf("0) Back\n");
        printf("Choose: ");

        if (scanf("%d", &choice) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid input.\n");
            continue;
        }

        if (choice == 0) { printf("\n"); return; }

        printf("Enter value: ");
        if (scanf("%lf", &input) != 1) {
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            printf("Invalid number.\n");
            continue;
        }

        switch (choice) {
            case 1:
                result = celsius_to_fahrenheit(input);
                printf("Result: %f °C = %f °F\n\n", input, result);
                break;
            case 2:
                result = fahrenheit_to_celsius(input);
                printf("Result: %f °F = %f °C\n\n", input, result);
                break;
            case 3:
                result = celsius_to_kelvin(input);
                printf("Result: %f °C = %f K\n\n", input, result);
                break;
            case 4:
                result = kelvin_to_celsius(input);
                printf("Result: %f K = %f °C\n\n", input, result);
                break;
            default:
                printf("Invalid choice.\n\n");
        }
    }
}
