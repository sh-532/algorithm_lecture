#include <stdio.h>
#define max(a,b)  (((a) > (b)) ? (a) : (b))

using namespace std;

int A[5005];
int P[5005];

int main() {
	int n, k, i, j;
	double ans;
	
	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++)
		scanf("%d", &A[i]);
	P[0] = 0;
	for (i = 1; i <= n; i++)
		P[i] = P[i - 1] + A[i];
	ans = 0.0;
	for (j = k; j <= n; j++) {
		for (i = 1; i <= n - j + 1; i++) {
			ans = max(ans, ((double)P[i + j - 1] - P[i - 1]) / (double)j);
		}
	}
	printf("%lf\n", ans);
	return 0;
}