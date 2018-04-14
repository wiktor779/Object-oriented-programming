// Vector.h -- plik naglowkowy
#ifndef VECTOR_H_
#define VECTOR_H_

// klasy wektor sluzaca do reprezentacji wektora o 3 wspolrzednych
class Vector{
	private:
		float wek[3];
	public:
		Vector();
		Vector(float wspX, float wspY, float wspZ);
		// zwraca wartosc danej wsporzednej wektora w zalezonosci od argumentu (0 - wspX, 1 - wspY, 2 - wspZ)
		float at(int wsp); 
		// zmienia wartosc jednej ze wspolrzednych wektora w zaleznosci od argumentu
		void Set(int wsp, float wart); 
};

#endif
