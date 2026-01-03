#include <iostream> 

void bubbleSort(int arr[], const int&& size) {
    for(int i = size - 1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;  
            }
        }
    }
}

void selectionSort(int arr[], const int&& size) {
    for(int i = 0; i < size; i++) {
        int minIndex = i;

        for(int j = i+1; j < size; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j; 
            }
        }

        int temp = arr[i]; 
        arr[i] = arr[minIndex]; 
        arr[minIndex] = temp; 
    }
}

void insertionSort(int arr[], const int&& size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i]; 
        int j = i - 1;
        
        while(temp < arr[j] && j > -1) {
            arr[j+1] = arr[j]; 
            arr[j] = temp; 
            j--; 
        }
    }
}