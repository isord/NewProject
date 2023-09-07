#include <iostream>

class LetDebug
{
public:
	void printNum()
	{
		int s1 = 32767;
		int s2 = 1;
		int s3 = s1 + s2;

		std::cout << s3 << std::endl;
	}
};

int main()
{
	LetDebug* Id = new LetDebug;

	Id->printNum();

	std::cout << "test!" << std::endl;

	return 0;
}