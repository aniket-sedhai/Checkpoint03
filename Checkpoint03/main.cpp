//
//  main.cpp
//  Checkpoint03
//
//  Created by Aniket Sedhai on 7/11/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void print_even_doubles(std::vector<double>& values);

int main()
{
    std::vector<double> W;
        
    print_even_doubles(W);
    
    std::vector<double> E {-4.2, 7.1, 4.3, 8.1, 0.1, 11.4, 8.1};
    
    E.reserve(10);
    
    print_even_doubles(E);
        
    E.insert(E.begin(), 2.9);
    
    print_even_doubles(E);
    
    std::vector<double> B;
    
    B.insert(B.begin(), E.begin(), E.end());
    
    B.push_back(2.2);
    
    print_even_doubles(B);
    
    W = {0.4, -2.1, 4.9, 6.2, -8.2, -9.9};
    
    print_even_doubles(W);
    
    E.insert(E.begin(), W.front());
    
    print_even_doubles(E);
    
    std::sort(E.begin(), E.end());
    
    print_even_doubles(E);
    
    std::sort(E.rbegin(), E.rend());
    
    print_even_doubles(E);
    
    std::string M = "#@28#3  6q#&@*w7  1!v4#&*@3  g$#&*2#6s  h**j#@&*kd  t@  9#@h  8*#@(q*#&r@f  h#@*&(w6  @5  b$$3  2@1pk  5#@*(41  8#@r  #@(y";
    
    for (int i = 0; i < std::size(M); ++i)
    {
        if ((M[i] >= 'a' && M[i] <= 'z') || (M[i] >= 'A' && M[i] <= 'Z'))
        {
            M[i] = 'O';
        }
    }
    
    for (int i = 0; i < std::size(M); ++i)
    {
        if (M[i] >= 48 && M[i] <= 57)
        {
            M[i] = '-';
        }
    }
    
    M.erase(std::remove_if(M.begin(), M.end(), [](char c) {return c != ' ' && c != 'O' && c != '-';}), M.end());
    
    std::cout << M << std::endl;
    
    std::cout << "OXYPHENBUTAZONE" << std::endl;
}

void print_even_doubles(std::vector<double>& values)
{
    bool no_evens = true;
    for (double val: values)
    {
        int whole = static_cast<int>(val);
        if (whole % 2 == 0)
        {
            no_evens = false;
            std::cout << " -- " << val;
        }
    }
    if (no_evens)
        std::cout << "-- NO EVENS --" << std::endl;
    else
        std::cout << " -- " <<std::endl;
}
