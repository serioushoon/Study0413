#include "Apple.h"
#include <iostream>

FApple::FApple()
{
	std::cout << "사과가 있다" << std::endl;
}

FApple::~FApple()
{
	std::cout << "사과찌꺼기 버려" << std::endl;
}

void FApple::Mix()
{
	std::cout << "사과쥬스 완성" << std::endl;
}
