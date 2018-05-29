#include <stdio.h>
#include <stdlib.h>

#define OP_ADD '+'
#define OP_SUB '-'
#define OP_MULTIPLY '*'
#define OP_DIVIDE '/'

int main() {
    char s1[100];
    char s2[100];
    char operator;
    long n1;
    long n2;
    printf("+++++ Divide by 0 to quit the program. +++++\n");
    do {
        printf("> ");
        scanf("%s %c %s", s1, &operator, s2);
        n1 = strtol(s1, 0, 10);
        n2 = strtol(s2, 0, 10);
        switch (operator) {
            case OP_ADD:
                printf("%ld %c %ld = %ld\n", n1, operator, n2, n1 + n2);
                break;
            case OP_SUB:
                printf("%ld %c %ld = %ld\n", n1, operator, n2, n1 - n2);
                break;
            case OP_MULTIPLY:
                printf("%ld %c %ld = %ld\n", n1, operator, n2, n1 * n2);
                break;
            case OP_DIVIDE:
                if (n2 != 0)
                    printf("%ld %c %ld = %ld\n", n1, operator, n2, n1 / n2);
                break;
            default:
                printf("Invalid operator\n");
        }
    } while (operator != OP_DIVIDE || (operator == OP_DIVIDE && n2 != 0));
    return 0;
}