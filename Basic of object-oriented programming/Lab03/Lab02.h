#ifndef LAB02_H_
#define LAB02_H_

// funkcja dodaje nowego studenta
void AddStudent (int * number, char *** firstName, char *** sruneame, int ** years,
	const char * firstName2, const char * secondName2, char * su, int years2);
// funkcja wypusuje imiona lub nazwiska w zaleznosci od argumentu
void PrintListContent (int number, char ** names);

// funkcja wypisuje lata
void PrintListContent (int number, int * years);

//funkcja wypisuje imiona, nazwiska i lata
void PrintListContent (int numer, char ** names, char ** surnames, int * years);

//funkcja zwalnia pamiec
void ClearStudents(int * number, char *** names, char *** surnames, int ** years);



#endif
