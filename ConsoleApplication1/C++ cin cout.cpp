// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	char yiss[256];
	cin.getline(yiss, sizeof(yiss));
	cout << yiss;
}