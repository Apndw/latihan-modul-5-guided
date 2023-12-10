#include <iostream>

using std::cout;
using std::endl;

int main() {
  int baris, kolom, matriks[2][4] = {{ 1,2,3,4 }, { 5,6,7,8 }};

  for (baris = 0; baris < 2; baris++) {
    for (kolom = 0; kolom < 4; kolom++) {
      cout << "Isi elemen baris ke-" << baris + 1 << " kolom ke-" << kolom + 1 << " = " << matriks[baris][kolom] << endl;
    }
  }

  return 0;
}