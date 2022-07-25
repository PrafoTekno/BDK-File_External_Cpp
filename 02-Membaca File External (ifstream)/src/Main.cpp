
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

    cout << "Membaca File External (ifstream)\n" << endl;

    ifstream myFile;
    string hasil;

    myFile.open ("file1.txt");

    while (!myFile.eof ()) {
        
        getline (myFile, hasil);
        cout << hasil << endl;

        if (hasil == ":\n") {
            cout << "No " << hasil << endl; 
        }
    
    }

    cout << endl;

    return 0;

}