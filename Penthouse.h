/*
Martin Dorobczynski

Hotel Reservation System
penthouse.HPP
*/
#ifndef PENTHOUSE_H
#define PENTHOUSE_H
#include "Rooms.h"
#include <string>
using namespace std;

class Penthouse : public Rooms  //Penthouse inherits from class Rooms
{
public:
	Penthouse();	//constructor

	//MEMBER VARIABLES
	double costOfRoom;
	string nameOfRoom;
	char typeInitials;
};
#endif