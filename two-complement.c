#include <stdio.h>

int main() {

    int a = 6;
    for (int i = 3; i >= 0; i--) {
        printf("%d", ((a>>i) & 1)^1);
    }

    printf("\n");
    printf("%d", sizeof(a));
    return 0;
}


