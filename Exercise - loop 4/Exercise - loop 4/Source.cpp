#include <iostream>

int main()
{
	//Problem 1 
	int avg = 0, num, tot = 0, i = 0, v = 0, tot2 = 0;
	while (avg < 5)
	{
		std::cout << "Type in your number: ";
		std::cin >> num;
		// adds the numbers placed by the user 
		tot += num;
		avg++;
	}
	//averages out the five numbers 
	tot = tot / avg;
	std::cout << "Your avrerage is: " << tot << std::endl;
	system("pause");
	//Problem 2
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				std::cout << "FuzzBuzz\n";
				i++;
			}
			else
			{
				std::cout << "Fizz\n";
				i++;
			}
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				std::cout << "FuzzBuzz\n";
				i++;
			}
			else
				std::cout << "Buzz\n";
			i++;
		}
		else
		{
			std::cout << i << "\n";
			i++;
		}
	}

	system("pause");
	//Problem 3 
	while (v < 1000)
	{
		tot2 = tot2 + v;
		v++;
	}
	std::cout << tot2;
	system("pause");
	return 0;
}