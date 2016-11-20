// Program Information ////////////////////////////////////////////////////////
/**
 * @file BaseStation.cpp
 *
 * @brief Definition file for BaseStation class
 * 
 * @details Specifies all member methods of the BaseStation class
 *
 * @version 1.0
 *
 * @Note None
 */

// Precompiler directives /////////////////////////////////////////////////////

#ifndef BASESTATION_CPP
#define BASESTATION_CPP

// Header files ///////////////////////////////////////////////////////////////

#include "BaseStation.h"


// Public Member functions  ///////////////////////////////////////////////////

BaseStation::BaseStation()
{
    graph = new GraphClass(26);

    num_drones = 0;
}

BaseStation::~BaseStation()
{

}
     
bool BaseStation::AddDrone()
{
    char vertLetter;
    static int letterIndex = 0;
    Drone* new_drone;
    char letterArray[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                          'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    if(CheckDroneCount())
    {
        new_drone = new Drone(letterArray[letterIndex]);
        drone_objects.push_back(new_drone);
        letterIndex++;
        num_drones++;
        return true;      
    }
    
    else
    {
        return false;
    }
}


bool BaseStation::DroneTimeOut()
{
    return false;
}

Drone* BaseStation::MoveConnections(Drone* nodeA, Drone* nodeB)
{
   
      
}

Drone* BaseStation::ReturnState(Drone* nodeA, Drone* nodeB)
{

}

bool BaseStation::CheckDroneCount()
{
    if(num_drones <= MAX_DRONES)
    {
        return true;
    }

    else
    {
        return false;
    }
}

void BaseStation::PrintLetters()
{
    int index;
    for(index = 0; index < drone_objects.size(); index++)
    {
        cout << drone_objects.at(index)->vertexLetter;
    }
    cout << endl;
}

bool BaseStation::InitCoordinates(int x, int y)
{
    static int id = 0;
    DisObj* newDis = new DisObj;
    newDis->x = x;
    newDis->y = y;
    newDis->id = id;
    id++;
    dis_objects.push_back(newDis);
}
    
void BaseStation::CalculateDistance(int x, int y)
{

}

// Terminating precompiler directives  ////////////////////////////////////////

#endif		// #ifndef BASESTATION.CPP
