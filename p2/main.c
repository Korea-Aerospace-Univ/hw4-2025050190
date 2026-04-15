#include <stdio.h>

int main()
{
    int N = 0, count_char = 0, count_int = 0, max_char = 0, max_int = 0;
    char ch = '\0';

    scanf("%d", &N);

    for (int i = 0; i < N; i ++) {
        scanf(" %c", &ch);

        if (ch >= 'a' && ch <= 'z') {
            count_char ++;
            if (max_char < count_char) {
                max_char = count_char;
            }
            count_int = 0;

        }
        else if (ch >= '0' && ch <= '9') {
            count_int ++;
            if (max_int < count_int) {
                max_int = count_int;
            }
            count_char = 0;
        }
        else {
            count_char = 0;
            count_int = 0;
        }
    }

    printf("%d\n%d", max_char, max_int);

    return 0;
}
