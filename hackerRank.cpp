#include <iostream>
#include <cstdio>

int max_of_four(int, int, int, int);

int max_of_four(int a, int b, int c, int d) {
  int num_max;
  if ( a > b && a > c && a > d ) {
    num_max = a;
  }
  if ( b > a && b > c && b > d ) {
    num_max = b;
  }
  if ( c > a && c > b && c > d ) {
    num_max = c;
  }
  if ( d > a && d > b && d > c ) {
    num_max = d;
  }

  return num_max;
}

int main () {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);
  return 0;
}
