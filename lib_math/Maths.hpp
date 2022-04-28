#ifndef MATHS_HPP
#define MATHS_HPP

class Maths {
    public:
        float addition(const float& a, const float& b);
        float soustraction(const float& a, const float& b);
        float multiplication(const float& a, const float& b);
        float division(const float& a, const float& b);

        float addition(float&& a, float&& b);
        float soustraction(float&& a, float&& b);
        float multiplication(float&& a, float&& b);
        float division(float&& a, float&& b);
};

#endif