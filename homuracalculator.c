#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, res;
    int op_num = 0;
    char op = '\0';

    printf("input 1st operand > ");
    scanf("%d", &x);
    fseek(stdin, 0, SEEK_END);
    printf("input 2st operand > ");
    scanf("%d", &y);
    fseek(stdin, 0, SEEK_END);
    printf("enter operator (a number in range 1-4)\n1 => *\n2 => /\n3 => +\n4 => -\n > ");
    scanf("%d", &op_num);
    fseek(stdin, 0, SEEK_END);

    switch (op_num)
    {
    case 1:
        res = x * y;
        op = '*';
        break;
    case 2:
        res = x / y;
        op = '/';
        break;
    case 3:
        res = x + y;
        op = '+';
        break;
    case 4:
        res = x - y;
        op = '-';
        break;
    default:
        printf("invalid operator\n");
        exit(1);
        break;
    }

    printf("%d %c %d = %d\n", x, op, y, res);
}
