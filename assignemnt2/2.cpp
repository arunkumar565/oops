#include <iostream>
#include <string>
using namespace std;

class SimpleDictionary {
private:
    string keys[100];    
    string values[100];  
    int count;           
public:
    // constructor to initialize the dictionary
    SimpleDictionary() {
        count = 0;
    }

    // Adds a new key-value pair to the dictionary
        void addPair(string key, string value) {
        if (count >= 100) {
            cout << "Dictionary is full!" << endl;
            return;
        }

        // Check if key already exists, if yes, update the value
        for (int i = 0; i < count; i++) {
            if (keys[i] == key) {
                values[i] = value;
                cout << "Updated key '" << key << "' with new value '" << value << "'." << endl;
                return;
            }
        }

        // Add new key-value pair
        keys[count] = key;
        values[count] = value;
        count++;
        cout << "Added pair (" << key << ", " << value << ") to the dictionary." << endl;
    }

    // Searches for a key and displays its value
    void search(string key) const {
        for (int i = 0; i < count; i++) {
            if (keys[i] == key) {
                cout << "Key '" << key << "' found! Value = " << values[i] << endl;
                return;
            }
        }
        cout << "Key '" << key << "' not found in the dictionary." << endl;
    }

    // Displays all key-value pairs
    void display() const {
        if (count == 0) {
            cout << "Dictionary is empty." << endl;
            return;
        }

        cout << "Dictionary Contents " << endl;
        for (int i = 0; i < count; i++) {
            cout << keys[i] << " : " << values[i] << endl;
        }
     
    }
};

int main() {
    SimpleDictionary myDict;

    myDict.addPair("name", "Arun");
    myDict.addPair("age", "21");
    myDict.addPair("course", "OOP");
    
    myDict.display();

    myDict.search("age");
    myDict.search("city");

    myDict.addPair("age", "22");  // updates existing key
    myDict.display();

    return 0;
}
