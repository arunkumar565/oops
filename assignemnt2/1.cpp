#include <iostream>
using namespace std;

//  class  defined  to mange a list 
class SimpleList {
private:
    int data[100]; 
    int length;     

public:
   // Constructor to initialize the list
    SimpleList() {
        length = 0;
    }

   // append an element to the list
    void add(int value) {
        if (length < 100) {
            data[length++] = value;
            cout << value << " added to the list"<< endl;
        } else {
            cout << "List is full! Cannot add more elements"<<endl;
        }
    }

   //  remove function to remove  a lement from list 
    void remove(int value) {
        int index = -1;
        for (int i = 0; i < length; i++) {
            if (data[i] == value) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << value << " not found in the list"<< endl;
            return;
        }

        // Shift remaining elements to the left
        for (int i = index; i < length - 1; i++) {
            data[i] = data[i + 1];
        }
        length--;
        cout << value << " removed from the list"<< endl;
    }

    // Display the list
    void display() const {
        if (length == 0) {
            cout << "List is empty." << endl;
            return;
        }

        cout << "List elements: ";
        for (int i = 0; i < length; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Get current size of the list
    int size() const {
        return length;
    }
};

int main() {
    SimpleList myList;

    myList.add(40);
    myList.add(20);
    myList.add(600);
    myList.display();
    cout << "List size: " << myList.size() << endl;
    myList.remove(20);
    myList.display();

    myList.remove(50); 

    return 0;
}
