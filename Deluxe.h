/*
Martin Dorobczynski

Hotel Reservation System
deluxe.HPP
*/
#ifndef DELUXE_H
#define DELUXE_H
#include "Rooms.h"
#include <string>
using namespace std;

class Deluxe : public Rooms	//Deluxe inherits from class Rooms
{
public:
	Deluxe();	//constructor

	//MEMBER VARIABLES
	double costOfRoom;
	string nameOfRoom;
	char typeInitials;
};
#endif