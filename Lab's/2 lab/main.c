#include <stdio.h>
#include <conio.h>
#include <math.h>

/*
int main(void)
{
  int i, j = 0, n;
  int a = 1;
  printf("\n \t Enter the primary natural number:"); scanf_s("%d", &i);
  printf("\t Enter the last natural number:"); scanf_s("%d", &n);
  i * 1.0;
  n * 1.0;
  /*
  if (i < 0) {
      i *= -1;
  }//тільки додатні і
  */
  /*
if (n < 0) {
    i *= -1;
}//тільки додатні n
*/
/*
if (i > 0) {
    i *= -1;
}//тільки відємні і
*/
/*
if (n > 0) {
    i *= -1;
}//тільки відємні n
*/

/*printf("\n \t The numbers are:");
while (i <= n) {
  printf("\n \t%d| %d", a,i);
  //printf(" \t%d| %d", a,i);//числа в рядок виводяться
  ++i;
  ++j;
  ++a;
}
printf("\n \t Total numbers:%d \n", j);
printf("\n Press any key:");
_getch();
return 0;
}
*/


/*
int main(void)
{
    char c;
    int i = 0;
    int n = 1;

    printf("\n Enter symbol-by-symbol your name and second name, \n press twice Ctrl + Z and press Enter: \n");
    printf("\t");

    while ((c = getchar()) != EOF)
    {
        printf("\t \n");

        for (int k = 0; k < n; k++) {
            printf(".");
        }
        n++;
        putchar(c);
        ++i;
    }

    printf("\n \t The number of characters: %d \n", i);

    printf("\n Press any key:");
    _getch();
    return 0;
}
*/

/*
int main(void) {
  int j = 0;

  printf("\n Table code characters: \n");
  for (char a = 'a'; a <= 'z'; ++a) {

    printf("\n %4d) %2c: code %4d", j++, a, a);
  }
  j = 0;

  printf("\n Table code characters: \n");
  for (char a = 'A'; a <= 'Z'; ++a) {

    printf("\n %4d) %2c: code %4d", j++, a, a);
  }
  j = 0;

  char k1, l1;

  printf("\n enter 1st sombol:");
  scanf_s(" %c", &k1);

  printf("\n enter 2nd sombol:");
  scanf_s(" %c", &l1);

  if (k1 > l1)  {
    printf("error, k1 > l1");
    return 0;
  }

  for (char b = k1; b <= l1; ++b, ++j) {
  printf("\n %4d) %2c: code %4d", j + 1, b, b);

  }

  printf(" \n \n \t surname \n");
  char sname[] = "Oliunuk";
  for (int r = 0; sname[r] != '\0'; ++r) {
    printf("\n %4d) %2c: code %4d", r + 1, sname[r], sname[r]);
  }



  printf("\n \n Press any key:");
  _getch();
  return 0;
}
*/

/*
int main(void)
{
  int j, f, k = 4;
  double F, Lt, s = 0.0, Tend;
  float L = 2.3F;
  int q = 1;

  printf("enter k: ");
  scanf_s("%d", &k);
  printf("enter Lambda : ");
  scanf_s("%f", &L);
  printf("enter Tend: ");
  scanf_s("%lf", &Tend);

  printf("\n Erlang function of order %d, Lambda =%1.2f: \n \n", k, L);
  for (double t = 0.0; t <= Tend;)
  {
    s = 0.0; f = 1; Lt = 1.0;
    t+= 0.2;
    for (j = 1; j <= k; ++j)
    {
      f*= j;
      Lt*= (L * t);
      s+= (Lt / f) * exp(-L * t);
    }
    F = 1 - exp(-L * t) - s;
    printf("\t %d \t", q);
    q++;
    printf("\t %lg \n", F);
  }
  printf("\n \n Press any key:");
  _getch();
  return 0;
}
*/

/*
int main(void)
{

  float denom;
  float sum1 = 0.0, sum2 = 0.0;
  double j = 0;

  for  (int k = 1; sum1 <= sum2; k++) {
    denom = k * (k + 1) * (k + 2);
    sum1 = sum2;
    sum2 += 1.0 / denom;
    denom = denom / k * (k + 3);
    j++;
    printf_s("\n %f: %f ", j, sum2);
  }

  printf_s("\n \t The amount of numerical series:%lg \n", sum2);



  int num, endnum, rnum = 0;

  printf("enter a number: ");
  scanf_s("%d", &num);

  while (num != 0) {
    endnum = num % 10;
    rnum = rnum * 10 + endnum;
    num /= 10;
  }

  printf("number is : %d\n", rnum);


  printf_s("\n Press any key:");
  _getch();
  return 0;
}


/*
int main(void)
{
  long int x, r;

  printf("\n Enter an integer:");
  scanf_s("%ld", &x);

  printf("\n Reverse-digit number% ld: \n \n \t", x);

  do {
    r = x % 10;
    printf("%ld", r);
    x = x / 10;
  } while (x!= 0);

  x = 0;

  printf("\n Enter an integer:");
  scanf_s("%ld", &x);

  printf("\n Reverse-digit number% ld: \n \n \t", x);

  while (x!= 0) {
    r = x % 10;
    printf("%ld", r);
    x = x / 10;
  }

  printf("\n \n Press any key:");
  _getch();
  return 0;
}
*/

/*
int main(void) {
  int p = 0;
  char ch = 'A';
  char i, j, k, ch2, kk, chA;
  chA = ch;
  printf("\n Enter a capital letter between  A  and  S :");
    scanf_s("%c", &ch2, sizeof(char));for (chA -= 1; chA >= ch2; chA--)
  {
    printf("\n Error! Press any key:");
    _getch();
    return -1;
  }
  for (kk = 'S' + 1; kk <= ch2; kk ++)
  {
    printf("\n Error! Press any key:");
    _getch();
    return -1;
  }
  k = ch2;
  for (kk = ch; kk <= k; kk++)
  {
    printf("\n ");
    for (ch2 = ch; ch2 <= k - p; ch2++)
      printf(" ");
    for (j = ch; j <= kk; j++)
      printf("%c", j);
    for (i = kk; i > ch; i--)
      printf("%c", i - 1);
    p++;
  }

  ch2 = 0;

  printf("\n Enter a capital letter between  A  and  S :");
  _fgetchar();
  scanf_s("%c", &ch2, sizeof(char));

  for (chA -= 1; chA >= ch2; chA--)
  {
    printf("\n Error! Press any key:");
    _getch();
    return -1;
  }
  for (kk = 'S' + 1; kk <= ch2; kk++)
  {
    printf("\n Error! Press any key:");
    _getch();
    return -1;
  }
  k = ch2;
  for (kk = ch; kk <= k; kk++)
  {
    printf("\n ");
    for (ch2 = ch; ch2 <= k - p; ch2++)
      printf(" ");
    for (j = ch; j <= kk; j++)
      printf("%c", j);
    for (i = kk; i > ch; i--)
      printf("%c", i - 1);
    p++;
  }

  k = 0;
  kk = 0;
  p = 0;

  printf("\n Enter a capital letter between  A  and  S :");
  _fgetchar();
  scanf_s("%c", &ch2, sizeof(char));

  for (chA -= 1; chA >= ch2; chA--)
  {
    printf("\n Error! Press any key:");
    _getch();
    return -1;
  }
  for (kk = 'S' + 1; kk <= ch2; kk++)
  {
    printf("\n Error! Press any key:");
    _getch();
    return -1;
  }
  k = ch2;
  for (kk = ch; kk <= k; kk++)
  {
    printf("\n ");
    for (ch2 = ch; ch2 <= k - p; ch2++)
      printf("  ");
    for (j = ch; j <= kk; j++)
      printf("%c", j);
    for (i = kk; i > ch; i--)
      printf("%c", i - 1);
    p++;
  }

  k = 0;
  kk = 0;
  p = 0;

  printf("\n Enter a capital letter between  A  and  S :");
  _fgetchar();
  scanf_s("%c", &ch2, sizeof(char));

  for (char kk = 'A'; kk <= ch2; kk++) {
    for (char space = ch2; space > kk; space--) {
      printf(" ");
    }
    for (char j = 'A'; j <= kk; j++) {
      printf("%c", j);
    }
    for (char i = kk - 1; i >= 'A'; i--) {
      printf("%c", i);
    }
    printf("\n");
  }

  for (char kk = ch2 - 1; kk >= 'A'; kk--) {
    for (char space = ch2; space > kk; space--) {
      printf(" ");
    }
    for (char j = 'A'; j <= kk; j++) {
      printf("%c", j);
    }
    for (char i = kk - 1; i >= 'A'; i--) {
      printf("%c", i);
    }
    printf("\n");
  }

  k = 0;
  kk = 0;
  p = 0;

  printf("\n Enter a capital letter between  A  and  S :");
  _fgetchar();
  scanf_s("%c", &ch2, sizeof(char));

  for (char kk = ch2 - 1; kk >= 'A'; kk--) {
    for (char space = ch2; space > kk; space--) {
      printf(" ");
    }
    for (char j = 'A'; j <= kk; j++) {
      printf("%c", j);
    }
    for (char i = kk - 1; i >= 'A'; i--) {
      printf("%c", i);
    }
    printf("\n");
  }

  k = 0;
  kk = ch2;
  p = 0;
  j = 0;
  i = 0;
  printf("\n Enter a capital letter between  A  and  S :");
  _fgetchar();
  scanf_s("%c", &ch2, sizeof(char));

  while (kk >= 'A') {
    for (char space = ch2; space > kk; space--) {
      printf(" ");
    }
    for (char j = 'A'; j <= kk; j++) {
      printf("%c", j);
    }
    for (char i = kk - 1; i >= 'A'; i--) {
      printf("%c", i);
    }
    printf("\n");
    kk--;
  }


  printf("\n \n Press any key:");
  _getch();
  return 0;
}
*/