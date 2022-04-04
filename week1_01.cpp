#include <stdio.h>

using namespace std;

int main() {
	int w;
	scanf_s("%d", &w);
	if (w < 4) printf("NO\n");
	else if (w % 2 == 0) printf("YES\n");
	else printf("NO\n");
	return 0;

}

/*
	int w = 0;
	scanf_s("%d", &w);
	if ((w<4)||(w%2==1))
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
*/

