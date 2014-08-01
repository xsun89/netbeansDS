/* 
 * File:   graphList.h
 * Author: xsun
 *
 * Created on July 31, 2014, 8:31 PM
 */

#ifndef GRAPHLIST_H
#define	GRAPHLIST_H
include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAXVEX 100
typedef struct EdgeNode
{
    int adjvex;
    char info;
    struct EdgeNode *next;

};


#endif	/* GRAPHLIST_H */

