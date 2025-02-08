#include <iostream>
#include <random>
#include <Horse.h>
#include <cstdlib>

srand(time(NULL));

Horse::Horse(){
	Horse::position = 0;
	Horse::id = 0;
	Horse::raceLength = 15;
}

void Horse::init(int id, int raceLength){
	Horse::position = 0;
	Horse::id = id;
	Horse::raceLength = raceLength;
}

void Horse::advance(){
	int coin = rand() % 2;
	Horse::position  += coin;
}

void Horse::printLane(){
	for(int i = 0; i < Horse::raceLength; i++){
		if(i == Horse::position){
			std::cout << Horse::id;
		} else{
			std::cout << ".";
		}
	}
}
