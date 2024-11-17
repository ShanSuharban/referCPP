#include<iostream>
using namespace std;
int main () {
    float x,y;
    cout<<"Enter the x and y coordinate of the object: ";
    cin>>x>>y;

    if (x>0 && y>0)
        cout<<"Object is in the first quadrant ("<<x<<","<<y<<")";
    else if (x<0 && y>0)
        cout<<"Object is in the second quadrant ("<<x<<","<<y<<")";
    else if (x>0 && y<0)
        cout<<"Object is in the third quadrant ("<<x<<","<<y<<")";
    else if (x<0 && y<0)
        cout<<"Object is in the fourth quadrant ("<<x<<","<<y<<")";
    else if (x==0 && y==0)
        cout<<"Object is in the origin ("<<x<<","<<y<<")";
    else 
        cout<<"Object is in the axis ("<<x<<","<<y<<")";

return 0;
}