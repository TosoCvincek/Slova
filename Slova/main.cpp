#include "Input.h"
#include <iostream>
int main(int argc, char* argv[]) {

	if (argv[1] != nullptr) {
		Input *i = new Input(argv[1]);
		i->nacitajSlova();
		i->sortEm();
		i->zapisSlova("vystup.txt");
		cout << "retazec na porovnanie:";
		string retazec;
		getline(cin, retazec);
		i->obsahuje(retazec);
		return 0;
	}
	return 0;
}
