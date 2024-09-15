#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <set>

using namespace std;

class SolutionFiveteen{
public:
	//ALGORITMO PARA SIMULACION DE INUNDACIOOOONNN!!!!!!
	void dfs(vector<vector<int>>& image, int i, int j, int color, int originalColor){
		if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j]!=originalColor){
			return;
		}
		image[i][j]=color;
		dfs(image,i-1,j,color,originalColor); //arriba
		dfs(image,i+1,j,color,originalColor); //abajo
		dfs(image,i,j-1,color,originalColor); //izquierda
		dfs(image,i,j+1,color,originalColor); //derecha
	}
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color){
		//flood fill from image[sr][sc]
		int originalColor=image[sr][sc];
		if(originalColor!=color){
			dfs(image,sr,sc,color,originalColor);
		}
		return image;
	}
};

int main(){
	cout<<"cleaning code"<<endl;
	return 0;
}