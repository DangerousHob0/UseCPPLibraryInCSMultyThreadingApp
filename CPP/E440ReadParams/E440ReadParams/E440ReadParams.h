#include <stdexcept>
#include <fstream>
#include <iostream>

using namespace std;

namespace e440native
{
	extern "C" { __declspec(dllexport) void getParamsCPPNative(const char* _filePathString, int* paramsArrayDynInt); }
}