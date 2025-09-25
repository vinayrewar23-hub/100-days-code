#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Convert to hours, minutes, and seconds
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // remaining minutes
    seconds = totalSeconds % 60;          // remaining seconds

    // Display result
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);
