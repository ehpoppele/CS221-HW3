#include <iostream>

//Helper function is_multiple checks to see if the first input is a multiple of the second
bool is_multiple(int test, int base) //Test variable is checked against base to see if it is a multiple of base
{
    return (test%base == 0); //Will return true when test can be divided by base without a remainder
}

//Main function performs actions described in problem; takes one input, then checks to see how many of ten following inputs are multiples of the first
int main()
{
	int base_num; //This is our base; we will be checking to see if later inputs are a multiple of this base.
	std::cin >> base_num;
    int count = 0; //Count variable keeps track of how many of our following inputs are multiples of our base
for (int i=0; i<10; i++) { //Loops ten times
        int check_num; //We will be checking to see if this integer is a multiple of the base num established earlier
        std::cin >> check_num;
        if (is_multiple(check_num, base_num)) { //calls our helper function and checks its boolean output
            ++count;
        }
    }
    std::cout << count; //prints final value before returning zero
    return 0;
}