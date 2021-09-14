# A Simple C++ Vector Class

**Code By:** Michael Wrona

**GitHub:** [@michaelwro](https://github.com/michaelwro)

**YouTube:** [@MicWro Engr](https://www.youtube.com/channel/UCIeZzuXHGm7zqSFvT8xGoIQ)

**Blog:** [mwrona.com](https://mwrona.com/)

A blog post thoroughly explaining how to use this class can be found at [this link](https://mwrona.com/posts/cpp-vector-obj/).

The vector class is for `float` data, but could be easily modified for other data types.

`examples/main.cpp` shows how to use the vector class. Here are some code snippets demonstrating how to use it:

```cpp
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
```
