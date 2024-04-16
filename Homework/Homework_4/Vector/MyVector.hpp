#ifndef MY_VECTOR_HPP 
#define MY_VECTOR_HPP 
 
class Vector3{ 
    public: 
        double x, y, z; 
    public: 
        Vector3(double a = 0,double b = 0, double c = 0):x(a), y(b), z(c){}; 
 
        Vector3 operator       +(Vector3 & v1); 
        Vector3 operator       -(Vector3 & v1); 
        double operator        !(); 
        double operator        &(Vector3 & v); 
        friend double operator ^(Vector3 & v1,Vector3 & v2); 
        friend Vector3 operator*(Vector3 & v1, Vector3 & v2); 
}; 
 
#endif //MY_VECTOR_HPP