#include <iostream>
#include "TutorialConfig.h"
#include "MathFunctions/sqr.h"

int main()
{
	using namespace std;
	cout << "hello!" << endl;
	cout << "version: " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << endl;
	cout << "1.5^2 = " << sqr(1.5) << endl;
}
