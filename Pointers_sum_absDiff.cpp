//https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <stdio.h>
#include<cstdlib>
void update(int *a,int *b) {
    // Complete this function
    int sum, absDiff;
    sum=*a+*b;
    absDiff=abs(*a-*b);
    *a=sum;
    *b=absDiff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}