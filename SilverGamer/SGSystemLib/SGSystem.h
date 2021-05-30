#pragma once

#include <iostream>

#ifdef SG_EXPORTS
#define SG_API __declspec(dllexport) 
#else
#define SG_API __declspec(dllimport) 
#endif


class SG_API SGSystem {
public:
	void SystemOutput();
};