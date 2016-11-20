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
#include <tgmath.h>

using namespace std;

const int MIN_GRID = 0;
const int MAX_GRID = 100;
const int MAX_DRONES = 25;

// Class definition  //////////////////////////////////////////////////////////

struct DisObj
{
    int x;
    int y;
    int distance;
    int id;
    bool isActive;
};

class BaseStation
{
  public:
    
    BaseStation();

    ~BaseStation();

    bool InitDisObj(int x, int y);
     
    bool AddDrone();

    bool DroneTimeOut();

    Drone* MoveConnections(Drone* nodeA, Drone* nodeB);

    Drone* ReturnState(Drone* nodeA, Drone* nodeB);
    
    bool CheckDroneCount();

    int CalcDistance(int x, int y);

    int CalcNumDrones(int distance);

    void Print();

  private:

    GraphClass* graph;

    std::vector<Drone*> drone_objects;

    std::vector<DisObj*> dis_objects; 

    int num_drones;
    int num_dis;

    
     
};

// Terminating precompiler directives  ////////////////////////////////////////

#endif		// #ifndef BASESTATION.H

