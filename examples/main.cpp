/**
 * VECTORF EXAMPLE CODE
 * 
 * Code By: Michael Wrona
 * Created: 14 Sept 2021
 */


#include <iostream>
#include "vectorf.h"



int main(int argc, char **argv) {
    
    // create a vector with 5 elements
    Vectorf myvector(5);

    // Print the length
    std::cout << "Here is the vector length: " << myvector.GetLen() << std::endl;

    // Fill with twos
    myvector.Fill(2.0f);

    // Print the third element
    std::cout << "Here is the third element: " << myvector.Get(3) << std::endl;

    // Print to console
    std::cout << "Here is what the vector looks like: ";
    myvector.Print();

    // Print the vector norm/magnitude
    std::cout << "Here is the vector magnitude: " << myvector.GetNorm() << std::endl;

    return 0;
}

