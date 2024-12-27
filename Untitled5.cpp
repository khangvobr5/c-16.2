#include <stdio.h>

void hoanDoi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int var1 = 5; 
    int var2 = 10;
    printf("Gia tri ban dau:\n");
    printf("var1 = %d, var2 = %d\n", var1, var2);
    hoanDoi(&var1, &var2);
    printf("Gia tri sau khi hoan doi:\n");
    printf("var1 = %d, var2 = %d\n", var1, var2);

    return 0;
}

