//#include <chrono>
//#include <cstdint>
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio/Music.hpp>
using namespace std;

//uint64_t tget(){
//    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now()).count();
//}


int main()
{
    sf::RenderWindow window(sf::VideoMode(1900, 1000), "My window"); // Create Window
    window.setFramerateLimit(60);     // Cap framerate

    int LeftCount = 1;
    int RightCount = 1;
    double scoreTotal = 0;
    double timeDif;
    double score;
    const double LeftTimes[10][2] = {{1, 2.5}, {2, 3.5}, {3, 4.5}, {4, 5.5}, {5, 7}, {6, 8.5}, {7, 10}, {8, 11.5}, {9, 13}, {10, 14}};
    const double RightTimes[10][2] = {{1, 3}, {2, 4}, {3, 5}, {4, 6}, {5, 7.5}, {6, 9.5}, {7, 10.5}, {8, 12}, {9, 13.5}, {10, 16}};

    // Create texture names
    sf::Texture texture1;
    sf::Texture texture2;
    sf::Texture texture3;
    sf::Texture texture4;
    sf::Texture texture5;

    // Create sprite names
    sf::Sprite sprite1;
    sf::Sprite sprite2;
    sf::Sprite sprite3;
    sf::Sprite sprite4;
    sf::Sprite licon;
    sf::Sprite lbase;
    sf::Sprite rbase;

    // Load textures
    texture1.loadFromFile("1Lep-1.jpg");
    texture2.loadFromFile("1Lep-2.jpg");
    texture3.loadFromFile("1Lep-3.jpg");
    texture4.loadFromFile("Licon.png");
    texture5.loadFromFile("Lbase.png");

    // Set sprite textures
    sprite1.setTexture(texture1);
    sprite2.setTexture(texture2);
    sprite3.setTexture(texture3);
    licon.setTexture(texture4);
    lbase.setTexture(texture5);
    rbase.setTexture(texture5);


    // Sprite scaling
    licon.scale(4,4);
    lbase.scale(4,4);
    rbase.scale(4,4);

    // Sprite position
    licon.setPosition(10,800);
    lbase.setPosition(1600,800);
    rbase.setPosition(1600,500);

    // Music code
    sf::Music music;
    music.openFromFile("Cmusic.ogg");

    music.play();    // Takes no arguments

    // Start clock
    sf::Clock clock;

    // run the program as long as the window is open
    while (window.isOpen())
    {
        sf::Time elapsed1 = clock.getElapsedTime();
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        // Draw clovers
        window.draw(licon);
        window.draw(lbase);
        window.draw(rbase);
        licon.move(3,0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
          window.draw(sprite1);
          sf::Time lHitTime = clock.getElapsedTime();
          float lHitSec = lHitTime.asSeconds();
          if (LeftCount >= 11){

          }
          else if (lHitSec > LeftTimes[LeftCount][2]) {
             LeftCount++;
          }
          else if (LeftTimes[LeftCount][2] <= (lHitSec + .5)) {
              timeDif = (LeftTimes[LeftCount][2]-(lHitSec));
              score = 1000 - (timeDif/(.5)*500);
              scoreTotal = scoreTotal + score;
              LeftCount++;
              cout << scoreTotal << endl;
          }
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
          window.draw(sprite3);
          sf::Time rHitTime = clock.getElapsedTime();
          float rHitSec = rHitTime.asSeconds();
          if (RightCount >= 11){

          }
          else if (rHitSec > RightTimes[RightCount][2]) {
             RightCount++;
          }
          else if (RightTimes[RightCount][2] <= (rHitSec + .5)) {
              timeDif = (RightTimes[RightCount][2]-(rHitSec));
              score = 1000 - (timeDif/(.5)*500);
              scoreTotal = scoreTotal + score;
              RightCount++;
              cout << scoreTotal << endl;
          }
        }
        else window.draw(sprite2);
        window.display();


//        If left or If right
//        |
//        If LeftTime[current LeftCount][2] </= (Current time + (a quarter of a second or so, whatever maximum amount of error we want to allow))

//        TimeDiff=(LeftTime[current LeftCount][2]-(Current time));//get score
//        Score=1000 - (TimeDiff/(maximum amount of error)*500); //generates the score as a value out of 1000 thats higher as the time difference gets closer to zero.
//        ScoreTotal=ScoreTotal + Score; //Add score to score total
//         increment LeftCount;


    }

    return 0;
}
