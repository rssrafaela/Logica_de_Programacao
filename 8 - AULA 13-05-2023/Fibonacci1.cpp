#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Digite o n�mero de termos da sequ�ncia de Fibonacci que deseja calcular:\n");
    scanf("%d", &n);

    printf("Sequ�ncia de Fibonacci:\n");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
