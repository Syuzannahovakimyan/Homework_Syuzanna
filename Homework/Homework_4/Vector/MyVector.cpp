#include "MyVector.hpp" 
#include <cmath> 
 
Vector3 Vector3::operator-(Vector3 & v1){ 
            Vector3 new_vec; 
            new_vec.x = x - v1.x;       
            new_vec.y = x - v1.y;            
            new_vec.z = x - v1.z; 
            return new_vec; 
        } 
 
Vector3 Vector3::operator+(Vector3 & v1){ 
            Vector3 new_vec; 
            new_vec.x = x + v1.x;       
            new_vec.y = x + v1.y;            
            new_vec.z = x + v1.z; 
            return new_vec; 
        } 
 
double operator^(Vector3 & v1,Vector3 & v2){ 
    return (v1 & v2)/(!v1 * !v2) ; 
} 
 
double Vector3::operator&(Vector3 & v){ 
    return x * v.x + y * v.y +  z * v.z; 
} 
 
Vector3 operator*(Vector3 & v1, Vector3 & v2){ 
    Vector3 new_vec; 
    new_vec.x = v1.y * v2.z - v2.y * v1.z; 
    new_vec.y = -(v1.x * v2.z - v2.x * v1.z); 
    new_vec.z = v1.x * v2.y - v2.x * v1.y; 
    return new_vec; 
} 
 
double Vector3::operator! (){ 
    return sqrt(x * x + y * y + z * z); 
}