class Solution {
    //出错1:max,min使用错误
    //容器越界，容器下标错误
public:
     int maxArea(vector<int>& height){
            int left=0;
            int right=height.size()-1;
            int max_area=0;
            while(left<right){
                //cout<<right<<endl;
                //cout<<left<<endl;
                int max_temp = (right-left)*min(height[left], height[right]);
                max_area = max_area > max_temp?max_area:max_temp;
                //cout << max_temp<<endl;
                //cout << max_area<<endl;
                if(height[left]>height[right]){
                    right--;
                }else{
                    left++;
                }
            }
            return max_area;
        }
     int min(int a,int b){//max min error
            return a>b?b:a;
     }
};
