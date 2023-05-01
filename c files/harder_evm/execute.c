#include <stdio.h>
#include <string.h>

int main () {

    char calldatasize [60];
    int callvalue;
    int dataSize;

    printf ("Enter the CALLDATA (as hex ie. 0x.....): ");
    scanf ("%s", calldatasize);

    printf ("Enter the CALLVALUE (as a decimal integer): ");
    scanf ("%d", &callvalue);

    dataSize = strlen(calldatasize) - 2;

    if (dataSize % 2 == 0) {

        dataSize = dataSize / 2;

        if (dataSize > 8) {

            if (dataSize * callvalue == 54) {
                printf("{3vm_15_c001}");
                return 0;
            }

            printf("[-] That is incorrect");
            return 0;

        }

        printf("[-] That is incorrect");
        return 0;

    }

    printf("[-] That is incorrect");
    return 0;
}