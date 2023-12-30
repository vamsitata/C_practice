#include <stdio.h>
int main() {
    int m, d;
    printf("Enter the month and day of birth (MM DD): ");
    scanf("%d %d", &m, &d);
if ((m == 12 && d >= 22) || (m == 1 && d <= 19)) {
        printf("Zodiac Sign: Capricorn\n");
    } else if ((m == 1 && d >= 20) || (m == 2 && d <= 17)) {
        printf("Zodiac Sign: Aquarius\n");
    } else if ((m == 2 && d >= 18) || (m == 3 && d <= 19)) {
        printf("Zodiac Sign: Pisces\n");
    } else if ((m == 3 && d >= 20) || (m == 4 && d <= 19)) {
        printf("Zodiac Sign: Aries\n");
    } else if ((m == 4 && d >= 20) || (m == 5 && d <= 20)) {
        printf("Zodiac Sign: Taurus\n");
    } else if ((m == 5 && d >= 21) || (m == 6 && d <= 20)) {
        printf("Zodiac Sign: Gemini\n");
    } else if ((m == 6 && d >= 21) || (m == 7 && d <= 22)) {
        printf("Zodiac Sign: Cancer\n");
    } else if ((m == 7 && d >= 23) || (m == 8 && d <= 22)) {
        printf("Zodiac Sign: Leo\n");
    } else if ((m == 8 && d >= 23) || (m == 9 && d <= 22)) {
        printf("Zodiac Sign: Virgo\n");
    } else if ((m == 9 && d >= 23) || (m == 10 && d <= 22)) {
        printf("Zodiac Sign: Libra\n");
    } else if ((m == 10 && d >= 23) || (m == 11 && d <= 21)) {
        printf("Zodiac Sign: Scorpio\n");
    } else if ((m == 11 && d >= 22) || (m == 12 && d <= 21)) {
        printf("Zodiac Sign: Sagittarius\n");
    } else {
        printf("Invalid date!\n");
    }
}

