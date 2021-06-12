#include <stdio.h>
//By JinXin
struct TPoly{
    int deg;
    float Coeff[41];
};

//返回值多变量，无法用return实现
//eg: int a[10];  char c[10];

struct TPoly SumPoly(struct TPoly poly1, struct TPoly poly2)    //每一个input parameter前面其数据类型是必不可少的
{
    struct TPoly poly3;
    int i;
    //如果没有事先补0，还得比较以下两个多项式谁的次数更高
    for (i=0; i<=19; i++) {
        poly3.Coeff[i] =poly1.Coeff[i] + poly2.Coeff[i];   //紧跟一条指令，大括号是可以省略的
    }
    if (poly1.deg > poly2.deg) {
        poly3.deg = poly1.deg;
    } else {
        poly3.deg = poly2.deg;
    }

    return poly3;       //return 0; 会与实现定义的函数返回值类型起冲突
}

struct TPoly InputValPoly();

int main()
{
    struct TPoly poly4, poly5, poly6, poly7, poly8;

    poly4 = InputValPoly();
    poly5 = InputValPoly();

    poly6 = SumPoly(poly4, poly5);

    polysum1(poly4,poly5,&poly7,&poly8);
    printf("The degree of poly6 is %d\n", poly6.deg);
    for (i=1; i<=poly6.deg; i++) {
        printf("%d",poly6.Coeff[i]);
    }
    //printf("the constant term of P7 is %f",poly7.Coeff[0]);
    return 0;
}


struct TPoly InputValPoly()
{
    struct TPoly polyout;
    int i;
    for (i=0; i<=39; i++) {
        polyout.Coeff[i] = 0;
    }

    printf("Enter the degree of your polynomial:\n");
    scanf("%d", &polyout.deg);
    printf("Enter the coefficients of your polynomial (increasing order from 0th polynomial):\n");
    for (i=0; i<=polyout.deg;i++) {
        scanf("%f", &polyout.Coeff[i]);
    }

    return polyout;
}





void polysum1(struct TPoly P1, struct TPoly P2, struct TPoly *newP1, struct TPoly *newP2) 
{
    //struct TPoly newP1,newP2;
    //*newP1表示一个格子     P1的值传给地址
    *newP1 = P1;                   //任何一个格子都有名字，属性和内容 
    *newP2 = P2;                   // int *p 表示p这个格子存储了一个int变量的地址
    (*newP1).Coeff[0] = (*newP1).Coeff[0] + 1;
    (*newP2).Coeff[0] = (*newP2).Coeff[0] + 1;

  //  return newP1, newP2;          //C语言不支持返回两个值， 伪语言不区分单变量和多变量
};                                //eg：Swap() 函数需要用指针来交换两个绝对地址

// TPoly *newP1;     //指针存的是一个地址
// 数组名是可以看成一个指针的

/*
void(int k, int array[]) 
{
    array[k] = array[k+1];
}

*/