#include <stdio.h>
#include <math.h>

int sumOfAbsoluteValues(const int* array, int length) {
    int sum, arraySize;
    for (int elementIndex = 0; elementIndex < arraySize; ++elementIndex) {
        sum += abs(array[elementIndex]);
    }
    return sum;
}

int main() {
    int sizeOfTheArrayX, sizeOfTheArrayY, sizeOfTheArrayZ;
    double sumX, sumY, sumZ;
    int arrayX[999], arrayY[999], arrayZ[999];
    int elementIndex;
    
    printf("Enter the size of the array X: ");
    scanf("%d", &sizeOfTheArrayX);
    
    printf("Enter the elements of the X array: \n");
    for (elementIndex = 0; elementIndex < sizeOfTheArrayX; ++elementIndex) {
    scanf("%d", &arrayX[elementIndex]);
  }

    printf("Enter the size of the array Y: ");
    scanf("%d", &sizeOfTheArrayY);
    
    printf("Enter the elements of the Y array: \n");
    for (elementIndex = 0; elementIndex < sizeOfTheArrayY; ++elementIndex) {
    scanf("%d", &arrayY[elementIndex]);
  }

    printf("Enter the size of the array Z: ");
    scanf("%d", &sizeOfTheArrayZ);
    
    printf("Enter the elements of the Z array: \n");
    for (elementIndex = 0; elementIndex < sizeOfTheArrayZ; ++elementIndex) {
    scanf("%d", &arrayZ[elementIndex]);
  }


    printf("\nРезультаты:\n");
    printf("Сумма модулей элементов массива X: %d\n", sumX);
    printf("Сумма модулей элементов массива Y: %d\n", sumY);
    printf("Сумма модулей элементов массива Z: %d\n", sumZ);
    
    return 0;
}