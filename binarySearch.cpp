//二分查找

#include <iostream>

using namespace std;

template<class T>
int bianrySearch(T a[], int n, const T& x) { //在有序数组中查找元素x，若不存在就返回-1
	int left = 0, right = n-1;
	while(left <= right) {
		int middle = (left + right) / 2;
		if(x == a[middle]) return middle;
		if(x > a[middle]) left = middle + 1;
		else right = middle - 1;
	}
	return -1;
}

int main() {
	double a[] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "The number of array a is : " << n <<endl;

	int index = bianrySearch(a, n, 4.5);

	cout << "The index of 4.5 in array a is : " << index + 1 << endl;

	return 0;
}
