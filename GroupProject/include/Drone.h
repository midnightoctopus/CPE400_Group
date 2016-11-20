// Program Information ////////////////////////////////////////////////////////
/**
 * @file Drone.h
 *
 * @brief Definition file for Drone class
 * 
 * @details Specifies all member methods of the Drone class
 *
 * @version 1.0
 *
 * @Note None
 */

// Precompiler directives /////////////////////////////////////////////////////

#ifndef DRONE_H
#define DRONE_H

// Header files ///////////////////////////////////////////////////////////////

#include <iostream>
#include "VertexType.h"

using namespace std;

// Class definition  //////////////////////////////////////////////////////////


class Drone : public VertexType
{

  public:
    
    Drone();

    Drone(char letter);

    ~Drone();
     
  private:

    int xLoc;

    int yLoc;
     
};

// Terminating precompiler directives  ////////////////////////////////////////

#endif		// #ifndef BASESTATION.H

