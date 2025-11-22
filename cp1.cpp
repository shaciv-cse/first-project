#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    int q;
    printf("Enter Size=");
    scanf("%d", &q);

    while(q--) {
        int n;
        char s[25], t[25];
        printf("Entyer String size=");
        scanf("%d", &n);
        printf("Take two string:");

        scanf("%s %s", s, t);

        sort(s, s + n);
        sort(t, t + n);

        if (strcmp(s, t) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
