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
    	
    
    
    cin.get();
    return 0;
}