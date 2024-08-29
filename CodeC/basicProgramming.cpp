#include<stdio.h>
#include<math.h>
int main(){
 int a = 100, b = 200;
 printf("%.2lf\n", fmin(a, b)); //100.00
 printf("%d\n", (int)fmin(a, b)); //100
 int res = fmin(a, b);
 printf("%d\n", res); //100

 printf("%.2lf\n", fmax(a, b)); //200.00
 printf("%d\n", (int)fmax(a, b)); //200
 int res = fmax(a, b);
 printf("%d\n", res); //200
 return 0;
}
