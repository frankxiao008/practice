class Solution{
public: 
	bool isToepMatrix(vector<vector<int>>& matrix){
		for(int x=0; x < maxtrix[0].size(); x++){
			int i = 0, j = 0;
			int v = matrix[0][x];
			while(i<matrix.size() && j+x < matrix[0].size()){
				if(v != matrix[i][j+x]) return flase;
				j++;
				i++;

			}

		}

		for(int x = 0; x<matrix.size(); x++){
			int i=0, j=0;
			int v = matrix[x][0];
			while(i+x < matrix.size() && j<matrix[0].size()){
				if(v !=matrix[i+x][j])  return false;
				i++;
				j++;

			}

		}

		return true;

	}


}
