#include <stdio.h>
#include <string.h>
int main() {
    char compname[20]= "Microsoft";
    int len, ctr;
    len = strlen(compname);
    for (ctr=0; ctr<len; ctr++) {
        printf("%c*", compname[ctr]);
    }
    printf("\n");
}
