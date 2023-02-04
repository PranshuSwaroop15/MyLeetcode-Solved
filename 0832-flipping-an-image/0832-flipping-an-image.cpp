class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int z=image.size()-1;
            for(int j=0;j<z;j++){

                swap(image[i][j],image[i][z]);

                z--;
            }

        }
        for(int i=0;i<image.size();i++){
            
            for(int j=0;j<image[i].size();j++){

                if(image[i][j]==1){
                    image[i][j]=0;
                }
                else{
                    image[i][j]=1;
                }
                
            }

          

    }
          return image;
    }
};