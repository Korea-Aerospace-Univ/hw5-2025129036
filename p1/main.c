#include <stdio.h>

int main() {

    int n;
    bool noway = false;
    scanf("%d", &n);

    for (int a = 1; 900*a <= n; a++) {
        for (int b = 2; 750*b <= n; b += 2) { 
            for (int c = 1; 200*c <= n; c++) {
                if (900*a + 750*b + 200*c == n) {
                    if (c < a || c < b) {
                        printf("%d %d %d\n", a, b, c);
                        noway = true;
                    }
                }
            }
        }
    }
    if (!noway) {
        printf("none\n");
    }
    return 0;
}
