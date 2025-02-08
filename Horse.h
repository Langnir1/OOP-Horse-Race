class Horse {
        private:
                int position;
                int id;
                int raceLength;
        public:
                Horse();
                void init(int id, int raceLength);
                void advance();
                void printLane();
                bool isWinner()
