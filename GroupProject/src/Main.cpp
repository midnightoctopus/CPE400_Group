// Program Information ////////////////////////////////////////////////////////
/**
 * @file main.cpp
 *
 * @brief Program finds shortest distances in cyclic graph
 * 
 * @details Uses an OrderedSetClass to manage vertices,
 *          uses a SimpleVector to manage paths/weights
 *
 * @version 1.00 (15 November 2015)
 *
 * @Note Requires iostream, cstring, SimpleVector.cpp, and OrderedSetClass.cpp,
 *                PathClass.h
 */

// Precompiler directives /////////////////////////////////////////////////////

   // None

// Header files ///////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>
#include "PathType.h"
#include "OrderedSetClass.h"
#include "GraphClass.h"
#include "SimpleVector.cpp"
#include <BaseStation.h>
//#include <lemon/list_graph.h>
//#include <boost/graph/graph_traits.hpp>
//#include <boost/graph/undirected_graph.hpp>
//#include <iterator>
//#include <algorithm>

using namespace std;

// Global constant definitioans  //////////////////////////////////////////////



// Free function prototypes  //////////////////////////////////////////////////


// Main function implementation  //////////////////////////////////////////////





int main()
{

    BaseStation base;

    for(int index = 0; index < 36; index++ )
    {
        base.AddDrone();
    }
    base.InitDisObj(50,30);
    base.InitDisObj(100,100);
    base.InitDisObj(80,20); 

    base.Print();
    
    return 0;
}









