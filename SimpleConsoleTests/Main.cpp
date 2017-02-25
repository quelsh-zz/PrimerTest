#include "Include/std_lib_facilities.h"
#include "Include/Animal.h"

using namespace std;

int main()
{
	cout << "Hello World!" << endl;

	string* input = new string();
	WaitForInput(input);
	char buffer[512];

	sprintf(buffer, "The user typed %s", input->c_str());
	cout << buffer << endl;
	
	KeepWindowOpen();

	return 0;
}