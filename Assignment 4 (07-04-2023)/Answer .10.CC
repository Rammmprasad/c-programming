#include<stdio.h>

float calculate_interest(float p, float r, float t, char is_senior_citizen) {
    float interest = 0;
    if(is_senior_citizen == 'y' || is_senior_citizen == 'Y') {
        r = 0.12; //12% rate of interest for senior citizens
    } else {
        r = 0.10; //10% rate of interest for other customers
    }
    interest = (p * r * t);
    return interest;
}

int main() {
    float principal, rate, time, interest;
    char is_senior_citizen;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the no of years: ");
    scanf("%f", &time);

    printf("Is customer senior citizen (y/n): ");
    scanf(" %c", &is_senior_citizen);

    interest = calculate_interest(principal, rate, time, is_senior_citizen);

    printf("Interest: %0.2f\n", interest);

    return 0;
}

