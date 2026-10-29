#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int dist_square(vector<int>& a, vector<int>& b){
    return (a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]);
}
bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
    vector<int> distances= {
        dist_square(p1,p2), dist_square(p1,p3), dist_square(p1,p4),
            dist_square(p2,p3), dist_square(p2,p4), dist_square(p3,p4)
    };
    sort(distances.begin(), distances.end());
    if(distances[0]>0 &&  distances[0] == distances[1] && distances[1] == distances[2] && distances[2] == distances[3] &&
               distances[4] == distances[5] && distances[4]== 2*distances[0]){
                return true;
               }else{
                return false;
               }
    
}
int main(){
    vector<int> p1= {0,0};
    vector<int> p2= {1,1};
    vector<int> p3= {1,0};
    vector<int> p4= {0,1};
    cout<<validSquare(p1,p2,p3,p4);
    return 0;
}