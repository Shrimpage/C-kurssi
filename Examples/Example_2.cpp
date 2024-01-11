#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string line;
    ifstream myFile;

    myFile.open("M:\\CPP\\projects\\Examples\\mytextfile.txt");

    if(myFile.is_open()) {
        while(getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }

    return 0;
}