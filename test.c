#include<stdio.h>
#include<math.h>

int main(){
    int a = 100;
    double b = sqrt(a);
    int c = pow(a, 2);
    printf("The square root of %d is %.2f\n", a, b);
    printf("The power of %d to 2 is %d\n", a, c);
    return 0;
}
