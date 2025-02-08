#ifndef RACE_H
#define RACE_H

#include "Horse.h"

class Race{
	private:
		static const int numHorses = 5;
		Horse horses[numHorses];
		const int raceLength = 15;
	
	public:
		Race();
		void run();
};

#endif // RACE_H
