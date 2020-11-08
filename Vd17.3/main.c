#include <stdio.h>
#include <string.h>

int main() {
    char firname[15];
    char lastname[15];
    printf("Enter your firsst name: ");
    scanf("%s", firname);
    printf("Enter your last name: ");
    scanf("%s", lastname);
    strcat(firname, lastname);
    printf("%s", firname);
    printf("\n");
}
