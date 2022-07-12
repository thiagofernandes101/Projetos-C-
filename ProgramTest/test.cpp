#include <iostream>
using namespace std;

int main() {
    int number1 = 5;
    int number2 = 10;
    int temp;

    printf("Numbers before swapping.\n");
    printf("Number 1: %d \n", number1);
    printf("Number 2: %d \n", number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("\n");

    printf("Numbers after swapping.\n");
    printf("Number 1: %d \n", number1);
    printf("Number 2: %d \n", number2);

    return 0;
}