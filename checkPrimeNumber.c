#include <stdio.h>
int checkPrimeNumber(int n) {
    if(n <= 1) {
        return 1; // Not prime
    }
    else if(n == 2) {
        return 0; // Prime
    }
    else if(n % 2 == 0) {
        return 1; // Not prime
    }
    for(int i = 3; i * i <= n; i += 2) {
        if(n % i == 0) {
            return 1; // Not prime
        }
    }
    return 0;
}

int main() {

  int n, flag;

  printf("Nhap so nguyen duong : ");
  scanf("%d",&n);

  flag = checkPrimeNumber(n);

  if(flag == 1)
    printf("%d khong la so nguyen to",n);
  else
    printf("%d la so nguyen to",n);

  return 0;
}

// int is returned from the function

