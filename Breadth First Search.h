//implementation using Breadth First Search algorithm
void bfs1(int u, int network[n][n],int dist[n],int max[n])
    {
        int w,v,l,onScanQ[n], ScanQ[n],ecc[n], Qsize=0, k,sum,longest_path;
        for(v=0;v<n;v++){
            dist[v]=MAXNUM;
            onScanQ[v]=FALSE;
            max[v]=0;
              

        }
         sum=0;
         longest_path=0;
         dist[u]=0;
         ScanQ[1]=u;
         onScanQ[u]=TRUE;
         Qsize=1;
         k=1;
         l=0;
         printf("\n BFS has started examining :\n"); //starts and examining the queued nodes
         do{ 
        v=ScanQ[k];
        printf(" %d ",v);
            for (w=0;w<n;w++)
                if ((network[v][w]<MAXNUM)&&(!onScanQ[w]))  
                {   
                    Qsize++;          
                    ScanQ[Qsize]=w;         
                    onScanQ[w]=TRUE;
                    dist[w]=dist[v]+1;
                    printf("(%d)",w);
                    if (dist[w]>longest_path)     // finding the longest path 
                    {
                       longest_path=dist[w];
                       
                    }
                    
                    


                }
                k++;  
            

          }
         while(k<=Qsize);
         printf("\n"); 
            for (w=0; w < n; w++)
            {
                printf("\n Distances from node %d are: (%d,%d)=%d \n",u,u,w,dist[w]);
                

            }
            printf("\nEccentricity of node %d is :%d\n",u,longest_path);
                        
         max[u]=longest_path;
    }


