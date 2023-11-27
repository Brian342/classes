#include <iostream>

using namespace std;

void swap(int a, int b) {
  a = b;
  b = a;
  a = b;
}

int main() {
  int x = 10;
  int y = 20;

  cout << "Before swapping: x = " << x << ", y = " << y << endl;

  swap(x, y);

  cout << "After swapping: x = " << x << ", y = " << y << endl;

  return 0;
}