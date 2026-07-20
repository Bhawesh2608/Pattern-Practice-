#include <stdio.h>

int main() {

	int n;
	printf("Enter n ");
	scanf("%d",&n);
	for (int i = 0; i <= n; i++) {
		for (int j=0; j <= n; j++) {
			if(j <= n-i) {
				printf("  ");
			}
		}
		int tmp = 1;
		for (int j = 0; j <=n; j++) {
			if(j<=i) {
				printf("%2d  ", tmp);
				tmp = tmp * (i - j) / (j + 1);
			}
			else{
			    printf("  ");
			}
		}
		printf("\n");
	}

	return 0;
}
