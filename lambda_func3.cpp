#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <iostream>
#include <typeinfo>


using MyArray = std::array<uint32_t,5>;

void PrintArray(const std::function<void(MyArray::value_type)>& myFunction)
{
	MyArray myArray{1,2,3,4,5};
	std::for_each(myArray.begin(),myArray.end(),myFunction);
}

int main()
{
	auto myClosure = [](MyArray::value_type number) {
		std::cout << number << std::endl;
	};
	std::cout << typeid(myClosure).name() << std::endl;
	//lambda表达式传递给function
	PrintArray(myClosure);
	return 0;
}
