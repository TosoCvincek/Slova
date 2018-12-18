#include "Input.h"

void Input::nacitajSlova()
{
	ifstream citac;
	citac.open(menoSuboru);
	string slovo;
	while (!citac.eof()) {
		getline(citac, slovo);
		slova.push_back(slovo);
	}
	if (citac.is_open()) citac.close();
}

void Input::zapisSlova(const char * menoSuboruOutput)
{
	ofstream zapisovac;
	zapisovac.open(menoSuboruOutput);
	for (unsigned int i = 0; i < slova.size(); i++)
	{
		zapisovac << i << ": " << slova[i] << endl;
	}
	if (zapisovac.is_open()) zapisovac.close();
}

void Input::obsahuje(string retazec)
{
	for (unsigned int i = 0; i < slova.size(); i++)
	{
		if (slova[i].find(retazec) != std::string::npos) {
			std::cout << slova[i] << endl;
		}
	}

}

Input::~Input()
{
}
