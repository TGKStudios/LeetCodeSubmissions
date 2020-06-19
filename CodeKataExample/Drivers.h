#pragma once
#include <map>
#include <memory>
#include <string>
#include <vector>

namespace CodeKataExample {

	class Drivers {

	public: 
		
		std::vector<std::string> driverVector;

		//Struct to be used to store information from vectors.
		struct driverInfos {
			std::string driverName;
			int hours, minutes;
			float miles;
		};

		void assignValues(std::vector<std::string>& driverVector, std::vector<std::string>& tripVector);
		//Function would have been used to assign the values to said struct.
		
	private:

	};


}