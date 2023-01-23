#include "vstup.h"

float enterRadius() {
    float r;
    float GetChar;
    int choice;

    do {
        printf("Radius or Diameter?\n");
        printf("1 - Radius\n2 - Diameter\n");
        scanf("%d", &choice);

        GetChar = 0;
        while (getchar() != '\n') {
            GetChar++;
        }

        if (GetChar != 0 || choice < 1 || choice > 2) {
            printf("You wrote the wrong option. You must use a dot as a decimal point.");
        } else if (choice == 0) {
            return 0;
        } else {
            printf("enter value in cm:\n");
            scanf("%f", &r);

            GetChar = 0;
            while (getchar() != '\n') {
                GetChar++;
            }

            if (GetChar != 0) {
                printf("wrong radius");
            } else if (r <= 0) {
                printf("radius cant be negative number.");
            } else {
                if (choice == 2) {
                    r = r / 2.0;
                }
            }
        }
    } while (choice <= 0 || GetChar != 0);
    return r;
}
float enterSide() {
    float side;
    int GetChar;

    do {
        scanf("%f", &side);
        if (side <= 0) {
            printf("Side cant be a negative number or zero");
        }

        GetChar = 0;
        while (getchar() != '\n') {
            GetChar++;
        }
    } while (side <= 0 || GetChar != 0);
    return side;
}