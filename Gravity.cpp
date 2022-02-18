#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	cout << "UNIVERSE" << endl;
	cout << " _____          ########         #################"        << endl;
	cout << "/ ##  \\        #   + +  #       #                 #"      << endl;
	cout << "| ### |    => #  + ++    # =>   #                 #"       << endl;
	cout << "\\_____/       # +  + +   #      #                 #"      << endl;
	cout << "               #    +   #      ====================="      << endl;
	cout << "                ########        =================="        << endl;
	cout << "                                  ##############" 	    << endl;
	
	double multiplier;
	double second_mass;
	double radius;

	double PI = 3.14159265359;
	double AU = 1.496 * 100000000;
	double gravity = 9.82;
	double solar_mass =(4*PI*PI*(AU)*(AU)*(AU))/gravity*(360*360);

	cout << "how many times do you want to multiply the solar mass? " << endl;
	cin >> multiplier;
	cout << "(in kg)" << endl;
	cout << "what is the second mass? " << endl;
	cin >> second_mass;
	cout << "how many times do you want to multiply the astronomical unit?" << endl;
	cin >> radius;
	
	double force = (gravity*(multiplier*solar_mass)*second_mass)/radius*AU*AU;
	cout << "      gravity x (multiplier x solar_mass) x second_mass  " << endl;
	cout << "fg = --------------------------------------------------- " << endl;	
	cout << "                        radius x AU^2                    " << endl;
	cout << "fg = ";
	cout << force << endl;
	
	return 0;

}
