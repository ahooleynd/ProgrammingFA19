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

    // Scoring initialization
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
    sf::Sprite licon1;
    sf::Sprite licon2;
    sf::Sprite licon3;
    sf::Sprite licon4;
    sf::Sprite licon5;
    sf::Sprite licon6;
    sf::Sprite licon7;
    sf::Sprite licon8;
    sf::Sprite licon9;
    sf::Sprite licon10;
    sf::Sprite ricon1;
    sf::Sprite ricon2;
    sf::Sprite ricon3;
    sf::Sprite ricon4;
    sf::Sprite ricon5;
    sf::Sprite ricon6;
    sf::Sprite ricon7;
    sf::Sprite ricon8;
    sf::Sprite ricon9;
    sf::Sprite ricon10;
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
    licon1.setTexture(texture4);
    licon2.setTexture(texture4);
    licon3.setTexture(texture4);
    licon4.setTexture(texture4);
    licon5.setTexture(texture4);
    licon6.setTexture(texture4);
    licon7.setTexture(texture4);
    licon8.setTexture(texture4);
    licon9.setTexture(texture4);
    licon10.setTexture(texture4);
    ricon1.setTexture(texture4);
    ricon2.setTexture(texture4);
    ricon3.setTexture(texture4);
    ricon4.setTexture(texture4);
    ricon5.setTexture(texture4);
    ricon6.setTexture(texture4);
    ricon7.setTexture(texture4);
    ricon8.setTexture(texture4);
    ricon9.setTexture(texture4);
    ricon10.setTexture(texture4);
    lbase.setTexture(texture5);
    rbase.setTexture(texture5);


    // Sprite scaling
    licon1.scale(4,4);
    licon2.scale(4,4);
    licon3.scale(4,4);
    licon4.scale(4,4);
    licon5.scale(4,4);
    licon6.scale(4,4);
    licon7.scale(4,4);
    licon8.scale(4,4);
    licon9.scale(4,4);
    licon10.scale(4,4);
    ricon1.scale(4,4);
    ricon2.scale(4,4);
    ricon3.scale(4,4);
    ricon4.scale(4,4);
    ricon5.scale(4,4);
    ricon6.scale(4,4);
    ricon7.scale(4,4);
    ricon8.scale(4,4);
    ricon9.scale(4,4);
    ricon10.scale(4,4);
    lbase.scale(4,4);
    rbase.scale(4,4);

    // Clover movement speed
    int speed = 12;    // 6 pixels/frame, 360 pixels/second

    // Sprite position
    int lstartpos = 100;
    int rstartpos = 100;
    int rh = 500;
    licon1.setPosition(lstartpos,800);
    licon2.setPosition(lstartpos-(60*speed*1),800);
    licon3.setPosition(lstartpos-(60*speed*2),800);
    licon4.setPosition(lstartpos-(60*speed*3),800);
    licon5.setPosition(lstartpos-(60*speed*4),800);
    licon6.setPosition(lstartpos-(60*speed*5.5),800);
    licon7.setPosition(lstartpos-(60*speed*7),800);
    licon8.setPosition(lstartpos-(60*speed*8.5),800);
    licon9.setPosition(lstartpos-(60*speed*10),800);
    licon10.setPosition(lstartpos-(60*speed*11),800);
    ricon1.setPosition(lstartpos,rh);
    ricon2.setPosition(lstartpos-(60*speed*1),rh);
    ricon3.setPosition(lstartpos-(60*speed*2),rh);
    ricon4.setPosition(lstartpos-(60*speed*3),rh);
    ricon5.setPosition(lstartpos-(60*speed*4),rh);
    ricon6.setPosition(lstartpos-(60*speed*5.5),rh);
    ricon7.setPosition(lstartpos-(60*speed*7),rh);
    ricon8.setPosition(lstartpos-(60*speed*8.5),rh);
    ricon9.setPosition(lstartpos-(60*speed*10),rh);
    ricon10.setPosition(lstartpos-(60*speed*11),rh);
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
        window.draw(licon1);
        window.draw(licon2);
        window.draw(licon3);
        window.draw(licon4);
        window.draw(licon5);
        window.draw(licon6);
        window.draw(licon7);
        window.draw(licon8);
        window.draw(licon9);
        window.draw(licon10);
        window.draw(ricon1);
        window.draw(ricon2);
        window.draw(ricon3);
        window.draw(ricon4);
        window.draw(ricon5);
        window.draw(ricon6);
        window.draw(ricon7);
        window.draw(ricon8);
        window.draw(ricon9);
        window.draw(ricon10);
        window.draw(lbase);
        window.draw(rbase);

        // Move sprites
        licon1.move(speed,0);
        licon2.move(speed,0);
        licon3.move(speed,0);
        licon4.move(speed,0);
        licon5.move(speed,0);
        licon6.move(speed,0);
        licon7.move(speed,0);
        licon8.move(speed,0);
        licon9.move(speed,0);
        licon10.move(speed,0);
        ricon1.move(speed,0);
        ricon2.move(speed,0);
        ricon3.move(speed,0);
        ricon4.move(speed,0);
        ricon5.move(speed,0);
        ricon6.move(speed,0);
        ricon7.move(speed,0);
        ricon8.move(speed,0);
        ricon9.move(speed,0);
        ricon10.move(speed,0);

        // Draw small angry irish man
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
