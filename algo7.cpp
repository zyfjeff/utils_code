#include <algorithm>
#include <iostream>
#include <vector>

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

		int GetValue() const
		{
			return m_Value;
		}

		bool operator <(const MyClass& other)const
		{
			return m_Value < other.m_Value;
		}
};

int main(int argc,char* argv[])
{
	vector<MyClass> myVector{4,10,6,9,1};
	auto minimum = min_element(myVector.begin(),myVector.end());
	//返回的迭代器
	if(minimum != myVector.end())
	{
		cout << "minimum value:" << (*minimum).GetValue() << endl;
	}
	return 0;
}
