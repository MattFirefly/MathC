#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>

#pragma clang diagnostic push
#pragma ide diagnostic ignored "CannotResolve"
int main() {
    int q=(10+8-21)*9/3;
    printf("�Ӽ���%d\n",q);

    printf("M_PI/2��%f\n", sin(M_PI / 2));//PI�ǻ���

    /*
     * & λ��
     * | λ��
     * ~ λ��
     * ^ ���
     * >> ����
     * << ����
     * */
    int a =0b1010;
    int b =0b1001;
    int c =0b101001;

    char string[25];
    sprintf(string, "16���ƣ�%x", 16); //��100תΪ16���Ʊ�ʾ���ַ�����

    itoa(a&b,string,2);    //2����
    printf("&��%s\n",string);

    itoa(a|b,string,2);    //2����
    printf("|��%s\n",string);

    //0��1 1��0
    int8_t d=-3;
    uint8_t e=0b000000001;
    uint8_t  f=0b11111110;
    printf("d:%d\n",~d);
    //δ�ܴﵽ����ֵ
    printf("e:%d\n",e);
    printf("e:%d\n",~e);
    printf("f:%d\n",f);
    printf("f:%d\n",~f);

    //��˼����ͬ��0 ��Ϊ1
    int h=1;
    int i=0;
    printf("^��%d\n",h^i);

    itoa(a^c,string,2);    //2����
    printf("%s\n",string);

    int8_t j=2;
    printf("%d\n",~j);

    int k=1;
    printf("K:%d\n",k<<1);

    uint32_t color=0xffffffff;//ARGB(Alpha,RED,GREEN,BLUE);Alpha͸����ff����ȫ��͸��

    return 0;
}
#pragma clang diagnostic pop