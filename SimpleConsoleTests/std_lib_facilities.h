#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

inline void WaitForInput(string* const input) 
{
	string ch; 
	cin >> ch; 
	*input = ch;
}

inline void KeepWindowOpen()
{
	char dc; // don't care
	cin >> dc;
}