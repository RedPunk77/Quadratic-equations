 //Hi, this my humble code and it helps to solve quadratic equatoins like ax^2 + bx + c
#include <iostream>
int main()
{
	int a, b, c, d;
	double x, y;
	std::cout << "Quadraic equation roots\n";
	std::cout << "a=";                                    //initilization of variables
	std::cin >> a;
	std::cout << "b=";
	std::cin >> b;
	std::cout << "c=";
	std::cin >> c;
	if (a != 0) {
		d = ((b * b) - (4 * a * c));
		if (d < 0) {
			std::cout << ("Discriminant is less than 0, no roots");      //if d<0 there are no real solutions , it`s a rule
		}
		else {
			x = (-b + (sqrt(d))) / (2 * a);     //x=x(1)
			y = (-b - (sqrt(d))) / (2 * a);     //y=x(2)



			if (x == y) {
				std::cout << " Discriminant equales 0,  1 root\n" << x;    //Of course, if discriminant equales 0, that doesn`t matter to add or to subtract 0, so 1st root x(1) equales to the 2nd one x(2)
			}                                                              //so, why we are not able to simply output for example x(1)
			else {
				std::cout << "Discriminant is bigger than 0, 2 roots\n";
				if (x < y) {
					std::cout << "x(1)=" << x;
					std::cout << "\n";
					std::cout << "x(2)=" << y;        //at first, lets output the smallest root and then lets output the biggest one
				}
				else {
					std::cout << "x(1)=" << y;
					std::cout << "\n";
					std::cout << "x(2)=" << x;
				}
			}
		}
	}

	else {
		std::cout << "a equales 0, no solution\n";     //VERY IMPORTANT MOMENT!!! if a=0 there is no point in the equation, because ax^2 would be equal to 0, this meanes that only bx + c remains, but it isn`t a quadratic equation at all
		std::cout << " Write new a\n";
		std::cin >> a;
		d = ((b * b) - (4 * a * c));
		if (d < 0) {
			std::cout << ("Discriminant is less than 0, no roots");                    //So, the same things happen
		}
		else {
			x = (-b + (sqrt(d))) / (2 * a);
			y = (-b - (sqrt(d))) / (2 * a);



			if (x == y) {
				std::cout << " Discriminant equales 0,  1 root\n" << x;
			}
			else {
				std::cout << "Discriminant is bigger than 0, 2 roots\n";
				if (x < y) {
					std::cout << "x(1)=" << x;
					std::cout << "\n";  
					std::cout << "x(2)=" << y;      
					                                                                                                      









/*                               @@@@@@@@@@@
                               ####$$$$$$$$@@@$$                               
                             *******#####$$$$$$$$$$                            
                            =====!!!!***#####$$$$$$$#                          
                           :;;;;;;==!!!****########$###                        
                           ::~~::;;;=!!=!!*****#########                       
                           --,,-~~~:;;;===!******#*#####**                     
                           ,.....,-~~:;:====!!*!***********                    
                           .........--~::;;===!!!*!********!                   
                           ..........,--~:;;;;==!!!!!*****!!                   
                            ...........,-~~::;;===!=!!!!!!!!=                  
                             ......,,-..,,-~::;;;====!=!!!!!=                  
                             .,-~~~;;##..,,-~~::;;;==========;                 
                              .-~;=*#$$@...,-~~:::;;;;;======;                 
                                -;!!*#$$#...,--~~:::;;;;;;;;;:                          
                                 -;=!**!=~...,---~:::::;;;;;:                  some donut-shaped code for fun :)
                                  ,:=:;;:-...,,,--~~~:::::::~                  
                                    -:;:~-.....,,--~~~~~~~~~                   
                                      ,--,.....,,,---------                    
                                        .........,,,,,,,,,                     
                                           .............        */                           
				}
				else {
					std::cout << "x(1)=" << y;
					std::cout << "\n";
					std::cout << "x(2)=" << x;
				}
			}
		}

	}
	return 0;                                    //Thank you for your attention, I understand that is a simple and primitive code, but this is my one of the first steps in C++ programming! :)
}                       
