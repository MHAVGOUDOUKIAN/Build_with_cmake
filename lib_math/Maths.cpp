#include "Maths.hpp"

float Maths::addition(const float& a, const float& b) { return a+b; }
float Maths::soustraction(const float& a, const float& b) { return a-b; }
float Maths::multiplication(const float& a, const float& b) { return a*b; }
float Maths::division(const float& a, const float& b) { 
    if(b!=0) return a/b;
    else return 0;
}

float Maths::addition(float&& a, float&& b) { return a+b; }
float Maths::soustraction(float&& a, float&& b) { return a-b; }
float Maths::multiplication(float&& a, float&& b) { return a*b; }
float Maths::division(float&& a, float&& b) {     
    if(b!=0) return a/b;
    else return 0;
}