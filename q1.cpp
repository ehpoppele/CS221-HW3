#include <iostream>

//Helper function that returns the greatest of three input integers, using a series of if else statements
int find_greatest(int num_a, int num_b, int num_c) //Simple variable names for three distinct integers in this short function
{
	if (nyum_a>num_b) {
		if (num_a>num_c) {
			return num_a;
		} else {
			return num_c;
		}
	} else {
		if (num_b>num_c) {
			return num_b;
		} else {
			return num_c;
		}
    }
}

//Main function, declares three variables, loads them with user input, then calls the helper function with those and prints the output
int main()
{
	int first; //Variables are given short names corresponding to their input order
	std::cin >> first;
	int second;
	std::cin >> second;
	int third;
	std::cin >> third;
	int greatest = find_greatest(first, second, third);
	std::cout << greatest;
    return 0;
}


