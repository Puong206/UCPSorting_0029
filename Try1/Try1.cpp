#include <iostream>
using namespace std;
int arya[29];
int n;
int main() {

}
void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {         //step 1

		temp = arya[i];                     //step 2

		j = i - 1;                         //step 3

		while (j >= 0 && arya[j] > temp)    //step 4
		{
			arya[j + 1] = arya[j];           //step 4a
			j--;                           //step 4b
		}

		arya[j + 1] = temp;                 //step 5
	}
}

void BubbleShortArray() {
	int pass = 1;

	do {
		for (int j = 0; j <= n - 2 - pass; j++) {
			if (arya[j] > arya[j + 1]) {
				int temp = arya[j];
				arya[j] = arya[j + 1];
				arya[j + 1] = temp;
			}
		}
		pass = pass + 1;

		cout << "\nPass " << pass - 1 << ": ";
		for (int k = 0; k < n; k++) {
			cout << arya[k] << " ";
		}
		cout << endl;
	} while (pass <= n - 1);
}

void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {         //step 1

		temp = arya[i];                     //step 2

		j = i - 1;                         //step 3

		while (j >= 0 && arya[j] > temp)    //step 4
		{
			arya[j + 1] = arya[j];           //step 4a
			j--;                           //step 4b
		}

		arya[j + 1] = temp;                 //step 5
	}

	if (arya[i] < arya[j +1]) {

	}
}

for (int i = 0; i < n; i++) {
	cout << data[i] << "";
}
cout << endl;

for (int j = 0; j < n - 1, j++) {
	int min_index = j;
	for (int i = j + 1; i < n; i++) {
		if (data[i] < data[min_index]) {
			min_index = i;
		}
	}
}

int temp = data[j];
data[j] = data[min_index];
data[min_index] = temp;

void insertionSort() {
	int i, temp, j;

	for (i = 1; i <= n - 1; i++) {

		temp = arya[i];

		j = i - 1;

		while (j >= 0 && arya[j] > temp)
		{
			arya[j + 1] = arya[j];
			j--;
		}

		arya[j + 1] = temp;
	}
}

void selectionsort() {
	int pass = 1;
	int min_index, i, temp, j;
	do {
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
		}while (pass <= n - 1);
	}
}