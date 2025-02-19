// Timber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <SFML\Graphics.hpp>

//current situation: cannot get the background to load from file on line 19

int main()
{

    //Create a Video mode Object
    sf::VideoMode vm = sf::VideoMode::getFullscreenModes()[0];

    //create and open a window for the game
    sf::RenderWindow window(vm, "timber");

    sf::Texture background;
    background.loadFromFile("graphics/background.png");
    
    sf::Sprite sbackground(background);
    sbackground.setTexture(background);
    sbackground.setPosition({ 0, 0 });

    //game loop
    while (window.isOpen()) {
        //handle players input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
            window.close();
        }

        //update the scene

        //draw the scene
        window.clear();
        //draw game scene here

        //display here
        window.display();
    };
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
