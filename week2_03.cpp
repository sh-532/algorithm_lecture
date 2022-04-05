#include <stdio.h>
#define min(a, b)  (((a) < (b)) ? (a) : (b))

long long a[100005];
long long p[100005];
long long m[100005];

int main() {
	long long n, i, j, t, total, mn, ans;
	
	scanf("%lld", &t);

	while (t > 0) {
		scanf("%lld", &n);
		for (i = 1; i <= n; i++)
			scanf("%lld", &a[i]);
		p[0] = 0;
		for (i = 1; i <= n; i++)
			p[i] = p[i - 1] + a[i];
		total = p[n];
		ans = 1;
		mn = 0;
		for (i = 1; i < n; i++) {
			m[i] = p[i] - mn;
			mn = min(mn, p[i]);
			if (m[i] >= total) ans = 0;
		}

		for (i = 1; i <= n; i++)
			p[i] -= a[1];

		mn = 0;
		for (i = 2; i <= n; i++) {
			m[i] = p[i] - mn;
			mn = min(mn, p[i]);
			if (m[i] >= total) ans = 0;
		}

		if (ans) printf("YES\n");
		else printf("NO\n");

		t--;
	}

	return 0;
}