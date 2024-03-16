#include <stdio.h>

#define SIZE 10

int binary_search(int arr[], int size, int find_number);

int main(void) {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int findNumber = 3;

    int result = binary_search(arr, SIZE, findNumber);
    if (result != -1) {
        printf("Number - %d was found at index: %d\n", findNumber, result);
    } else {
        printf("Number - %d was not found in the array.\n", findNumber);
    }
    return 0;
}

int binary_search(int arr[], int size, int find_number) {
    int lowIndex = 0;
    int highIndex = size - 1;

    while (lowIndex <= highIndex) {
        int middleIndex = (lowIndex + highIndex) / 2;
        int number = arr[middleIndex];

        if (find_number == number) {
            return middleIndex;
        } else if (find_number > number) {
            lowIndex = middleIndex + 1;
        } else {
            highIndex = middleIndex - 1;
        }
    }
    return -1;
}