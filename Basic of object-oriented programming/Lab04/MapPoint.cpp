// Definicje.cpp 

#include "stdlib.h"
#include "math.h"
#include "MapPoint.h"


MapPoint construct(const std::string nazwa, double x, double y)
{
	MapPoint temp;
	temp.nazwa = nazwa;
	temp.wspX = x;
	temp.wspY = y;

	return temp;
}

void print(const MapPoint punkt)
{
	char lat, lon;
	lat = ((punkt.wspX >= 0) ? 'N' : 'S');
	lon = ((punkt.wspY >= 0) ? 'E' : 'W');
	std::cout << punkt.nazwa << " " << fabs(punkt.wspX) << lat << " " << fabs(punkt.wspY) << lon << std::endl;
}

MapPoint construct(MapPoint punkt, double przesuniecieX, double przesuniecieY)
{
	MapPoint temp = punkt;
	temp.nazwa = "Nearby " + punkt.nazwa;
	temp.wspX += przesuniecieX;
	temp.wspY += przesuniecieY;

	return temp;
}

MapDist distance(const MapPoint punktJeden,const MapPoint punktDwa)
{
	MapDist temp;
	temp.latitude = punktJeden.wspX - punktDwa.wspX;
	temp.longitude = punktJeden.wspY - punktDwa.wspY;

	return temp;
}

float angularDistance(const MapDist punkt)
{
	return hypot(punkt.latitude, punkt.longitude);
}

const MapPoint & closestFrom(const MapPoint & punktJeden,const MapPoint  & punktDwa,const MapPoint & punktTrzy)
{
	MapDist odlegloscPunktuDwa;
	MapDist odlegloscPunktuTrzy;
	odlegloscPunktuDwa = distance(punktJeden, punktDwa);
	odlegloscPunktuTrzy = distance(punktJeden, punktTrzy);
	return (angularDistance(odlegloscPunktuDwa) > angularDistance(odlegloscPunktuTrzy)) ?  punktTrzy : punktDwa;
}

const std::string name(const MapPoint punkt)
{
	return punkt.nazwa;
}

MapPoint inTheMiddle(MapPoint punktJeden, MapPoint punktDwa, const std::string nazwa)
{
	MapPoint temp;
	temp.nazwa = nazwa;
	temp.wspX = (punktJeden.wspX + punktDwa.wspX) / 2;
	temp.wspY = (punktJeden.wspY + punktDwa.wspY) / 2;

	return temp;
}
	
