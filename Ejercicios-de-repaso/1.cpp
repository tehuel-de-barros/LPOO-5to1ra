#include <stdio.h>

int main() {
    int n1, n2, n3;
    for (n1 = 1; n1 <= 85; n1++) {  // el primer número debe ser menor o igual a 85
        n2 = n1 + 1;
        n3 = n2 + 1;

        if (n1 + n2 + n3 == 87) {
            printf("Los tres números consecutivos cuya suma es 87 son: %d, %d, %d\n", n1, n2, n3);
        }
    }
    return 0;
}
