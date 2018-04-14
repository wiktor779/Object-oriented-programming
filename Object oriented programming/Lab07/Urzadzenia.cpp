//Urzadzenia.cpp
#include "Urzadzenia.h"

Rozdzielczosc::Rozdzielczosc(int w, int h): _w(w), _h(h){
}

std::ostream & operator<<(std::ostream & os,const Rozdzielczosc & rozdzielczosc){
	os << rozdzielczosc._w;
	os << 'X';
	os << rozdzielczosc._h;
	return os;
}

Skaner::Skaner(Rozdzielczosc rozdzielczosc): _rozdzielczosc(rozdzielczosc){
}

Rozdzielczosc Skaner::rozdzielczosc() const{
	return _rozdzielczosc;
}

Drukarka::Drukarka(Rozdzielczosc rozdzielczosc): _rozdzielczosc(rozdzielczosc){
}

Rozdzielczosc Drukarka::rozdzielczosc() const{
	return _rozdzielczosc;
}

OfficeMultiTool::OfficeMultiTool(Rozdzielczosc rozdzielczosc1, Rozdzielczosc rozdzielczosc2): Skaner(rozdzielczosc2), Drukarka(rozdzielczosc1){
}


