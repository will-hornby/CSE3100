#include <stdio.h>

int main(void) {
    double total = 0.0;
    double count = 0;
    double result;
    while (scanf("%lf", &result) == 1) {
        total += result;
        count += 1.0;
        double avg = total / count; 
        printf("Total=%lf Average=%lf\n", total, avg);
    }
    
}