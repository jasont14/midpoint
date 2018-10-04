#include <iostream>

int main(){
    double x1,x2,y1,y2;
    char left_paren, comma, right_paren;

    std::cout<<"Enter First Point as (x1,y1): ";
    std::cin>>left_paren>>x1>>comma>>y1>>right_paren;
    std::cout<<"Enter Second Point as (x2, y2): ";
    std::cin>>left_paren>>x2>>comma>>y2>>right_paren;
    
    double xr, yr;
    xr = (x1 + x2)/2;
    yr = (y1 - y2)/2;

    std::cout<<"MID POINT: ("<<xr<<","<<yr<<")"<<std::endl;
}