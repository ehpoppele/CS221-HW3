#include <iostream>

//
int log(int base, int value) //Base here is the input which will serve as the base of our log, while the aptly named value is just the input of the log function with that base
{
    if (base > value) { //Since we are dealing only with integers and looking at the floor of the log, our base case follows what is set here
        return 0; //So this will return zero when log base (value) < 1
    } else {
        return 1 + log(base, value/base); //Our recursive step is to divided the input by the base, as we know our input ought to be our base raised to the power of our output
    } // and for that reason we also increase our output (the exponent) by one each recursive call 
}

int main()
{
    int base_num; //The base number here will serve as the base for our constructed logarithm fucntion
    std::cin >> base_num;
    int input; //This second variable will be the input into our logarithmic function of base base_num
    std::cin >>;
    if (base_num < 1 || input < 1) { //Either input for zero would still mess up a log calculation, so zero is counted as a negative here
        std::cout << "Both inputs must be non-negative";
        return 0;
    } else {
        int output = log(base_num, input); //This variable is set equal to the output of our log function given a base and input as defined earlier
        std::cout << output;
    }
    return 0;
}