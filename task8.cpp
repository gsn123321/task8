#include <iostream>
#include <cstdlib>
#include <ctime>

int degree(int a, int b) {
    int result = 1;
    for (int i = 0; i < a; ++i) {
		result = b * degree(a - 1, b);
 
    }
    return result;
}

void zirku(int a) {
	if (a == 0) {
		return;
	}
	else {
		std::cout << '*';
		zirku(a - 1);
	}
}

int sum(int a, int b) {
	if (a == b) {
		return a;
	}
	return a + sum(a + 1, b);
}

int find(int arr[], int size, int i = 0, int min = 0, int pos = 0) {
	if (i == 0) {
		for (int j = 0; j < 10; ++j) {
			min += arr[j];
		}
	}

	if (i > size - 10) {
		return pos + 1;
	}

	int sum = 0;

	for (int j = i; j < i + 10; ++j) {
		sum += arr[j];
	}

	if (sum < min) {
		min = sum;
		pos = i;
	}

	return find(arr, size, i + 1, min, pos);
}


int main()
{
 //   int a, b;
	//std::cin >> a >> b;
 //   std::cout << degree(a, b) << '\n';

    //2

 //   int a;
	//std::cin >> a;
 //   zirku(a);

    //3

 //   int a, b;
	//std::cin >> a >> b;
	//std::cout << sum(a, b) << '\n';
	
	//4 
	srand(time(0));
	int arr[100];
	
	for (int i = 0; i < 100; ++i) {
		arr[i] = rand() % 100;
		std::cout << arr[i] << ' ';
	}

	std::cout << "\nPosition: " << find(arr, 100);

}

