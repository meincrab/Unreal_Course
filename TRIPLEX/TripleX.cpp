#include <iostream>

void PrintIntroduction(int Difficulty){
   std::cout <<"   //   \n";
   std::cout <<" _oo\\   \n";
   std::cout <<" (__/ \\  _  _   \n";
   std::cout <<"    \\  \\/ \\/ \\   \n";
   std::cout <<"    (         )\\   \n";
   std::cout <<"     \\_______/  \\   \n";
   std::cout <<"      [[] [[]   \n";
   std::cout <<"      [[] [[]   \n";
   std::cout << "You are an agent breaking into secure room...\n" << Difficulty;
   std::cout << "Enter the correct code to continue...\n\n";

}

bool PlayGame(int Difficulty) 
{
   PrintIntroduction(Difficulty);

   int CodeA = 4;
   int CodeB = 3;
   int CodeC = 7;

   int CodeSum = CodeA + CodeB + CodeC;
   int CodeProduct = CodeA * CodeB * CodeC;
   std::cout << std:: endl;
   std::cout << "+ There are 3 numbers in the code";
   std::cout << "\n+ The codes add-up to : " << CodeSum ;
   std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;


   //Store Player Guess
   int GuessA, GuessB, GuessC;
   std::cin >> GuessA >> GuessB >> GuessC;


   int GuessSum = GuessA + GuessB + GuessC;
   int GuessProduct = GuessA * GuessB * GuessC;


   //Check player guess
   if(GuessSum == CodeSum && GuessProduct == CodeProduct){
      std::cout << "You win!";
      return true;
   }
   else {
      std::cout << "You lose";
      return false;
   }

}


int main()
{
   int LevelDifficulty = 1;
   while (true){
      bool bLevelComplete = PlayGame(LevelDifficulty);
      std::cin.clear(); // Clears errors
      std::cin.ignore(); //Discards the buffer

      if (bLevelComplete) {
         ++LevelDifficulty;
      }
   }
   return 0;
}
