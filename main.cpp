/* 
 * File:   main.cpp
 * Author: xsun
 *
 * Created on July 31, 2014, 8:28 PM
 */

#include <cstdlib>
#include "graphVertex.h"


using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    MGraph G;
   
    CreateMGraph(&G);
    DFSTraverse(G);
    printf("\n");
    DGSTraverse(G);
    return 0;
}
