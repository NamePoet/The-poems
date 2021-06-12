#include <stdio.h>
//By JinXin
struct TPoly{
    int deg;
    float Coeff[41];
};

//����ֵ��������޷���returnʵ��
//eg: int a[10];  char c[10];

struct TPoly SumPoly(struct TPoly poly1, struct TPoly poly2)    //ÿһ��input parameterǰ�������������Ǳز����ٵ�
{
    struct TPoly poly3;
    int i;
    //���û�����Ȳ�0�����ñȽ�������������ʽ˭�Ĵ�������
    for (i=0; i<=19; i++) {
        poly3.Coeff[i] =poly1.Coeff[i] + poly2.Coeff[i];   //����һ��ָ��������ǿ���ʡ�Ե�
    }
    if (poly1.deg > poly2.deg) {
        poly3.deg = poly1.deg;
    } else {
        poly3.deg = poly2.deg;
    }

    return poly3;       //return 0; ����ʵ�ֶ���ĺ�������ֵ�������ͻ
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
    //*newP1��ʾһ������     P1��ֵ������ַ
    *newP1 = P1;                   //�κ�һ�����Ӷ������֣����Ժ����� 
    *newP2 = P2;                   // int *p ��ʾp������Ӵ洢��һ��int�����ĵ�ַ
    (*newP1).Coeff[0] = (*newP1).Coeff[0] + 1;
    (*newP2).Coeff[0] = (*newP2).Coeff[0] + 1;

  //  return newP1, newP2;          //C���Բ�֧�ַ�������ֵ�� α���Բ����ֵ������Ͷ����
};                                //eg��Swap() ������Ҫ��ָ���������������Ե�ַ

// TPoly *newP1;     //ָ������һ����ַ
// �������ǿ��Կ���һ��ָ���

/*
void(int k, int array[]) 
{
    array[k] = array[k+1];
}

*/