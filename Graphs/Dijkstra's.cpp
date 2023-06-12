#include <iostream>
#include <climits>
using namespace std;

int findMinVertex(int* weights, bool* visited, int n){
	int minVertex = -1;
	for(int i = 0; i < n; i++){
		if(!visited[i] && (minVertex == - 1 || weights[i] < weights[minVertex])){
			minVertex = i;
		}
	}
	return minVertex;
}

void dijkstra(int ** edges,int n){
    int* distances = new int[n];
	bool* visited = new bool[n];

    for(int i = 0; i < n; i++){
		visited[i] = false;
		distances[i] = INT_MAX;
	}
	distances[0] = 0;
    int minVertex = findMinVertex(distances, visited, n);
	visited[minVertex] = true;
	// Explore un visted neighbours
	for(int j = 0; j < n-1; j++){
	if(edges[minVertex][j] != 0 && !visited[j]){
        int c_dist=distances[j]+edges[minVertex][j];
		if(distances[j] > c_dist){
			distances[j]= c_dist;
		}
	}

    for(int i=0;i<n;i++){
        cout<<i<<" "<<distances[i]<<endl;
    }
}

}

int main(){
   int n;
   int e;
   cin>>n>>e;
   int **edges= new int* [n];
   for(int i=0;i<n;i++){
    edges[i]=new int[n];
    for(int j=0;j<n;j++){
       edges[i][j]=0;
    }
   }

   for(int i=0;i<e;i++){
    int a,b,weight;
    cin>>a>>b;
    edges[a][b]=weight;
    edges[b][a]=weight;
   }
   cout << endl;

   dijkstra(edges,n);

   for (int i = 0; i < n; i++) {
		delete [] edges[i];
	}
	delete [] edges;

}