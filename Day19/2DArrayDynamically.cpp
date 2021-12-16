// Not taking input from User
#include <iostream>
using namespace std;

int main()
{
	// 2D array dimensions
	int m = 3, n = 4, c = 0;

	// Declaring heap memory of size m*n
	int* arr = new int[m * n];

	// Insert elements in 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Assign values
			*(arr + i * n + j) = ++c;
		}
	}

	// Output of 2D array
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {

			// Print values
			cout << *(arr + i * n + j)
				<< " ";
		}
		cout << endl;
	}

	//Delete the array from heap memory
	delete[] arr;

	return 0;
}
