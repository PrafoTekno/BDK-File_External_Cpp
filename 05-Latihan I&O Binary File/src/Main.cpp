
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Mahasiswa{
    
    int NIM;
    string nama;
    string jurusan;

};

Mahasiswa ambilData(int posisi, fstream &myFile){
    
    Mahasiswa bufferData;

    myFile.seekp((posisi-1)*sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));

    return bufferData;

}

void MenulisDataByPos (int pos, Mahasiswa &data, fstream &file) {

    file.seekg ((pos-1) * sizeof (Mahasiswa));
    file.write (reinterpret_cast<char*>(&data), sizeof (Mahasiswa));

}

int main () {

    cout << "\nLatihan I/O Binary File\n" << endl;

    fstream myFile;

    myFile.open ("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa orang1, orang2, orang3, tampil;

    orang1.NIM = 2465;
    orang1.nama = "Agus";
    orang1.jurusan = "Tata Boga";

    orang2.NIM = 2734;
    orang2.nama = "Ucup";
    orang2.jurusan = "Seni";

    orang3.NIM = 2567;
    orang3.nama = "Otong";
    orang3.jurusan = "Komputer";

    myFile.write (reinterpret_cast<char*>(&orang1), sizeof (Mahasiswa));
    myFile.write (reinterpret_cast<char*>(&orang2), sizeof (Mahasiswa));
    myFile.write (reinterpret_cast<char*>(&orang3), sizeof (Mahasiswa));

    orang3.nama = "Udin";
    MenulisDataByPos (3, orang3, myFile);

    tampil = ambilData (3, myFile);

    cout << tampil.NIM << endl;
    cout << tampil.nama << endl;
    cout << tampil.jurusan << endl;

    myFile.close ();

    return 0;

}
