#include <iostream>
 
using namespace std;
 
int main()
{

int var2,var1;

 cout<<"Masukan Perbandingan Angka"<< endl;
 cout<<"Masukan Angka Pertama = ";
cin>>var1;

cout<<"Masukan Angka Kedua = ";
 cin>>var2;
 
  if (var1 < var2) {
    cout << "angka pertama lebih kecil daripada angka kedua" << endl;
  }
  else if (var1 > var2) {
    cout << "angka pertama lebih besar daripada angka kedua" << endl;
  }
  else {
    cout << "angka pertama sama dengan angka kedua"<< endl;
  }
 
  return 0;
}
