//
//  ex03_01.h
//  Classes
//
//  Created by Drew Sears on 5/27/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef Classes_ex03_01_h
#define Classes_ex03_01_h
#include <iostream>
using namespace std;
void Fan();

class Fan{
public:
    int speed1, speed2, speed3;
    bool off;
    double radius1, radius2, radius3;
    
    Fan(){
        speed1 = 1;
        speed2 = 2;
        speed3 = 3;
        off = true;
        radius1 = 5;
        radius2 = 10;
        radius3 = 15;
        
    }
    
   
  
};

void Fan (){
    class Fan n;
    string choice;
    string on, off;
    string down;
    cout <<"Turn on fan(enter on, off)\n";
    cin >> choice;
    cout << "The fan is on\n";
    cout << "Speed is: " << n.speed3 << endl;
    cout << "Radius is: " << n.radius2 << endl;
    cout << "Change the setting (enter down)\n";
    cin >> down;
    cout << "Speed is: " << n.speed2 << endl;
    cout << "Radius is: " << n.radius2;
    cout << "Turn off the fan(enter off)\n";
    cin >> choice;
    cout << "Fan is " << n.off << endl;
    
}



#endif
