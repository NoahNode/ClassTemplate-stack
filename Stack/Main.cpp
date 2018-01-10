
#include <iostream>
#include "Stack.h"

int main() {

	Stack<double> stackOfDoubles;

	stackOfDoubles.Push(23.2f);
	stackOfDoubles.Push(3.9f);
	stackOfDoubles.Push(89.3f);
	stackOfDoubles.Push(100.2f);

	std::cout << "The size of the double stack is " << stackOfDoubles.Size() << std::endl;

	stackOfDoubles.Pop();
	stackOfDoubles.Pop();

	std::cout << "The size of the double stack is " << stackOfDoubles.Size() << std::endl;
	return 0;
}