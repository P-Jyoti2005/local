#include<stdio.h>
#include<stdlib.h>
int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c) {
        printf("The largest number is: %d\n", a);
    } else if (b > a && b > c) {
        printf("The largest number is: %d\n", b);
    } else {
        printf("The largest number is: %d\n", c);
    }
      printf("This is f1 branch");
    return 0;
}