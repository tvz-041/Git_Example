#include <iostream>

#include "SomeClass.h"

SomeClass::SomeClass(const bool someBoolData, const int someIntData)
{
	m_someBoolData = someBoolData;
	m_someIntData = someIntData;
}

bool SomeClass::someBoolData() const
{
	return m_someBoolData;
}

int SomeClass::someIntData() const
{
	return m_someIntData;
}

void SomeClass::setSomeBoolData(const bool someBoolData)
{
	m_someBoolData = someBoolData;
}

void SomeClass::setSomeIntData(const int someIntData)
{
	m_someIntData = someIntData;
}

void SomeClass::printSomeBoolData() const
{
	std::cout << m_someBoolData;
}

void SomeClass::printSomeIntData() const
{
	std::cout << m_someIntData;
}
