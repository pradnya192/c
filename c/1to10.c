#include <stdio.h>

int main() {

 int i, j, n;

 printf(“Enter a number (N): “);

 scanf(“%d”, &n);

 printf(“Prime numbers between 1 and %d are: “, n);

 for (i = 2; i <= n; ++i) {

 int isPrime = 1;

 for (j = 2; j <= i / 2; ++j) {

 if (i % j == 0) {

 isPrime = 0;

 break;

 }

 }

 if (isPrime)

 printf(“%d “, i);

 }

 return 0;

}