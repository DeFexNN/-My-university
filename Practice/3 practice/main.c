#include <math.h>
#include <stdio.h>
#include <conio.h>
/*
int main() {
 double x, y;
 printf_s("x=");scanf_s("%lf", &x);//11 variant
 printf_s("y=");scanf_s("%lf", &y);
 /*
 if (y > 0 && y < 1 && x <0 && x > -1)printf_s("������111");   //1 part cube
 if (y < 0 && y > -1 && x <0 && x > -1)printf_s("������222"); //2 part cube below
 if (y < sqrt(1 - x * x) && y > 0 && x > 0)printf_s("������333");// 3 upper part
 if (y > sqrt(1 - x * x) && x > 0 && y < 0)printf_s("������444");// 4 upper part
 */
 /*
 if (y > 0 && y < 1 && x <1 && x > 0)printf_s("������");   //1 part cube
 if (y < sqrt(1 - x * x && y < 0 && x < 0))printf_s("������");// 3 upper part
*/
/*
 return 0;
}
*/
/*
# include <stdio.h>
# include <math.h>
#include<locale.h>
int main(void) {
 long n;
 double dbln;
 double sum = 0;
 double term;
 const double eps = 0.000001;
 long k3 = 1;
 long k2 = 1;
 short k1 = 1;
 long k4 = 1;
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);

 for (n = 0;; n++ , k2*= 2, k1 = -k1, k3 *= (2 * n)) {
  //������������ n � ����� � ��������� ������
  dbln = n;
  //���������� ��������� �����
  //term = 1.0 * k1 * (pow(2, n + 1)) / (pow(2, 2 * n) + 1);
  //term = 1.0 * k1 * 1 / 2*(n + 1);

  //�������� ���������� ��� �������
  if (fabs(term) >= eps)
  //���� �� ��������� - ����������� ����
  sum+=term;
  //���� ��������� - ����� � �����
  else break;
  //���� 10 ����� - �������� ����
  if (n == 9)
  printf(" ���� 10 ����� ���� = % 10.7lf \ n ", sum);
 }
 //ʳ���� ��������� �����
 //���� ��������� ����
 printf(" ����� ���� ���� = %10.7lf \ n ", sum);
 return 0;
} //ʳ���� ��������
*/
/*
# include <stdio.h>
# include <math.h>
int main(void) {
    short n; //�������� ���������� ����� 
    double x, y; //������� � �������� ������� 
    short h; //������� ����� �� ����� 
    //������� ���� - ��� 5 ������ 
    for (n = 0; n < 5; n++) {
        //���� ��������� ������� 
        printf("  |    x  |     y      | \ n ");
        printf(" | ------- | ------------ | \ n ");
        //�������� ���� ��� ������ ������ 
        for (x = 0; x <= 4; x += 0.25) {
            //1 - � ������ 
            if (x <= 2) {
                y = sqrt(4 - pow((x - 2), 2));
            };
            if (x == 2) {
                y = 2 && y = 1.75;
            }
            if (x == 3) {
                y >= -1 && y <= 0;
            }
            // //2 - � ������ 
            //else 
            if (x < 3 && x >= 2) {
                y = -sqrt(1 - pow(x - 3, 2));
            }
            //3 - � ������ 

            if (x > 3)y = 0;
            //���� ����� ������� 
            printf(" | % 5.2lf | % 10.7lf | ", x + n * 4, y);
            //���������� ������� ����� 
            h = (y + 1) * 10 + 20;
            if (y - 1 - h * 10 > 0.5) h++;
            //��������� ����� ������� 
            for (; h > 0; h--) printf(" ");
            printf(" * \n ");
        } //ʳ���� ����������� ����� 
         //����� �� ������� ��������� 
        printf(" �������� ������ Enter ...");
        getchar();
    } //ʳ���� ���������� ����� 
    return 0;
} //ʳ���� ��������
*/