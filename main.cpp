#include <iostream>
#include "GenericPair.h"
#include <vector>
#include <set>

// TODO 1a. change get_max to a generic templated func
int get_max(int a,int b){
    int ret_val =  a > b? a: b;
    //TODO 1c. Add a static counts the amount of times get_max
    // has been called and print it.
    return ret_val;
}

// TODO: 2a  write print_char func that prints a generic type (default is
//  char) and gets a bool parameter without it being sent as argument.


// TODO: 3b Specialize get_max so that for strings it returns the longer
//  string instead.


void pair_test()
{
    GenericPair<int> int_var(10,20);
    GenericPair<double> double_var(1.5,2.5);

    std::cout << int_var.get_count() << std::endl;

    GenericPair<int> int_var2 = int_var;
    std::cout << int_var2.get_count() << std::endl;
}

int main()
{
    //TODO 1b. call get_max on int and strings:
    auto x = get_max(4,5);
    auto y = get_max('c', 't');
    std::cout << "max of the integers is: " << x << std::endl;
    std::cout << "max of the characters is: " << y << std::endl;

    //TODO 2b. call print_char with char once with and without endl


    // TODO 2.c call print_char with int implicitly and explicitly


    // TODO 2.d call print_char with double without setting type.



    // TODO 3a. call get_max with "aaa" "b" and print
    // TODO 3.c rerun after specialization
    // what happens if we remove the word string? (get_max("aaa","b"))

    // TODO 4:
    pair_test();
}
