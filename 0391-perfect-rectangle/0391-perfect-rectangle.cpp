/*
INTUTION 

This function checks whether a set of rectangles form a rectangle. It does this by keeping track of the number of times each point appears in the set of rectangles.

The input is a vector of rectangles, where each rectangle is represented by a vector of four integers x1, y1, x2, y2, representing the coordinates of the top left and bottom right corners of the rectangle.

The function first initializes an unordered map mark that will store the number of times each point appears in the set of rectangles. It also defines a constant N which is used as a scaling factor when storing points in the map.

It then iterates through the rectangles and updates the mark map as follows:

For each corner of the rectangle, it increments or decrements the count in the mark map by 1, depending on whether the point is a top left or bottom right corner of the rectangle.
For example, if the rectangle has top left corner at (x1, y1) and bottom right corner at (x2, y2), it increments the count for the points (x1, y1) and (x2, y2), and decrements the count for the points (x1, y2) and (x2, y1).
After all the rectangles have been processed, the function iterates through the mark map and checks whether the count for each point is either 1 or -1. If any point has a count that is not 1 or -1, or if there are not exactly 4 points with a count of 1 or -1, the function returns false. Otherwise, it returns true.

This algorithm works because if the set of rectangles forms a rectangle, then each point in the rectangle will have a count of 1 in the mark map, while all other points will have a count of 0. On the other hand, if the set of rectangles does not form a rectangle, then at least one point will have a count that is not 1 or -1.


Time Complexity
   T.c == O(nlogn);
   s.c == O(n);
*/
class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        unordered_map<long long,int> mark;
        const long long N = 1000000;
        for(auto x : rectangles){
            int x1 = x[0];
            int y1 = x[1];
            int x2 = x[2];
            int y2 = x[3];
            mark[x1*N + y1]++;
            mark[x1*N + y2]--;
            mark[x2*N + y1]--;
            mark[x2*N + y2]++;
        }
        int corner = 0;
        for(auto it = mark.begin(); it != mark.end(); it++){
            if(it->second != 0){
                if(abs(it->second) != 1) return false;
                corner++;
            }
        } return corner == 4;
    }
};