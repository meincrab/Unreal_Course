#include <iostream>

int main()
{
   std::cout << "You are an agent breaking into secure room...";
   std::cout << std::endl;
   std::cout << "Enter the correct code to continue...";

   int CodeA = 4;
   int CodeB = 3;
   int CodeC = 7;

   int CodeSum = CodeA + CodeB + CodeC;
   int CodeProduct = CodeA * CodeB * CodeC;
   std::cout << std:: endl;
   std::cout << "There are 3 numbers in the code" << std::endl;
   std::cout << "The codes add-up to : " << CodeSum << std::endl;
   std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

   int GuessA, GuessB, GuessC;
   std::cin >> GuessA;
   std::cin >> GuessB;
   std::cin >> GuessC;
   std::cout << "You entered " << GuessA << GuessB << GuessC;

   return 0;
}
