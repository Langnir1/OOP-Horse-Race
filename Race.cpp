#include <iostream>
#include "Race.h"
#include "Horse.h"

Race::Race() {
	for(int i = 0; i < numHorses; i++){
		horses[i].init(i, raceLength);
	}
}

void Race::run(){
	std::cout << "Race has started" << std::endl;
	
	bool keepGoing = true;
	while (keepGoing){
		std::cout << "It runs" << std::endl;
		for(int i = 0; i < numHorses; i++){
			horses[i].advance();
			horses[i].printLane();

			if(horses[i].isWinner()){
				keepGoing = false;
			}
		}
		std::cout << "Enter for another turn";
		std::cin.ignore();
	}
	std::cout << "Race is done" << std::endl;
}
