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

BaseStation:: BaseStation()
{
    graph = new GraphClass(26);

    drone_objects.reserve(0);

    drone_states.reserve(0);

    num_drones = 0;
}

BaseStation:: ~BaseStation()
{

}
     
bool BaseStation:: AddDrone()
{
    static int letterIndex = 0;
    Drone* new_drone;
    char letterArray[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                          'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

    if(CheckDroneCount())
    {
        new_drone = new Drone();
    }
}


bool BaseStation:: DroneTimeOut()
{
    return false;
}

Drone* BaseStation:: MoveConnections(Drone* nodeA, Drone* nodeB)
{
   
      
}

Drone* BaseStation:: ReturnState(Drone* nodeA, Drone* nodeB)
{

}

bool BaseStation:: CheckDroneCount()
{
    if(num_drones < MAX_DRONES)
    {
        return true;
    }

    return false;
}


// Terminating precompiler directives  ////////////////////////////////////////

#endif		// #ifndef BASESTATION.CPP
