#include <iostream>

using std::cout;
using std::endl;

int main() {
  int i, TabInt[10];

  for (i = 0; i < 10; i++) {
    TabInt[i] = i * 10;
  }

  for (i = 0; i < 10; i++) {
    cout << "Isi elemen ke-" << i + 1 << " = " << TabInt[i] << endl;
  }

  return 0;
}