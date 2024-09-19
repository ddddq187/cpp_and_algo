#include <iostream>

int main()
{
	[[maybe_unused]] double pi { 3.14159 };  // Don't complain if pi is unused
	[[maybe_unused]] double gravity { 9.8 }; // Don't complain if gravity is unused
	[[maybe_unused]] double phi { 1.61803 }; // Don't complain if phi is unused
	// The compiler will no longer warn about gravity not being used
	//But I don't know why this is also a warning :not used
	//In Clion for Mac ,APPLE-CLANG 15,clang-tidy(default)
	return 0;
}