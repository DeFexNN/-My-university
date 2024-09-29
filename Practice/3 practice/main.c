#include <math.h>
#include <stdio.h>
#include <conio.h>
/*
int main() {
 double x, y;
 printf_s("x=");scanf_s("%lf", &x);//11 variant
 printf_s("y=");scanf_s("%lf", &y);
 /*
 if (y > 0 && y < 1 && x <0 && x > -1)printf_s("Попадає111");   //1 part cube
 if (y < 0 && y > -1 && x <0 && x > -1)printf_s("Попадає222"); //2 part cube below
 if (y < sqrt(1 - x * x) && y > 0 && x > 0)printf_s("Попадає333");// 3 upper part
 if (y > sqrt(1 - x * x) && x > 0 && y < 0)printf_s("Попадає444");// 4 upper part
 */
 /*
 if (y > 0 && y < 1 && x <1 && x > 0)printf_s("Попадає");   //1 part cube
 if (y < sqrt(1 - x * x && y < 0 && x < 0))printf_s("Попадає");// 3 upper part
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
  //Перетворення n у форму з плаваючою точкою
  dbln = n;
  //Обчислення чергового члена
  //term = 1.0 * k1 * (pow(2, n + 1)) / (pow(2, 2 * n) + 1);
  //term = 1.0 * k1 * 1 / 2*(n + 1);

  //Перевірка досягнення межі точності
  if (fabs(term) >= eps)
  //Якщо не досягнута - накопичення суми
  sum+=term;
  //Якщо досягнута - вихід з циклу
  else break;
  //Якщо 10 членів - висновок суми
  if (n == 9)
  printf(" Сума 10 членів ряду = % 10.7lf \ n ", sum);
 }
 //Кінець основного циклу
 //Вивід остаточної суми
 printf(" Повна сума ряду = %10.7lf \ n ", sum);
 return 0;
} //Кінець програми
*/
/*
# include <stdio.h>
# include <math.h>
int main(void) {
    short n; //параметр зовнішнього циклу 
    double x, y; //абсциса і ордината графіка 
    short h; //позиція точки на екрані 
    //Зовнішній цикл - для 5 періодів 
    for (n = 0; n < 5; n++) {
        //Вивід заголовка таблиці 
        printf("  |    x  |     y      | \ n ");
        printf(" | ------- | ------------ | \ n ");
        //Внутрішній цикл для одного періоду 
        for (x = 0; x <= 4; x += 0.25) {
            //1 - й відрізок 
            if (x <= 2) {
                y = sqrt(4 - pow((x - 2), 2));
            };
            if (x == 2) {
                y = 2 && y = 1.75;
            }
            if (x == 3) {
                y >= -1 && y <= 0;
            }
            // //2 - й відрізок 
            //else 
            if (x < 3 && x >= 2) {
                y = -sqrt(1 - pow(x - 3, 2));
            }
            //3 - й відрізок 

            if (x > 3)y = 0;
            //Вивід рядка таблиці 
            printf(" | % 5.2lf | % 10.7lf | ", x + n * 4, y);
            //Визначення позиції точки 
            h = (y + 1) * 10 + 20;
            if (y - 1 - h * 10 > 0.5) h++;
            //Виведення точки графіка 
            for (; h > 0; h--) printf(" ");
            printf(" * \n ");
        } //Кінець внутрішнього циклу 
         //Пауза до команди оператора 
        printf(" Натисніть клавішу Enter ...");
        getchar();
    } //Кінець зовнішнього циклу 
    return 0;
} //Кінець програми
*/