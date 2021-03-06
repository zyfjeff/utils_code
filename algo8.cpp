#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MyClass
{
 private:
		 int m_Value;
 public:
		 MyClass(const int value)
				 :m_Value{ value }
		 {
		 
		 }

		 int GetValue()const
		 {
		 	return m_Value;
		 }
};

bool CompareMyClass(const MyClass& left,const MyClass& right)
{
	return left.GetValue() < right.GetValue();
}

int main(int argc,char *argv[])
{
	vector<MyClass> myVector{4,10,6,9,1};
	auto minimum = min_element(myVector.begin(),myVector.end(),CompareMyClass);
	if (minimum != myVector.end())
	{
		cout << "Minimum value: " << (*minimum).GetValue() << std::endl;
	}

	return 0;
}
