/*
Martin Dorobczynski

Hotel Reservation System
scenic.HPP
*/
#ifndef SCENIC_H
#define SCENIC_H
#include "Rooms.h"
#include <string>
using namespace std;

class Scenic : public Rooms //Scenic inherits from class Rooms
{
public:
	Scenic();	//constructor

	//MEMBER VARIABLES
	double costOfRoom;
	string nameOfRoom;
	char typeInitials;
};
#endif