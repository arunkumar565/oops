#include <iostream>
using namespace std;


class Sorter {
private:
    int arr[100];   
    int size;       
public:
    // Constructor
    Sorter() {
        size = 0;
    }


    void inputData() {
        cout << "Enter number of elements: ";
        cin >> size;

        cout << "Enter elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void displayData() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Bubble Sort
    void bubbleSort() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        cout << "Array sorted using Bubble Sort: ";
        displayData();
    }

    // Insertion Sort
    void insertionSort() {
        for (int i = 1; i < size; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
        cout << "Array sorted using Insertion Sort: ";
        displayData();
    }

    // Selection Sort
    void selectionSort() {
        for (int i = 0; i < size - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            swap(arr[i], arr[minIndex]);
        }
        cout << "Array sorted using Selection Sort: ";
        displayData();
    }
};

int main() {
    Sorter s;

    s.inputData();

    cout << "Original Array: ";
    s.displayData();


    s.bubbleSort();

    s.insertionSort();

    s.selectionSort();

    return 0;
}
