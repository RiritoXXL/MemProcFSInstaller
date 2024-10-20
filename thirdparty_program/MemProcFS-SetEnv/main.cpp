#include <Windows.h>
#include <iostream>
using namespace std;

int main() 
{
	BOOL bool_set = SetEnvironmentVariableA("MemProcFS_Path", "C:\\Program Files\\MemProcFS");
	if (!bool_set) {
		cout << "Failed to Set Env for MemProcFS" << endl;
	}
	else {
		cout << "Success!!!" << endl;
	}
	return 0;
}