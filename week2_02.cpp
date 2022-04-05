#include <stdio.h>

int main() {
	long long n, i, j, total, total3, cnt, cnt1;
	long long a[500005];
	long long p[500005];
	
	scanf("%lld", &n);

	p[0] = 0;
	for (i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
		p[i] = p[i - 1] + a[i];
	}	
	total = p[n];
	if (total % 3 != 0) { cnt = 0; }
	else {
		total3 = total / 3;
		cnt = 0; cnt1 = 0;
		for (i = 1; i < n; i++) {
			if (p[i] == total3*2)
				cnt += cnt1;
			if (p[i] == total3)
				cnt1++;
		}
	}

	
	printf("%lld\n", cnt);
	return 0;
}