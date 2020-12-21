#include <iostream>
using namespace std;

int main() {

  int sayi;

  cout << "Bir sayi giriniz : ";
  cin >> sayi;

  if (sayi%2==0) {
    cout << sayi << " 2'ye tam bolunur" << '\n';
  }
  if (sayi%3==0) {
    cout << sayi << " 3'e tam bolunur" << '\n';
  }
  if (sayi%4==0) {
    cout << sayi << " 4'e tam bolunur" << '\n';
  }
  if (sayi%5==0) {
    cout << sayi << " 5'e tam bolunur" << '\n';
  }
  if (sayi%6==0) {
    cout << sayi << " 6'ya tam bolunur" << '\n';
  }
  if (sayi%7==0) {
    cout << sayi << " 7'ye tam bolunur" << '\n';
  }
  if (sayi%8==0) {
    cout << sayi << " 8'e tam bolunur" << '\n';
  }
  if (sayi%9==0) {
    cout << sayi << " 9'a tam bolunur" << '\n';
  }

  return 0;
}
