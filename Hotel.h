/*
Martin Dorobczynski

Hotel Reservation System

hotel.H
Specification file for the Hotel class
*/
#ifndef HOTEL_H
#define HOTEL_H
#include "Rooms.h"
#include <string>
using namespace std;

class Hotel
{
public:		//public access
	Hotel(); //constructor

	//MEMBER VARIABLES
	const int TOTALROOMS = 122;	//const variable initialized
	Rooms RoomArr[122]; 		//array type Rooms
	const int COURTYARD = 70;
	const int SCENIC = 35;
	const int DELUXE = 15;
	const int PENTHOUSE = 2;
	int phReserved; //stores amount reserved of each room type
	int dxReserved;
	int scReserved;
	int cyReserved;
	int totalOccupiedRooms; //storage for current number of rooms occupied
	double totalRevenue;	//holds revenue for rooms reserved

	//MEMBER FUNCTIONS
	bool bookARoom(char); //gives access to room - passes character argument
	void getTotal();	  //display the updated member variables
};
#endif