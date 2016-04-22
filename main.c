#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "CannotResolve"
int main() {
    int q=(10+8-21)*9/3;
    printf("%d\n",q);
    printf("%f\n", sin(M_PI / 2));//PI是弧度

    /*
     * & 位与
     * | 位或
     * ~ 位反
     * ^ 异或
     * >> 右移
     * << 左移
     * */
    int a =0b101;
    int b =0b100;
    int c =0b100;


    char string[25];
    sprintf(string, "%x", 100); //将100转为16进制表示的字符串。

    itoa(a&b,string,2);    //2进制
    printf("%s\n",string);

    printf("%d\n",a|b);

    return 0;
}
#pragma clang diagnostic pop