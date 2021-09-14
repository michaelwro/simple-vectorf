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


class Vectorf {
    public:
        Vectorf(size_t vecLen = 3);  // constructor
        virtual ~Vectorf();  // deconstructor
        void Fill(float val);
        size_t GetLen();
        float Get(size_t index);
        float GetNorm();
    protected:
    private:
        size_t n; ///< Vector length
        float *vec;  ///< Vector's dynamic array
};
#endif // __VECTORF_H_
