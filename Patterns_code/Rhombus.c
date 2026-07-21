#include <stdio.h>

int main() {
  int n;
  printf("enter n:-");
  scanf("%d", &n);

  for (int i = 1; i <= n + 1; i++) {
    for (int j = 2; j <= n + 1; j++) {
      if (j <= i)
        printf("  ");
    }
    for (int j = 1; j <= n + 1; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
