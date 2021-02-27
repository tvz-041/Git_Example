#ifndef SOMECLASS_H
#define SOMECLASS_H


class SomeClass
{
public:
	SomeClass(const bool someBoolData, const int someIntData);

	bool someBoolData() const;
	int someIntData() const;

private:
	bool m_someBoolData;
	int m_someIntData;
};

#endif // SOMECLASS_H
