#include <stdio.h>
#include <math.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    
    int a = (k * l) / (nl * n); 
    int cc = (c * d) / n;  
    int b = p / (np * n);  

    if (a > cc && b > cc) {
        printf("%d\n",cc);
    } else if (a > b && cc > b) {
        printf("%d\n", b);
    }
    else if(b==cc)
    {
        printf("%d\n",b);
    }

    else {
        printf("%d\n", a);
    }
    return 0;
}
