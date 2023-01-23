
#include <math.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include "vstup.h"
int main() {
    float a;
    float b;
    float c;
    char side;
    float height;
    float r;
    float circuit;
    float content;
    float volume;
    float area;
    int choice;
    int GetChar;

    printf("Welcome to the program on perimeter, content, volume and surface of bodies and shape.\nTo end the program, enter zero.\nUse a dot as a decimal point!\n");

    do {
        printf("1 - Triangle\n2 - square\n3 - rectangle\n4 - circle\n5 - cube\n6 - block\n7 - cylinder\n8 - pyramid\n9 - cone\n10 - sphere\n\n");
        printf("Choose an object:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Triangle:");
                printf("enter the length of the side a:");
                a = enterSide();
                printf("enter the length of the side b:");
                b = enterSide();
                printf("enter the length of the side c:");
                c = enterSide();
                printf("enter height:");
                vyska = enterSide();

                printf("which side was the height?");
                scanf("%c", &side);


                while (getchar() != '\n') {
                    GetChar++;
                }

                if (GetChar == 0 && (side == 'a' || side == 'b' || side == 'c')) {
                   circuit = a + b + c;
                    switch (side) {
                        case 'a':
                            content = (a * height) / 2.0;
                            break;

                        case 'b':
                            content = (b * height) / 2.0;
                            break;

                        case 'c':
                            content = (c * height) / 2.0;
                    }
                    printf("circuit: %.2f cm\n", circuit);
                    printf("content: %.2f cm square\n", content);
                } else {
                    printf("You entered a wrong side.\n");
                }

                break;
            case 2:
                printf("square:");
                printf("enter the length of the side a:");
                a = enterSide();

               circuit = 4.0 * a;
                content = a * a;

                printf("circuit: %.2f cm\ncontent: %.2f cm ctverecnich", circuit, content);
                break;
            case 3:
                printf("rectangle:");
                printf("enter the length of the side a:");
                a = enterSide();
                printf("enter the length of the side b:");
                b = enterSide();

                circuit = 2 * (a + b);
                content = a * b;

                printf("circuit: %.2f cm\ncontent: %.2f cm ctverecnich", circuit, content);
                break;
            case 4:
                printf("circle:");
                r = enterRadius();
                circuit = 2 * M_PI * r;
                content = M_PI * pow(r, 2);

                printf("circuit: %.2f cm\ncontent: %.2f cm ctverecnich\n", circuit, content);
                break;
            case 5:
                printf("cube:");
                printf("enter the length of the side a:");
                a = enterSide();
                area = 6.0 * pow(a, 2);
                volume = pow(a, 3);

                printf("area: %.2f cm square\nvolume: %.2f cuvic cm ",area, volume);
                break;
            case 6:
                printf("block:");
                break;
            case 7:
                printf("cylinder:");
                break;
            case 8:
                printf("pyramid:");
                break;
            case 9:
                printf("cone:");
                break;
            case 10:
                printf("sphere:");
                printf("radius or diameter\n");
                printf("1 - radius\n2 -diameter\n");
                scanf("%d", &choice);

                    GetChar = 0;
                while (getchar() != '\n') {
                    GetChar++;
                }

                if (GetChar != 0 || choice < 1 || choice > 2) {
                    printf("You typed a wrong choice.");
                } else if (choice == 0) {
                    return 0;
                } else {
                    printf("Enter a value in cm :\n");
                    scanf("%f", &r);

                    GetChar = 0;
                    while (getchar() != '\n') {
                        GetChar++;
                    }

                    if (GetChar != 0) {
                        printf("You entered the radius incorectly.");
                    } else if (r <= 0) {
                        printf("Diameter cant be negative number.");
                    } else {
                        if (choice == 2) {
                            r = r / 2.0;
                        }
                        volume = 4.0 / 3.0 * M_PI * r * r * r;
                        area = 4 * M_PI * pow(r, 2);

                        printf("volume: %f cubic cm\n", volume);
                        printf("Area: %f square cm\n", area);
                    }
                }
                printf("\n");
                break;
            default:
                printf("Chybna volba.");


        }
    }while (choice != 0);


return 0;
}