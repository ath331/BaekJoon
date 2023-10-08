#include<cstdio>
#define max(x,y) x>y?x:y;
int t;
int main() {
    for (scanf("%d", &t); t--;) {
        int n, m, x, p = 0, q = 0;
        scanf("%d%d", &n, &m);
        while (n--) scanf("%d", &x), p = max(x, p);
        while (m--) scanf("%d", &x), q = max(x, q);
        puts(p < q ? "B" : "S");
    }
    return 0;
}