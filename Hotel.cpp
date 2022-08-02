/*
Martin Dorobczynski

Hotel Reservation System

hotel.CPP
*/
#include "Hotel.h"
#include "Penthouse.h"
#include "Courtyard.h"
#include "Deluxe.h"
#include "Scenic.h"
#include <iostream>
#include <string>
using namespace std;

//***********************************************
//  Constructor initializes member variables    *                                                 
//***********************************************
Hotel::Hotel()
{
    phReserved = 0; //stores amount reserved of each room type
    dxReserved = 0;
    scReserved = 0;
    cyReserved = 0;
    totalOccupiedRooms = 0; //storage for current number of rooms occupied
    totalRevenue = 0;       //storage for current total revenue       
}

//*********************************************************
//  bookARoom handles user choosing room type             *
//  increments number of rooms reserved                   *
//  calculates the totalRevenue                           *
//  outputs message if all rooms reserved                 *                              
//*********************************************************
bool Hotel::bookARoom(char userChoice)
{
    if ((userChoice == 'C') or (userChoice == 'c')) //if user chose Penthouse
    {
        if (cyReserved < COURTYARD) //if rooms avaliable
        {
            cyReserved++;                     //incrementing reserved
            Courtyard c1;                     //creating p1 object
            RoomArr[totalOccupiedRooms] = c1; //Rooms Array is populated w/new rooms object
            totalOccupiedRooms++;             //incrementing occupied total
            totalRevenue += c1.costOfRoom;    //totalRevenue = totalRevenue + c1.costOfRoom
        }
        else
        {
            cout << endl << "Sorry, Courtyard is occupied tonight\n" << endl;
            return false;   //else statement fails
        }
    }
    else if ((userChoice == 'P') or (userChoice == 'p'))
    {
        if (phReserved < PENTHOUSE)
        {
            phReserved++;
            Penthouse p1;
            RoomArr[totalOccupiedRooms] = p1;
            totalOccupiedRooms++;
            totalRevenue += p1.costOfRoom;
        }
        else
        {
            cout << endl << "Sorry, Penthouse is occupied tonight\n" << endl;
            return false;
        }
    }
    else if ((userChoice == 'S') or (userChoice == 's'))
    {
        if (scReserved < SCENIC)
        {
            scReserved++;
            Scenic s1;
            RoomArr[totalOccupiedRooms] = s1;
            totalOccupiedRooms++;
            totalRevenue += s1.costOfRoom;
        }
        else
        {
            cout << endl << "Sorry, Scenic is occupied tonight\n" << endl;
            return false;
        }
    }
    else //final else statement - Deluxe chosen
    {
        if (dxReserved < DELUXE)
        {
            dxReserved++;
            Deluxe d1;
            RoomArr[totalOccupiedRooms] = d1;
            totalOccupiedRooms++;
            totalRevenue += d1.costOfRoom;
        }
        else
        {
            cout << endl << "Sorry, Deluxe is occupied tonight\n" << endl;
            return false;
        }
    }
    return true;    //satisfy boolean function
}

//***************************************************
//  getTotal outputs the updated member variables   *                                                 
//***************************************************
void Hotel::getTotal()
{
    //display remaining room inventory and what was reserved
    cout << endl << "-----------------------------------------------------\n";
    cout << "TOTAL OCCUPIED rooms for today: " << totalOccupiedRooms << endl << endl;
    cout << "Courtyard reserved: " << cyReserved << " and we have " << COURTYARD - cyReserved << " rooms avaliable" << endl;
    cout << "Scenic reserved: " << scReserved << " and we have " << SCENIC - scReserved << " rooms avaliable" << endl;
    cout << "Deluxe reserved: " << dxReserved << " and we have " << DELUXE - dxReserved << " rooms avaliable" << endl;
    cout << "Penthouse reserved: " << phReserved << " and we have " << PENTHOUSE - phReserved << " rooms avaliable" << endl;


    //revenue generated for day
    cout << endl
        << "TOTAL REVENUE generated for today: $" << totalRevenue << ".00\n";
    cout << "-----------------------------------------------------\n" << endl;
}