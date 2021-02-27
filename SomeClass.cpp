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
