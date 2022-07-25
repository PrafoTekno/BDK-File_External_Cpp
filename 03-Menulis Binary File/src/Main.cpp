
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {

    cout << "\nMenulis File Binary\n" << endl;

    fstream myFile;

    int angka = 1567;

    myFile.open ("file.bin", ios::out | ios::binary);
    myFile.write (reinterpret_cast<char*>(&angka), sizeof (angka));
    myFile.close ();

    return 0;
}