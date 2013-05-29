#include<iostream>
#include"h_exercise_04.h"
#include<array>
#include<string>

namespace SALES
{
	std::array<std::string, QUARTERS> quarters = {"First quarter: ", "Second quarter: ", "Third quarter: ", "Fourth quarter: "};
	
	void setSales(Sales & s, const double ar[], int n)
	{
		s.min = ar[0];
		double sum = 0;
		
		for (int i = 0; i < n; i++)
		{
			s.max = ar[i] > s.max ? ar[i] : s.max;
			s.sales[0] = s.min = ar[i] < s.min ? ar[i] : s.min;
			sum += ar[i];
		}
		s.average = sum / 2;
	}

	void setSales(Sales & s)
	{
		double sum = 0;
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << "Please enter a value for " << quarters[i];
			std::cin >> s.sales[i];
		}
		
		s.min = s.sales[0];

		for (int i = 0; i < QUARTERS; i++)
		{
			s.max = s.sales[i] > s.max ? s.sales[i] : s.max;
			
			s.min = s.sales[i] < s.min ? s.sales[i] : s.min;
			sum += s.sales[i];
		}

		s.average = sum / 2;
	}

	void showSales(const Sales & s)
	{
		for (int i = 0; i < QUARTERS; i++)
		{
			std::cout << quarters[i] << s.sales[i] << std::endl;
		}
		
		std::cout << "Max Value: " << s.max << std::endl;
		std::cout << "Min Value: " << s.min << std::endl;
		std::cout << "Average Value: " << s.average << std::endl;
	}
}