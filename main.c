#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "CannotResolve"
int main() {
    int q=(10+8-21)*9/3;
    printf("加减：%d\n",q);

    printf("M_PI/2：%f\n", sin(M_PI / 2));//PI是弧度

    /*
     * & 位与
     * | 位或
     * ~ 位反
     * ^ 异或
     * >> 右移
     * << 左移
     * */
    int a =0b1010;
    int b =0b1001;
    int c =0b101001;

    char string[25];
    sprintf(string, "16进制：%x", 16); //将100转为16进制表示的字符串。

    itoa(a&b,string,2);    //2进制
    printf("&：%s\n",string);

    itoa(a|b,string,2);    //2进制
    printf("|：%s\n",string);

    //0变1 1变0
    int8_t d=-3;
    uint8_t e=0b000000001;
    uint8_t  f=0b11111110;
    printf("d:%d\n",~d);
    //未能达到期望值
    printf("e:%d\n",e);
    printf("e:%d\n",~e);
    printf("f:%d\n",f);
    printf("f:%d\n",~f);

    //意思是相同得0 否为1
    int h=1;
    int i=0;
    printf("^：%d\n",h^i);

    itoa(a^c,string,2);    //2进制
    printf("%s\n",string);

    int8_t j=2;
    printf("%d\n",~j);

    int k=1;
    printf("K:%d\n",k<<1);

    uint32_t color=0xffffffff;//ARGB(Alpha,RED,GREEN,BLUE);Alpha透明度ff是完全不透明

    return 0;
}
#pragma clang diagnostic pop