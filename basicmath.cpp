#include <iostream>

using namespace std;


int main()
{
	int a;
    cout << "Masukkan Nilai a: ";
    cin >> a;
    cout << " " << endl;
   // cout << a << endl;	
    cout << " " << endl;
    
	float b;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << " " << endl;
   // cout << b << endl;
    cout << " " << endl;
    
    cout << "Operasi Matematika" << endl;
    cout << "=================" << endl;
    cout << "a x b = ";
    cout << a * b << endl;
    
    cout << "a + b = ";
    cout << a + b << endl;
    
    cout << "a - b = ";
    cout << a - b << endl;
    
    cout <<  "a : b = ";   
    cout << a / b << endl;
    
    /*cout << "a mod b = ";
    cout << a % b << endl;*/;
    cout << "=================" << endl;
    
    cout << " " << endl;
    
    int c = 5;
    
    cout << "a + b /2 * 5 = ";
    cout <<  a + b / 2 * c  << endl;
    cout << " " << endl;
    cout << " " << endl;
 
    /*   char c;
    cout << "Masukkan huruf yang anda inginkan: " << endl;
    cin >> c;
    cout << "huruf yang anda masukkan adalah: ";
    cout << c; */
    
    // Menghitung luas Lingkaran 
    
    cout << "Menghitung Luas Lingkaran" << endl;
    
    const float phi = 3.14;
    float r, l;
    
    cout << "Masukkan Nilai r = ";
    cin >> r;
    l = phi * r * r;
    cout << "Luas Lingkaran tersebut adalah =";
    cout << l << endl;
    cout << " " << endl;
    
   
    // Pengkondisian 
      
    cout << "Menentukan Bilangan Ganjil dan Genap" << endl;
    
    int nilai;
    
    cout << "Masukkan Bilangan = ";
    cin >> nilai;
    
    if (nilai%2 == 0)
    {
    	cout << nilai << "  Adalah Bilangan Genap" << endl;
    } 
    else {
    	cout << nilai << "  Adalah Bilangan Ganjil" << endl;
    }
    	
  // Menghitung luas lingkaran dengan membagi rumus menjadi 2 bagian
  // bagian 1 : jari jari habis dibagi 7
  // bagian 2 : jari jari tidak habis dibagi 7
    cout << "Luas lingkaran \n";
    	int row;
    	const float pie = 3.14;
    	
    cout << "Masukkan nilai r = ";
    cin >> row;
    cout << "Luas Lingkaran tersebut adalah = ";
      if (row%7 == 0) 
      {
      	
      	int luas;
      	luas = (row * row)/ 7 * 22;
      	//cout << luas;
      }
      else {
      	
      	float luas;
      	luas = pie * row * row;
      	//cout << luas;
      	
      }
    
    cin.get();
    return 0;
}