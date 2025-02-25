// I End Up in Knots.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void refrencepassor(std::string &refrencedstring) {
    refrencedstring.append(" This is the new part!");
}
void valuepassor(std::string valuedstring) {
    valuedstring.append(" This is the new part!");
}

void howmanytimesinderationprint(std::string thestring, int howmany) {
    std::cout << thestring << std::endl;
    std::cout << "It has been printed " << howmany << " times." << std::endl;
}

int main()
{
    int howmany = 0;
    std::string teststring1 = "This is a test string";
    howmanytimesinderationprint(teststring1, 1);
    valuepassor(teststring1);
    howmanytimesinderationprint(teststring1, 2);
    refrencepassor(teststring1);
    howmanytimesinderationprint(teststring1, 3);
    return 0;
}
