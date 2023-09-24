#include <stdio.h>
void main() {
    int red, green, blue;
    double white, cyan, magenta, yellow, black;

    printf("Enter RGB values (0-255): ");
    scanf("%d %d %d", &red, &green, &blue);

    white =(red / 255.0,(green / 255.0, blue / 255.0));
    cyan = (white - red / 255.0) / white;
    magenta = (white - green / 255.0) / white;
    yellow = (white - blue / 255.0) / white;
    black = 1.0 - white;

    printf("CMYK values:\n");
    printf("Cyan: %.2lf\n", cyan);
    printf("Magenta: %.2lf\n", magenta);
    printf("Yellow: %.2lf\n", yellow);
    printf("Black: %.2lf\n", black);
}
