#include <iostream>
#include <print>
#include <format>
int main()
{

	std::cout<<std::format("{:b}\n",0b0010);
	std::cout<<std::format("{:#b}\n",0b0010);
	std::println("{:b}  {:#b}",0b0010,0b0010);

	return 0;
}