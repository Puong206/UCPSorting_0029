//1.	Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
// => Bubble Sort bekerja dengan membandingkan pass = n - 1, dengan n adalah jumlah array, mengurutkan array menggunakan temporary;
// misal dengan sebuah data berjumlah 3 array, m

//2.	Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen.?
// = Shell Sort bekerja dengan membagi jumlah array menjadi beberapa bagian
// misal dengan sebuah data berjumlah 9 array, kemudian dibagi menjadi 3 bagian dengan sistem kelipatan, 
// masing - masing dari 3 bagian tersebut discan, kemudian diurutkan dari yang terkecil dengan sistem swapping,
// kemudian ketiga bagian yang sudah urut tersebut dikembalikan menjadi satu bagian panjang,
// setelah dikembalikan, array kemudian discan kembali untuk mengecek apakah sudah urut / belum,
// jika belum, array tersebut akan dipecah menjadi 2 bagian kecil dengan sistem kelipatan,
// setelah dibagi, masing - masing array tersebut diurutkan,
// setelah itu, masing - masing array dikembalikan menjadi satu array dengan kondisi yang urut.

// 3.	Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa!
// = algoritma yang dipilih adalah insertion sort, karena algoritma tersebut merupakan algoritma yang paling efisien, dan hanya menukar beberapa
// data yang tidak urut

// 4.
//1.Repeat steps 2 and 3 varying j from 0 to n – 2
//2.Find the minimum value in arr[j] to arr[n – 1]:
	//a.Set min_index = j
	//b.Repeat step c varying i from j + 1 to n – 1
	//c.If arr[i] < arr[min_index] :
		//i.min_index = i
//3.Swap arr[j] with arr[min_index]
//Ketentuan :
	//a.Nama variable array diganti menjadi nickname
	//b.Panjangnya variable array adalah sebanyak 2 nim belakang
	//c.Program bisa input data dan menampilkan data setelah proses sortir.

#include <iostream>
using namespace std;
int arya[29];
int n;

void input() {

	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 29)
			break;
		else {
			cout << "\rArray dapat mempunyai maksimal 29 elemen.\n";              //output ke layar
		}
	}
	cout << endl;                                    //output baris kosong
	cout << "===============" << endl;               //output ke layar
	cout << "Masukkan Elemen Array" << endl;         //output ke layar
	cout << "===============" << endl;               //output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arya[i];

	}
}

void selectionsort() {
	int pass = 1;
	int min_index, i, temp, j;
	for (i = 0; i < n; i++) {
			cout << arya[i] << "";
	}
	cout << endl;
	pass = pass + 1;

	for (j = 0; j < n - 1, j++;) {
		min_index = j;
		for (i = j + 1; i < n; i++) {
			if (arya[i] < arya[min_index]) {
				min_index = i;
				}
			}
		temp = arya[j];
		arya[j] = arya[min_index];
		arya[min_index] = temp;
		}
	}

void display() {

	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array Yang Telah Tersusun" << endl;
	cout << "==================================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << arya[j];
		if (j < n < 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	selectionsort();
	display();
	system("pause");

	return 0;
}