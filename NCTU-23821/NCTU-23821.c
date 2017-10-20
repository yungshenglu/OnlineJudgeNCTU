#include <stdio.h>
#include <stdlib.h>

// Calculate the distance between two points.
int distance(int x, int y) {
    int i, d = 0;
    for (i = 1; i <= (x + y); ++i) {
        d += i;
    }
    d += (x + 1);
    return d;
}

int main(void) {
    int N, x1, y1, x2, y2, d, i;

    scanf("%d", &N);
    for (i = 0; i < N; ++i) {

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        d = abs(distance(x1, y1) - distance(x2, y2));

        // Result
        printf("Case %d: %d\n", (i + 1), d);
    }

    return 0;
}