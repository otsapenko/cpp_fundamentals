#include<iostream>

using namespace std;
const int arr_size = 5;

template<class T>
T max5(T*);

int main()
{
	int int_arr[arr_size] = {10, 50, 30, 150, 5};
	double doub_arr[arr_size] = {1.2, 51.3, 34.0, 5.0, 10.0};

	cout << "Max from int array: " << max5(int_arr) << endl;
	
	cout << "Max from double array: " << max5(doub_arr) << endl;
	
	return 0;
}

template<class T>
T max5(T * arr)
{
	T max = 0;
	
	for (int i = 0; i < arr_size; i++)
		max = arr[i] > max ? arr[i] : max;
	
	return max;
}