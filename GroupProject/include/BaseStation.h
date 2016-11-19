// Program Information ////////////////////////////////////////////////////////
/**
 * @file BaseStation.h
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

#ifndef BASESTATION_H
#define BASESTATION_H

// Header files ///////////////////////////////////////////////////////////////

#include "GraphClass.h"
#include "Drone.h"
#include <iostream>
#include <vector>

using namespace std;

// Class definition  //////////////////////////////////////////////////////////

class BaseStation
{
  public:
    
    BaseStation();

    ~BaseStation();
     

  private:

    GraphClass* graph;

    std::vector<Drone*> drone_objects;
     
};

// Terminating precompiler directives  ////////////////////////////////////////

#endif		// #ifndef BASESTATION.H

