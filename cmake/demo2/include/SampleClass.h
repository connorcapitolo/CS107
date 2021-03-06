#ifndef SAMPLECLASS_H
#define SAMPLECLASS_H

/* system header files */
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * SampleClass Class: demonstrates multiple 
 * constructors and a public display function.
 */
class SampleClass {
    private:
	char initial_val;    
    protected:
        int a;
    public:
	/**< Default Constructor Function */
	SampleClass();

	/**< Initializer Constructor Function
	 * a [in]   initialization value
	 */
	SampleClass(int a);

	/**< Displays initialization value */
        void displayInitValue();
};

#ifdef __cplusplus
}
#endif
#endif /* SAMPLECLASS_H */
