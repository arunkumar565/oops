#include <iostream>
#include <fstream>
using namespace std;

class FileHandler {
private:
    fstream file;

public:
    FileHandler(const string& filename) {
        file.open(filename, ios::out);
        if (file.is_open()) {
            cout << "File opened successfully." << endl;
            file << "Hello, this is a test file.\n";
        }
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "File closed automatically by destructor." << endl;
        }
    }
};

int main() {
    FileHandler fh("sample.txt");
    cout << "Doing some work inside main()" << endl;
    return 0;
}
