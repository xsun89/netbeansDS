/* 
 * File:   graphList.h
 * Author: xsun
 *
 * Created on July 31, 2014, 8:31 PM
 */

#ifndef GRAPHLIST_H
#define	GRAPHLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 9
#define MAXVEX 9
#define MAXEDGE 15
#define INFINITY 65535

typedef int Status;
typedef int Boolean;
typedef char VertexType;
typedef int EdgeType;


typedef struct _EdgeNode
{
    int adjvex;
    char info;
    struct EdgeNode *next;

}EdgeNode;

typedef struct _VertexNode
{
    int in;
    char data;
    EdgeNode *firstEdge;
}VertexNode, AdjList[MAXVEX];

typedef struct _MGraph
{
    VertexType vexs[MAXVEX];
    EdgeType arc[MAXVEX][MAXVEX];
    int numVertexes, numEdges;
}MGraph;

typedef struct _GraphAdjList
{
    AdjList adjList;
    int numVertexes, numEdges;
}GraphAdjList, *pGraphAdjList;






#endif	/* GRAPHLIST_H */

