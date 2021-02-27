#ifndef SOMECLASS_H
#define SOMECLASS_H


class SomeClass
{
public:
	SomeClass(const bool someBoolData, const int someIntData);

	bool someBoolData() const;
	int someIntData() const;

	void setSomeBoolData(const bool someBoolData);
	void setSomeIntData(const int someIntData);

	void printSomeBoolData() const;
	void printSomeIntData() const;

private:
	bool m_someBoolData;
	int m_someIntData;
};

#endif // SOMECLASS_H
