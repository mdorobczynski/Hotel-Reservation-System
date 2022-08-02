/*
Martin Dorobczynski

Hotel Reservation System

rooms.HPP
Specification file for the Rooms class
*/
#ifndef ROOMS_H
#define ROOMS_H
#include <string>
using namespace std;

class Rooms
{
public:		//public access
	Rooms();	//constructor

	//MEMBER VARIABLES
	double costOfRoom;
	string nameOfRoom;
	char typeInitials;
};
#endif