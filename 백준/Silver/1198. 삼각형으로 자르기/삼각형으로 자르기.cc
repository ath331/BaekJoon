#include <stdio.h>
#include <algorithm>
using namespace std;
 
int x[35], y[35], n, i, j, k, ans;
 
int main() {
    scanf("%d", &n);
    for (; i < n; i++) scanf("%d%d", &x[i], &y[i]);
    for (i = 0; i < n; i++) for (j = i + 1; j < n; j++) for (k = j + 1; k < n; k++) 
        ans = max(ans, abs(x[i] * y[j] + x[j] * y[k] + x[k] * y[i] - x[j] * y[i] - x[k] * y[j] - x[i] * y[k]));
    if(ans % 2) printf("%d.5", ans / 2);
    else printf("%d", ans / 2);
    return 0;
}