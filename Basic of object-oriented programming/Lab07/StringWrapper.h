#ifndef STRINGWRAPPER_H_
#define STRINGWRAPPER_H_

class StringWrapper{
private:
	char * _str;
public:
	// alokuje pamiec na napis
	StringWrapper(const char * str);
	// tylko przypisuje wzkaznik
	StringWrapper(char * str);
	// zwalnia pamiec
	~StringWrapper();
	// sprawdza czy napisy sa identyczne
	static bool eq(const StringWrapper & sw1, const StringWrapper & sw2);
	// sprawdza czy napisy sa identyczne (nie bierze pod uwage wielkosci liter)
	static bool eqIcase(const StringWrapper & sw1, const StringWrapper & sw2);
	// wypisuje napis
	friend void print(const StringWrapper & sw);
	// dodaje nowy napis na koncu juz istniejacego
	StringWrapper & append(const char * str);
	// dodaje nowy napis na koncu juz istniejacego
	StringWrapper & append(const StringWrapper & sw);
	// start i stop sa pierwszym i nastepnym po ostatnim znaku, ktore kopiujemy
	char * substring(int start, int stop) const;
	// zwraca wzkaznik na napis
	const char * data() const;
};

// wypisuje napis
void print(const char * str);

#endif