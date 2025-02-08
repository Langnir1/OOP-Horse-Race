#include <iostream>
#include <random>
#include "Horse.h"
#include <cstdlib>
#include <ctime>


Horse::Horse(){
	position = 0;
	id = 0;
	raceLength = 15;

	srand(time(NULL));
}

void Horse::init(int id, int raceLength){
	position = 0;
	id = id;
	raceLength = raceLength;
}

void Horse::advance(){
	int coin = rand() % 2;
	position  += coin;
}

void Horse::printLane(){
	for(int i = 0; i < raceLength; i++){
		if(i == position){
			std::cout << id;
		} else{
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

bool Horse::isWinner(){
	bool result = false;
	if(position >= raceLength){
		std::cout << "Congradulations Horse " << id << "!" << std::endl;
		result = true;
	}
	return result;
}
