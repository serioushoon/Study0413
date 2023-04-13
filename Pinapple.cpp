#include "Pinapple.h"
#include <iostream>

FPinapple::FPinapple()
{
	std::cout << "파인애플이 있다" << std::endl;

}

FPinapple::~FPinapple()
{
	std::cout << "파인애플찌꺼기 버려" << std::endl;
}

void FPinapple::Mix()
{
	std::cout << "파인애플쥬스 완성" << std::endl;
}
