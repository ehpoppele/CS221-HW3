#include <iostream>

//Helper function runs a recursive calculation to find an exponential power
int pow(int base, int exponent) //"base" will be raised to the power of "exponent" and then returned 
{
    if (exponent == 1) { //Any integer to the first power is itself, so we will use this as our termination case
        return base;
    } else {    
        return base * pow(base, exponent - 1);//Here we perform the step of multiplying our final result by a value of base, then lowering the exponent by 1 (recursive step)
    }
}

//Main function; takes two positive inputs and prints the value of the first input raised to the power of the second input
int main()
{
    int base_num; //This is the number base number; I didn't want to call it base since the pow function uses that
    std::cin >> base_num;
    int ex_num; //This means exponent_num, I figured a short name is sufficient here and it still seems clear enough
    std::cin >> ex_num;
    if (b_num < 1 || ex_num < 1) {
        std::cout << "Both inputs must be positive"; //Here we do not count zero as positive
        return 0; //Return function with no further computation
    } else {
        int output = pow(b_num, ex_num);//Calculate then print the exponent
        std::cout << output;
    }
    return 0;
}