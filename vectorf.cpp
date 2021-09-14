// A simple vector class for creating float vectors
// 
// Code By: Michael Wrona
// Created: 14 Sept 2021


#include "vectorf.h"


/**
 * Create a float vector object.
 *
 * @param vecLen Length of vector, number of elements in the array. Default 3.
 */
Vectorf::Vectorf(size_t vecLen) {

    // Check if len is zero
    if (vecLen == (size_t)0) {
        throw std::invalid_argument("Vector length must be greater than zero");
    }

    this->n = vecLen;  // vector length

    // check for bad allocation
    try {
        this->vec = new float[this->n];  // Allocate array on the heap
    }
    catch (const std::bad_alloc &ba) {
        std::cerr << "Bad vectorf allocation: " << ba.what() << std::endl;
    }

    // Set initial values to zero
    this->Fill(0.0f);
}


/**
 * Return the length of the vector.
 * 
 * @returns Number of elements in the vector's array.
 */
size_t Vectorf::GetLen() {
    return this->n;
}


/**
 * Return the vector's value at the specified index.
 * 
 * @param index Array index.
 * @returns Value at the specified index.
 */
float Vectorf::Get(size_t index) {

    // check the specified index
    if (index > this->n) {
        throw std::invalid_argument("Vector index exceeded length.");
        return 0.0f;
    }

    return this->vec[index];
}


/**
 * Fill the entire vector with a specified value.
 * 
 * @param val Value to fill the array with.
 */
void Vectorf::Fill(float val) {

    size_t i;

    for (i = 0; i < this->n; i++) {
        this->vec[i] = val;
    }
}


/**
 * Deconstructor for vectorf object.
 */
Vectorf::~Vectorf() {
    delete[] this->vec; // deallocate from the heap
}
