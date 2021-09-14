// A simple vector class for creating float vectors
// 
// Code By: Michael Wrona
// Created: 14 Sept 2021


#ifndef __VECTORF_H_  // include guard
#define __VECTORF_H_


#include <iostream>
#include <stdexcept>
#include <string>
#include <cmath>


/**
 * Create a float vector object.
 *
 * @param vecLen Length of vector, number of elements in the array. Default 3.
 */
class Vectorf {
    public:
        Vectorf(size_t vecLen = 3);  // constructor
        virtual ~Vectorf();  // deconstructor
        void Fill(float val);
        void Print();
        size_t GetLen();
        float Get(size_t index);
        float GetNorm();
    protected:
    private:
        size_t n; ///< Vector length
        float *vec;  ///< Vector's dynamic array
};
#endif // __VECTORF_H_
