/*
Martin Dorobczynski

Hotel Reservation System
courtyard.HPP
*/
#ifndef COURTYARD_H
#define COURTYARD_H
#include "Rooms.h"
#include <string>
using namespace std;

class Courtyard : public Rooms	//Courtyard inherits from class Rooms
{
public:
	Courtyard(); //constructor

	//MEMBER VARIABLES
	double costOfRoom;
	string nameOfRoom;
	char typeInitials;
};
#endif