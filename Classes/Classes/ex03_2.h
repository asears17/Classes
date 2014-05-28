//
//  ex03_2.h
//  Classes
//
//  Created by Drew Sears on 5/27/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef Classes_ex03_2_h
#define Classes_ex03_2_h
#include <iostream>
#include <math.h>
using namespace std;
void getDiscriminant();
void equation();
void getRoot1();
void getRoot2();

class QuadraticEquation{//class
public:

    double acoef;
    double bcoef;
    double ccoef;
    
    void equation();
    
public: QuadraticEquation (double a, double b, double c) {
        acoef = a;
        bcoef = b;
        ccoef = c;
        
    }
    void getDiscriminant(){
        double disc = bcoef * bcoef - 4.0* acoef * bcoef;
    }
    
    void getRoot1(){
        double denominator = 2.0 * acoef;
        double root1 = -bcoef * sqrt(bcoef - 4.0 * acoef * ccoef) / denominator;
    }
    void getRoot2(){
        double denominator = 2.0 * acoef;
        double root2 = bcoef * sqrt(bcoef - 4.0 * acoef * ccoef) / denominator;

    }


    
};
void QuadraticEquation:: equation(){//having trouble calling my equations into the funtion
    
    
    cout << "/n/nEnter in a, b and c variables\n";
    cin >> acoef;
    cin >> bcoef;
    cin >> ccoef;
    
    
    
}



#endif
