#include <string>
using namespace std;

class BMI{
     public:
	float bmi;
	string name;
	void setHeight(float);
	void setMass(float);
	float getValue();
	string getCategory();
     
     private: float height, mass;
};

		
