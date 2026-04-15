#include <stdio.h>

int main() {
    int n = 0, count = 0, answer = 0;
    scanf("%d", &answer);
    do {
        scanf("%d", &n);
        if (n > answer)
            printf("%d>?\n", n);
        else if (n < answer)
            printf("%d<?\n", n);
        else
            printf("%d==?\n", n);
        count ++;
    } while (n != answer);
    printf("%d", count);

    return 0;
}
