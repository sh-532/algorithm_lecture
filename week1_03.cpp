#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	char A[200];
	int i;
	scanf("%s", A);
	for (i = 0; A[i] != '\0'; i++) {
		if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || A[i] == 'y' ||
			A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' || A[i] == 'Y')
			;
		else {
			printf(".");
			if (A[i] >= 'A' && A[i] <= 'Z')
				A[i] += 'a' - 'A';
			printf("%c", A[i]);
		}
	}
	printf("\n");

	return 0;
}