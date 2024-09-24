#include <iostream>


int main()
{
#define Foo 9
#ifdef Foo
	std::cout<<Foo;
#endif

	return 0;
}