#include <iostream>
using namespace std;

int *doubleCapacity(const int *list, int size){
	int *capacity = new int[2 * (size)];
	for (int i = 0; i < size; i++){
		capacity[i] = list[i];
	}

	return capacity;
}

int main(){
	int a[4]{1, 2, 3, 4};
	int *x = doubleCapacity(a, 4);
	for (int i = 0; i < 4; i++){
		cout << x[i] << endl;
	}

	for (int i = 4; i < 8; i++){
		cin >> x[i];
	}
	for (int i = 0; i < 8; i++){
		cout << x[i] << endl;
	}
	
	delete[] x;
}