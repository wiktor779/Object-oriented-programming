//MapPoint.h -- plik naglowkowy
#ifndef MAPPOINT_H_
#define MAPPOINT_H_

#include <iostream>
#include <cstring>

struct MapPoint
{
	std::string nazwa;
	double wspX;
	double wspY;
};

struct MapDist
{
	double latitude;
	double longitude;
};

// tworzy punk
MapPoint construct(const std::string nazwa, double x, double y);

// tworzy strukture obok juz utworzonego
MapPoint construct(MapPoint punkt, double przesuniecieX, double przesuniecieY);

//wypisuje nazwe punktu oraz jego wsporzedne
void print(const MapPoint punkt);

// oblicza odleglosc miedzy dwoma miastami
MapDist distance(const MapPoint punktJeden,const MapPoint punktDwa);

//odleglosc katowa obliczana funkcja hypot
float angularDistance(const MapDist punkt);

// wybieramy jedna z dwoch punktow zadanych jako arg 2 i 3, taki ktorego odleglosc jest najmniejsza do pierwszego argumentu
const MapPoint& closestFrom(const MapPoint & punktJeden,const MapPoint & punktDwa,const MapPoint & punktTrzy);

MapPoint inTheMiddle(MapPoint punktJeden, MapPoint punktDwa, const std::string nazwa);

// wypisuje sama nazwe
const std::string name(const MapPoint punkt);

// zwalnia pamiec (w tym przypadku nie robi nic, bo uzylem std::string)
inline void clear(MapPoint punktJeden, MapPoint punktDwa, MapPoint punktTrzy) { }

inline void clear(MapPoint punktJeden, MapPoint punktDwa) { }

inline void clear(MapPoint punktJeden) { }

#endif


