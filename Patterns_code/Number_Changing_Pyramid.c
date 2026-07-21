#include <stdio.h>

int main() {
  int n;
  printf("enter n:-");
  scanf("%d", &n);
  int tmp = 1;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j <= i) {
        printf("%2d ", tmp);
        tmp++;
      }
    }
    printf("\n");
  }

  return 0;
}
