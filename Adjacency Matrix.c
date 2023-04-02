#include <stdio.h>
#include <stdlib.h>

#define n 6  // define number of nodes in the graph
#define MAXNUM 65555

#define FALSE 0
#define TRUE 1
#include "Breadth First Search.h"



int main(){
 int i,j;
 int network[n][n];
 int u=0;
 int dist[n];
 int max[n];
 float sum;
 float mean_ecc;
 for(i=0;i<n;i++){ //defining the distance matrix to infinity
     dist[i]=MAXNUM;
     for (j=0; j<n; j++)
     
         if (i==j) // defining the adjacency matrix
            network[i][j]=0;
         
            else {
                 network[i][j]=MAXNUM; network[j][i]=MAXNUM;
         
         }
      
 
 }
   
    

   /* network[0][1]=1; network[0][3]=1; network[0][5]=1; 
    network[1][0]=1; network[1][2]=1; network[1][6]=1;
    network[2][1]=1; network[2][3]=1; network[2][7]=1;
    network[3][0]=1; network[3][2]=1; network[3][4]=1;
    network[4][3]=1; network[4][5]=1; network[4][7]=1;
    network[5][0]=1; network[5][4]=1; network[5][6]=1;
    network[6][1]=1; network[6][5]=1; network[6][7]=1;
    network[7][2]=1; network[7][4]=1; network[7][6]=1;*/
    network[0][1]=1; 
    network[1][0]=1; network[1][3]=1; network[1][4]=1;
    network[2][3]=1; network[2][4]=1; network[2][5]=1;
    network[3][1]=1; network[3][2]=1;
    network[4][1]=1; network[4][2]=1; 
    network[5][2]=1;
    for (u=0;u<n;u++){ // calling the function
    bfs1(u,network,dist,max);
    sum=sum+max[u];   //finding the total eccentricity
    }
     mean_ecc=sum/n;
     printf("Mean eccentricity is :%f",mean_ecc);
}

    

   








