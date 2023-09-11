#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void clrscr() {
    system("cls");
}

int main() {
    system("COLOR 0A");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t WELCOME\n\n\t\t\t\t\t\t   TO\n\n\t\t\t\t\t       CATALYST01\n\n\t\t\t\t\t  All rights reserved\n\n\n");
    printf("\n\n\n\n\n\t\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
    getchar();
    clrscr();
    system("COLOR 4F");

    printf("\n\t\t\t\t\tWELCOME TO OUR PROJECT\n");
    printf("\n\t\t\t\t\tCALCULATOR\n\n");

    printf("\n\t\t## Our Team Members Name:\n");
    printf("\n\t\t[]******************************************************************[]\n\t\t[]                                                                  []\n");

    printf("\t\t[]\tNAME: Md Abdullah Al Maruf        ID: 0242320005101180      []\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tNAME: Md Hasibul Hasan            ID: 0242320005101563      []\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tNAME: Abu Dazana                  ID: 0242320005101810      []\n\t\t[]                                                                  []\n");
    printf("\t\t[]\tNAME: Tasmia Kamal                ID: 0242320005101768      []\n\t\t[]                                                                  []\n");
    printf("\t\t[]                                                                  []\n\t\t[]******************************************************************[]\n");

    printf("\n\n\t\tPRESS ENTER KEY TO GO HOME PAGE:  ");
    getchar();
    clrscr();
    system("COLOR 0F");

    int choice;
    printf("\t\t\t\t\tWelcome To The Scientific-Calculator\n\n\n\n\n");

    char input_add[100];  // Input for addition
    char input_sub[100];  // Input for subtraction
    char input_mul[100];  // Input for multiplication
    char input_div[100];  // Input for division
    char input_per[100];  // Input for percentage

    while (1) {
        printf("1. Addition\t");
        printf("2. Subtraction\t");
        printf("3. Multiplication\t");
        printf("\n4. Division\t");
        printf("5. Percentage\t");
        printf("6. Logarithm\t");
        printf("\n7. Trigonometry\t");
        printf("8. Square\t");
        printf("\n\n9. About Us\n");
        printf("0. Quit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                clrscr();
                float sum_add = 0.0;
                char input_line[100];
                fflush(stdin);
                fgets(input_line, sizeof(input_line), stdin);

                char *token_add = strtok(input_line, "+");

                while (token_add != NULL) {
                    float number;
                    sscanf(token_add, "%f", &number);
                    sum_add += number;
                    token_add = strtok(NULL, "+");
                }

                printf("= %.2f\n\n\n\n\n\n\n\n", sum_add);
                break;
            }

            case 2: {
                clrscr();
                float result_sub = 0.0;  // Change data type to float
                char input_line[100];
                fflush(stdin);
                fgets(input_line, sizeof(input_line), stdin);

                char *token_sub = strtok(input_line, "-");

                if (token_sub != NULL) {
                    sscanf(token_sub, "%f", &result_sub);  // Use %f to read floating-point numbers
                    token_sub = strtok(NULL, "-");

                    while (token_sub != NULL) {
                        float number_sub;  // Change data type to float
                        sscanf(token_sub, "%f", &number_sub);  // Use %f to read floating-point numbers
                        result_sub -= number_sub;
                        token_sub = strtok(NULL, "-");
                    }

                    printf("= %.2f\n\n\n\n\n\n\n\n", result_sub);
                }
                break;
            }

            case 3: {
                clrscr();
                float result_mul = 1.0;
                char input_line[100];
                fflush(stdin);
                fgets(input_line, sizeof(input_line), stdin);

                char *token_mul = strtok(input_line, "x");

                if (token_mul != NULL) {
                    sscanf(token_mul, "%f", &result_mul);
                    token_mul = strtok(NULL, "x");

                    while (token_mul != NULL) {
                        float number_mul;
                        sscanf(token_mul, "%f", &number_mul);
                        result_mul *= number_mul;
                        token_mul = strtok(NULL, "x");
                    }

                    printf("= %.2f\n\n\n\n\n\n\n\n", result_mul);
                }
                break;
            }

            case 4: {
                clrscr();
                float result_div = 1.0;
                char input_line[100];
                fflush(stdin);
                fgets(input_line, sizeof(input_line), stdin);

                char *token_div = strtok(input_line, "/");

                if (token_div != NULL) {
                    sscanf(token_div, "%f", &result_div);
                    token_div = strtok(NULL, "/");

                    while (token_div != NULL) {
                        float number_div;
                        sscanf(token_div, "%f", &number_div);
                        result_div /= number_div;
                        token_div = strtok(NULL, "/");
                    }

                    printf("= %.2f\n\n\n\n\n\n\n\n", result_div);
                }
                break;
            }

            case 5: {
                clrscr();
                double percentage;

                printf("Enter a percentage (e.g., m%% or m%%n): ");
                fflush(stdin);
                fgets(input_per, sizeof(input_per), stdin);

                // Remove any newline character from the user input
                input_per[strcspn(input_per, "\n")] = '\0';

                // Check if the user input contains a percentage symbol
                char *percentSymbol = strchr(input_per, '%');

                if (percentSymbol == NULL) {
                    printf("Invalid input. Please include the percentage symbol '%%'.\n");
                    break;
                }

                // Parse the percentage value
                *percentSymbol = '\0';
                double percentValue = atof(input_per);

                // Parse the value after '%'
                int i = 1; // Default value if there's nothing after '%'
                if (*(percentSymbol + 1) != '\0') {
                    i = atoi(percentSymbol + 1);
                }

                // Calculate the percentage based on the input
                percentage = (percentValue / 100.0) * i;

                printf("\t\t\t\t      = %.2lf\n\n\n\n\n\n\n\n", percentage);
                break;
            }

            case 0:
                printf("Thank You\n");
                exit(0);
        }
    }

    return 0;
}
