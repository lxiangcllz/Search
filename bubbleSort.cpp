//冒泡排序
#include <iostream>

using namespace std;

// template<class T>
// void bubble(T a[], int n) {
// 	for(int i = 0; i < n-1; i++) {
// 		if(a[i] > a[i+1]) swapNumber(a[i], a[i+1]);
// 	}
// }
// template<class T>
// void bubbleSort(T a[], int n) {
// 	for(int i = n; i > 1; i--) {
// 		bubble(a, i);
// 	}
// }

//优化一下：检查数组秩序，如果已有序就及时终止迭代
template<class T>
bool bubble(T a[], int n) { 
	bool swapped = false;
	for(int i = 0; i < n-1; i++) {
		if(a[i] > a[i+1]) {
			swapNumber(a[i], a[i+1]);
			swapped = true;
		}
	}
	return swapped;
}
template<class T>
void bubbleSort(T a[], int n) {
	for(int i = n; i > 1 && bubble(a, i); i--);
}


int main() {
	double a[] = {1.2, 2.3, 3.4, 3.2, 2.11, 0.99, 1.33};
	int number = sizeof(a) / sizeof(a[0]);
	cout << "Number is :" << number << endl;

	bubbleSort(a, number);

	cout << "After the rearrangement, the array a is : ";
	for(int i = 0; i < number; i++) {
		cout << a[i] << '\t';
	}

	return 0;
}
