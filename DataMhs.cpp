#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void dMenu(){
system("cls");
cout << "\n=== Menu Aplikasi Data Mahasiswa ===\n";
cout << "1. Masukkan Data Mahasiswa\n";
cout << "2. Tampilkan Data Mahasiswa\n";
cout << "3. Update Data Mahasiswa\n";
cout << "4. Hapus Data Mahasiswa\n";
cout << "5. Exit\n";
cout << "Masukkan pilihan: ";         
}

void mPertama(string pesan){
system("cls");
cout<<"hallo saya menu "<<pesan;
getch();
}
int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    mPertama("pertama");
    break;
   case '2':
    mPertama("ke- dua");
    /* code */ 
    break;  
   case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
   case '4':
    mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }
} while (pl!='5');
  return 0;
