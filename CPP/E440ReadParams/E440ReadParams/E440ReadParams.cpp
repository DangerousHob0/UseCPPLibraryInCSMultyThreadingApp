#include "E440ReadParams.h"

namespace e440native
{
	void getParamsCPPNative(const char* _filePathString, int* paramsArrayDynInt)
	{
		unsigned short int* paramsArrayDyn = new unsigned short int[66];
		
		ifstream ifs(_filePathString, ios::binary);

		ifs.read(reinterpret_cast<char*> (paramsArrayDyn), 66 * sizeof(unsigned short int));
		for (int i = 0; i < 66; i++) {
			paramsArrayDynInt[i] = paramsArrayDyn[i];			
		}
		delete[]paramsArrayDyn;		
	}
}