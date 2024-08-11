#include <stdio.h>

//Test code
// Function prototypes (assuming these functions exist to get the respective values)
int getCount();
float getBrightness();
float getRight();
float getLeft();
float getTop();
float getBottom();

int main() {
    int Level = 1;  // Initialize Level to a non-zero value
    int Count = getCount();
    float Brightness = getBrightness();
    float Right = getRight();
    float Left = getLeft();
    float Top = getTop();
    float Bottom = getBottom();

    // Check the conditions
    if (Count >= 0 && Count < 15 &&  Brightness >= 0 &&
        Brightness < 0.4 &&
        Right >= -39.99 && Right <= 40 &&
        Left >= -39.99 && Left <= 40 &&
        Top >= -9.99 && Top <= 10 &&
        Bottom >= -9.99 && Bottom <= 10) {
        Level = 0;
    }
    else
    Level =1;

    // Output the result for debugging purposes
    printf("Level: %d\n", Level);

    return 0;
}

// Dummy implementations of the functions to get the respective values
int getCount() {
    return 10;  // Example value
}

float getBrightness() {
    return 0.4;  // Example value
}

float getRight() {
    return 0;  // Example value
}

float getLeft() {
    return 0;  // Example value
}

float getTop() {
    return 0;  // Example value
}

float getBottom() {
    return 0;  // Example value
}
