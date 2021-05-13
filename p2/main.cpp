#include <iostream>
#include<iomanip>

int main()
{
    float flt_Var=3.141592f;
    int int_Var=1000.0f*flt_Var;
    std::cout<< int_Var <<"\n";
    float flt_Var2=int_Var/1000.0f;
    std::cout<< std::setprecision(4) << flt_Var2 <<"\n";
    return 0;
}
