#include <iostream> //preprocessor directive (icludes library of functions)

void PlayBeginning()
{
    //Print player welcome message 
    std::cout << "Inkeeper John: \"Welcome to our tavern, Brave Adventurer!\"" << std::endl; //separating lines of text
    std::cout << "Inkeeper John: \"My name is Inkeeper John. Are you up for a quest?\"";
}

bool PlayGame()
{
    //Declaring values 
    const int CodeA = 3; //defining a variable - type/name/=/value
    const int CodeB = 3;
    const int CodeC = 2;
    const int x = 322;
    const int CodeSum = CodeA + CodeB + CodeC; //const makes variables non-changable!
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Inkeeper John: \"Solve this to prove you're worthy!\"" << std::endl;
    std::cout << std::endl;
    std::cout << "*I have 3 sheeps in my farm...*" << std::endl;
    std::cout << "*Number of stacks of hay they ate adds up to: " << CodeSum <<" *" << std::endl;
    std::cout << "*Multiply of stacks of hay they ate is: " << CodeProduct << " *" << std::endl;
    std::cout << std::endl;
    std::cout << "Inkeeper John: \"What is the possible size of each sheep meal?\"" <<  std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    //Answer if function defining player plot
    if (CodeSum == GuessSum)
    {
        std::cout << "Inkeeper John: \"Great work Hero, here's your reward!\"\n";
        std::cout << "*You have received a map with a big, red X on it and a magic potion.*\n";
        std::cout << std::endl;
        std::cout << "*You follow the trail until you encounter a Forest troll!*";
        std::cout << "\n\nTroll grunts: \"Ugh - stop Stranger - no go. My brigde!\"";
        return false;
    }
    else
    {
        std::cout << "\nInkeeper John: \"Sorry traveler, you have to try again.\"";
        return true;
    }
}
bool TripContinue()
{
    std::cout << "\n\n*Behind the troll you can see a ruined bridge painted in yellow and red.*";
    std::cout << "\n*It appears there is no other way than distracting the troll by splashing his eyes with paint*";
    std::cout << "\n\n There are 3 buckets of paint under your feet - 1.yellow, 2.red and 3.blue - which number will you choose to succeed?";
    int CorrectResult = 3;
    int ColorChosen;
    std::cin >> ColorChosen;

    if (ColorChosen == CorrectResult)
    {
        std::cout << "\n\n*Good job - the Troll is blinded, you can now run through the bridge!*";
        std::cout << "\n\n\n\n*Few hours later at dawn, looking after a place to camp at night you come at a group of dwarves by the fire.*";
        std::cout << "\n\nGolth: \"Howdy Adventurer, how ya doin'? I am Golth. An this is Fran and Gris\"";
        std::cout << "\nFran: \"Hiya!\"";
        std::cout << "\nGris: \"Ay mate!\"";
        std::cout << "\nGolth: \"Feel free to join us at the camp - it will be safer together.\"";
        std::cout << "\nGolth: \"Let's kill the time by playing dice poker - help me out picking the correct dice to exchange for three rounds. It will be fun!\"";
        return false;
    }
    else
    {
        std::cout << "\n\n*You chosen wrong, the bucket is empty - hurry, pick another one!*";
        return true;
    }
}
bool TripCamp(int Difficulty)
{
    std::cout << "\n\n*The dice has been rolled in round " << Difficulty << " - there are two Two's, two Three's and one Six. Which dice should be re-rolled - 2, 3 or 6?*";
    int GoodReroll = 6;
    int PlayerReroll;
    
    std::cin >> PlayerReroll;

    if (PlayerReroll == GoodReroll)
    {
        std::cout << "\n\nGolth: \"Nice one. We advance to the next round!\"";
        return false;
    }
    else
    {
        std::cout << "\n\nGolth: \"No... This can't be it. Think again.\"";
        return true;
    }
    
}
bool TripCamp2(int Difficulty)
{
    std::cout << "\n\n*The dice has been rolled in round " << Difficulty << " - there are four Four's and one One. Which dice should be re-rolled - 4 or 1?*";
    int GoodReroll2 = 1;
    int PlayerReroll2;
    
    std::cin >> PlayerReroll2;

    if (PlayerReroll2 == GoodReroll2)
    {
        std::cout << "\n\nGolth: \"Awesome, final round ahead!\"";
        return false;
    }
    else
    {
        std::cout << "\n\nGolth: \"Something seem not right.\"";
        return true;
    }
    
}
bool TripCamp3(int Difficulty)
{
    std::cout << "\n\n*The dice has been rolled in round " << Difficulty << " - there are one of each from 1 to 5. Which dice should be re-rolled - 3, 4, 5 or 0?*";
    int GoodReroll3 = 0;
    int PlayerReroll3;
    
    std::cin >> PlayerReroll3;

    if (PlayerReroll3 == GoodReroll3)
    {
        std::cout << "\n\nGolth: \"Ahha, yes we won! You, my friend, are my lucky charm. Have a good night!\"";
        return false;
    }
    else
    {
        std::cout << "\n\nGolth: \"Be careful, it is the last step to glory.\"";
        return true;
    }
    
}
bool PlayLastFight()
{
    std::cout << "\n\n*Morning breeze woke you up and thrilled you've began your journey again*";
    std::cout << "\n\n\n*You reached to a great vault. Once entered a torches lit itself.*";
    std::cout << "\n*Fast footsteps and shrieeking sound reached from the depths.*";
    std::cout << "\n*An armed skeleton runs towards you. HIT it!*";

    int PlayerHit;
    std::cin >> PlayerHit;
    std::cout << "\n\n\n Armed skeleton received " <<  rand() % 10 << "hitpoints!";
    std::cout << "\n Armed skeleton received " <<  rand() % 10 << "hitpoints!";
    std::cout << "\n Armed skeleton received " <<  rand() % 10 << "hitpoints!";
    std::cout << "\n Armed skeleton received " <<  rand() % 10 << "hitpoints!";
    std::cout << "\n Armed skeleton is dead!";

    std::cout << "\n\n\n*After defeating the grand enemy you reached the treasure chest in the final chammber of the vault.*";
    std::cout << "\n\n*Congratulations Adventurer - you have won the game!*";
    std::cout << "\n***THE END***";
    return false;
}
int main() //main body function
{
    PlayBeginning();
    while (true)
    {
        bool aLevelComplete = PlayGame();
        std::cin.clear(); //Clear input errors
        std::cin.ignore(); //Discar any buffers

        if (aLevelComplete == false)
        {
            break;
        }
    }
    while (true)
    {
        bool bLevelComplete = TripContinue();
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete == false)
        {
            break;
        }
    }
    int LevelDifficulty = 1;
    const int MaxDifficulty = 3;
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool cLevelComplete = TripCamp(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (cLevelComplete == false)
        {
            ++LevelDifficulty;
            break;
        }   
    }
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool dLevelComplete = TripCamp2(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (dLevelComplete == false)
        {
            ++LevelDifficulty;
            break;
        }   
    }    
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool eLevelComplete = TripCamp3(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (eLevelComplete == false)
        {
            ++LevelDifficulty;
            break;
        }   
    }  
    PlayLastFight();
    return 0;
}