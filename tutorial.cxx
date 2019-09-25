#include <iostream>
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions/sqr.h"
#endif

int main()
{
	using namespace std;
	cout << "hello!" << endl;
	cout << "version: " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << endl;
#ifdef USE_MYMATH
	cout << "1.5^2 = " << sqr(1.5) << endl;
#else
	cout << "1.5^2 = " << 1.5*1.5 << endl;
#endif
}
