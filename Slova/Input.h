#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
class Input
{
private:
	vector<string> slova;
	const char* menoSuboru;
public:
	Input(const char *pMenoSuboru) { menoSuboru = pMenoSuboru; };
	void nacitajSlova();
	void sortEm() { sort(slova.begin(), slova.end()); };
	void zapisSlova(const char *menoSuboruOutput);
	void obsahuje(string retazec);
	~Input();
};

