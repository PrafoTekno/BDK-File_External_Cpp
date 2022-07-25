
#include <iostream>
#include <fstream> // Ada ofstream, ifstream, dan fstream

using namespace std;

int main () {

    cout << "Menulis File External\n" << endl;

    ofstream file_ku;

    /*
        ios::out = deafult, akan melakukan overwrite
        ios::app = append, akan menambahkan
        ios::trunc = deafult, akan melakukan overwrite
    */

    file_ku.open ("file1.txt", ios::out);
    file_ku << "Ini dia file ke 1" << endl;
    file_ku << "Halo apa kabar";
    file_ku.close ();

    file_ku.open ("file2.txt", ios::app);
    file_ku << "Ini dia file ke 2" << endl;
    file_ku << "Halo apa kabar";
    file_ku.close ();

    file_ku.open ("file3.txt", ios::trunc);
    file_ku << "Ini dia file ke 3" << endl;
    file_ku << "Halo apa kabar";
    file_ku.close ();

    return 0;

}