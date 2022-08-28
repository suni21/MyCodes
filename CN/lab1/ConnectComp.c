#include<stdio.h>
#include<stdlib.h>

struct node
{
    int vertex;
    struct node* next;
};

struct Graph
{
    int numVertex;
    struct node** adjList;
};

struct node *createNode(int v)
{
    struct node *node = (struct node*)malloc(sizeof(struct node));  // Allocating memory
    node->vertex = v; 
    node->next = NULL;

    return node;
}

// Create a graph
struct Graph* createAGraph(int v)
{
  struct Graph* graph = malloc(sizeof(struct Graph));
  graph->numVertex = v;

  graph->adjList = malloc(v * sizeof(struct node*));

  int i;
  for (i = 0; i < v; i++)
    graph->adjList[i] = NULL;

  return graph;
}


