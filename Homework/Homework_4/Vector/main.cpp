#include "MyVector.hpp" 
#include <iostream> 
 
int main(){ 
    Vector3 u1(2,3,4); 
    Vector3 u2(1,1,1); 
    Vector3 u3, u4, u5; 
    double t1, t2, t3 ; 
    u3 = u1 + u2; 
    u4 = u1 - u2; 
    t1 = !u1; 
    t2 = u1 & u2; 
    t3 = u1 ^ u2; 
    u5 = u1 * u2; 
    std::cout << "x3 : " << u3.x << std::endl; 
    std::cout << "y3 : " << u3.y << std::endl; 
    std::cout << "z3 : " << u3.z << std::endl; 
    
    std::cout << "x4 : " << u4.x << std::endl; 
    std::cout << "y4 : " << u4.y << std::endl; 
    std::cout << "z4 : " << u4.z << std::endl; 
 
    std::cout << "x5 : " << u5.x << std::endl; 
    std::cout << "y5 : " << u5.y << std::endl; 
    std::cout << "z5 : " << u5.z << std::endl; 
 
    std::cout << "t1 : " <<  t1  << std::endl; 
    std::cout << "t2 : " <<  t2  << std::endl; 
    std::cout << "t3 : " <<  t3  << std::endl; 
    return 0; 
}