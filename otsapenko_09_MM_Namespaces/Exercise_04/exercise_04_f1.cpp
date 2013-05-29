#include<iostream>
#include"h_exercise_04.h";

int main()
{
	SALES::Sales st1;
	memset(&st1, 0, sizeof(st1));
	
	SALES::Sales st2;
	memset(&st2, 0, sizeof(st2));

	const int arr_size = 4;
	double arr[arr_size] = {3.0, 2.0, 10.0, 4.0};

	SALES::setSales(st1, arr, arr_size);
	SALES::setSales(st2);
	
	std::cout << std::endl << "First Structure" << std::endl << std::endl ;
	SALES::showSales(st1);
	std::cout << "-------------------------------------" << std::endl;
	std::cout << std::endl << "Second Structure" << std::endl << std::endl;
	SALES::showSales(st2);
	
	system("PAUSE");
	
	return 0;
}