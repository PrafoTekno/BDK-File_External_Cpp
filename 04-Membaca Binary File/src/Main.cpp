
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () {

    cout << "\nMembaca File Binary\n" << endl;

    fstream myFile;
    int hasil;

    myFile.open ("data.bin", ios::in | ios::binary);
    myFile.read (reinterpret_cast<char*>(&hasil), sizeof (hasil));
    myFile.close ();

    cout << "Besar int = " << sizeof (int) << " byte" << endl;
    cout << "Nilai dari file 'data.bin' = " << hasil << endl;

    cout << endl;

    return 0;

}
    
    /*
    fstream myFile;

    int tulis_bin = 5687;

    myFile.open ("data.bin", ios::out | ios::binary);
    myFile.write (reinterpret_cast<char*>(&tulis_bin), sizeof(tulis_bin));
    myFile.close ();
    */