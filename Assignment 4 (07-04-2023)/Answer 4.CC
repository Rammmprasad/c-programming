#include <stdio.h>
#include <math.h>

void generatePythagoreanTriplets(int limit) {
    int a, b, c, m, n;
    
    for(m=2; m<=sqrt(limit); m++) {
        for(n=1; n<m; n++) {
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m + n*n;
            
            if(c > limit) {
                break;
            }
            
            printf("%d, %d, %d\n", a, b, c);
        }
    }
}

int main() {
    int limit;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    printf("Pythagorean Triplets with values smaller than %d are:\n", limit);
    generatePythagoreanTriplets(limit);
    
    return 0;
}

