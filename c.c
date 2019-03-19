#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float real_pi = 3.141592653589793238462643383279502884;

int main() {
    float pi = 4;
    int counter = 0;
    while(1) {
        float denominator = 3 + 2*counter;
        if(counter % 2 == 0) {
            pi -= (4/denominator);
        }
        else {
            pi += (4/denominator);
        }
        counter++;
        float diff = fabs(real_pi - pi);
        printf("%.20f\r", diff);
    }
    return 0;
}