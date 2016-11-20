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


/**
 * @brief Default Constructor
 *
 * @details Initialize graph, number of drones in use 
 *          
 * @param in: None
 *
 * @note 
 */
BaseStation::BaseStation()
{
    //initialize graph by maxiumum number of drones available to BaseStation
    graph = new GraphClass(26);

    //initialize number of drones in use
    num_drones = 0;
}

/**
 * @brief 
 *
 * @details 
 *          
 * @param in: 
 *
 * @note 
 */
BaseStation::~BaseStation()
{

}
     
/**
 * @brief Initialize the disaster object from x and y coordinates. 
 *
 * @details Takes x and y coordinates and calculates location of grid. 
 *          
 * @param in: 
 *
 * @note 
 */
bool BaseStation::InitDisObj(int x, int y)
{
    static int id = 0;
    if( id < 5 )
    {
        DisObj* newDis = new DisObj;
        newDis->x = x;
        newDis->y = y;
        newDis->id = id;
        newDis->isActive = true;
        newDis->distance = CalcDistance(x, y);
        id++;
        dis_objects.push_back(newDis);
        return true;
    }
   
    else
    {
        return false;
    }
}

/**
 * @brief 
 *
 * @details 
 *          
 * @param in: 
 *
 * @note 
 */
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

/**
 * @brief 
 *
 * @details 
 *          
 * @param in: 
 *
 * @note 
 */
bool BaseStation::DroneTimeOut()
{
    return false;
}

/**
 * @brief 
 *
 * @details 
 *          
 * @param in: 
 *
 * @note 
 */
Drone* BaseStation::MoveConnections(Drone* nodeA, Drone* nodeB)
{
   
      
}

/**
 * @brief 
 *
 * @details 
 *          
 * @param in: 
 *
 * @note 
 */
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

/**
 * @brief 
 *
 * @details 
 *          
 * @param in: 
 *
 * @note 
 */
void BaseStation::Print()
{
    int index;
    for(index = 0; index < drone_objects.size(); index++)
    {
        cout << drone_objects.at(index)->vertexLetter;
    }
    cout << endl;
    for(index = 0; index < dis_objects.size(); index++)
    {
        cout << dis_objects.at(index)->id << "-" << dis_objects.at(index)->distance << " ";
    }   
    cout << endl;
}


/**
 * @brief 
 *
 * @details 
 *          
 * @param in: 
 *
 * @note 
 */   
int BaseStation::CalcDistance(int x, int y)
{
    //calculate square root of x^2 + y^2
    x *= x;
    y *= y;
    x = (x+y);
    return sqrt(x);   
}

/**
 * @brief 
 *
 * @details 
 *          
 * @param in: 
 *
 * @note 
 */
int BaseStation::CalcNumDrones(int distance)
{
  
}

// Terminating precompiler directives  ////////////////////////////////////////

#endif		// #ifndef BASESTATION.CPP
