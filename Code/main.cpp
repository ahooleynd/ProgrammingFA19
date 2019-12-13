//#include <chrono>
//#include <cstdint>
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio/Music.hpp>
using namespace std;


int main()
{
    sf::RenderWindow window(sf::VideoMode(1900, 950), "My window"); // Create Window
    window.setFramerateLimit(60);     // Cap framerate

    int LeftCount = 0;
    int RightCount = 0;
    int rChgStts = 0;
    int lChgStts = 0;

    double scoreTotal = 0;
    double timeDif;
    double score;
    const double LeftTimes[29][2] = {{1, 5}, {2, 7.5}, {3, 8.75}, {4, 9.5}, {5, 12.25}, {6, 13.25}, {7, 14.25}, {8, 15.66}, {9, 16.5}, {10, 18}, {11, 18.75}, {12, 22.25}, {13, 23}, {14, 25.75}, {15, 27}, {16, 27.5}, {17, 29}, {18, 30.66}, {19, 31.75}, {20, 32.5}, {21, 34.1}, {22, 34.8}, {23, 36.3}, {24, 37}, {25, 40.5}, {26, 41.25}, {27, 42.4}, {28, 45.15}, {29, 48.15}};
    const double RightTimes[29][2] = {{1, 7.25}, {2, 8.5}, {3, 9}, {4, 11.875}, {5, 13}, {6, 13.5}, {7, 15.33}, {8, 16}, {9, 17.66}, {10, 18.33}, {11, 19.75}, {12, 22.65}, {13, 23.25}, {14, 26}, {15, 27.25}, {16, 28}, {17, 30.33}, {18, 31.5}, {19, 32}, {20, 33.7}, {21, 34.5}, {22, 35.9}, {23, 36.7}, {24, 39.3}, {25, 40.875}, {26, 41.6}, {27, 44}, {28, 46.3}, {29, 48.7}};



    // Create texture names
    sf::Texture texture1;
    sf::Texture texture2;
    sf::Texture texture3;
    sf::Texture texture4;
    sf::Texture texture5;
    sf::Texture texture6;
    sf::Texture texture7;
    sf::Texture texture8;

    // Create sprite names
    sf::Sprite sprite1;
    sf::Sprite sprite2;
    sf::Sprite sprite3;
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
    sf::Sprite licon11;
    sf::Sprite licon12;
    sf::Sprite licon13;
    sf::Sprite licon14;
    sf::Sprite licon15;
    sf::Sprite licon16;
    sf::Sprite licon17;
    sf::Sprite licon18;
    sf::Sprite licon19;
    sf::Sprite licon20;
    sf::Sprite licon21;
    sf::Sprite licon22;
    sf::Sprite licon23;
    sf::Sprite licon24;
    sf::Sprite licon25;
    sf::Sprite licon26;
    sf::Sprite licon27;
    sf::Sprite licon28;
    sf::Sprite licon29;
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
    sf::Sprite ricon11;
    sf::Sprite ricon12;
    sf::Sprite ricon13;
    sf::Sprite ricon14;
    sf::Sprite ricon15;
    sf::Sprite ricon16;
    sf::Sprite ricon17;
    sf::Sprite ricon18;
    sf::Sprite ricon19;
    sf::Sprite ricon20;
    sf::Sprite ricon21;
    sf::Sprite ricon22;
    sf::Sprite ricon23;
    sf::Sprite ricon24;
    sf::Sprite ricon25;
    sf::Sprite ricon26;
    sf::Sprite ricon27;
    sf::Sprite ricon28;
    sf::Sprite ricon29;
    sf::Sprite lbase;
    sf::Sprite rbase;



    // Load textures
    texture1.loadFromFile("1Lep-1.jpg");
    texture2.loadFromFile("1Lep-2.jpg");
    texture3.loadFromFile("1Lep-3.jpg");
    texture4.loadFromFile("Licon.png");
    texture5.loadFromFile("Lbase.png");
    texture6.loadFromFile("Lgood.png");
    texture7.loadFromFile("Lgreat.png");
    texture8.loadFromFile("lperfect.png");


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
    licon11.setTexture(texture4);
    licon12.setTexture(texture4);
    licon13.setTexture(texture4);
    licon14.setTexture(texture4);
    licon15.setTexture(texture4);
    licon16.setTexture(texture4);
    licon17.setTexture(texture4);
    licon18.setTexture(texture4);
    licon19.setTexture(texture4);
    licon20.setTexture(texture4);
    licon21.setTexture(texture4);
    licon22.setTexture(texture4);
    licon23.setTexture(texture4);
    licon24.setTexture(texture4);
    licon25.setTexture(texture4);
    licon26.setTexture(texture4);
    licon27.setTexture(texture4);
    licon28.setTexture(texture4);
    licon29.setTexture(texture4);
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
    ricon11.setTexture(texture4);
    ricon12.setTexture(texture4);
    ricon13.setTexture(texture4);
    ricon14.setTexture(texture4);
    ricon15.setTexture(texture4);
    ricon16.setTexture(texture4);
    ricon17.setTexture(texture4);
    ricon18.setTexture(texture4);
    ricon19.setTexture(texture4);
    ricon20.setTexture(texture4);
    ricon21.setTexture(texture4);
    ricon22.setTexture(texture4);
    ricon23.setTexture(texture4);
    ricon24.setTexture(texture4);
    ricon25.setTexture(texture4);
    ricon26.setTexture(texture4);
    ricon27.setTexture(texture4);
    ricon28.setTexture(texture4);
    ricon29.setTexture(texture4);
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
    licon11.scale(4,4);
    licon12.scale(4,4);
    licon13.scale(4,4);
    licon14.scale(4,4);
    licon15.scale(4,4);
    licon16.scale(4,4);
    licon17.scale(4,4);
    licon18.scale(4,4);
    licon19.scale(4,4);
    licon20.scale(4,4);
    licon21.scale(4,4);
    licon22.scale(4,4);
    licon23.scale(4,4);
    licon24.scale(4,4);
    licon25.scale(4,4);
    licon26.scale(4,4);
    licon27.scale(4,4);
    licon28.scale(4,4);
    licon29.scale(4,4);
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
    ricon11.scale(4,4);
    ricon12.scale(4,4);
    ricon13.scale(4,4);
    ricon14.scale(4,4);
    ricon15.scale(4,4);
    ricon16.scale(4,4);
    ricon17.scale(4,4);
    ricon18.scale(4,4);
    ricon19.scale(4,4);
    ricon20.scale(4,4);
    ricon21.scale(4,4);
    ricon22.scale(4,4);
    ricon23.scale(4,4);
    ricon24.scale(4,4);
    ricon25.scale(4,4);
    ricon26.scale(4,4);
    ricon27.scale(4,4);
    ricon28.scale(4,4);
    ricon29.scale(4,4);
    lbase.scale(4,4);
    rbase.scale(4,4);


    // Clover movement speed
    int speed = 12;    // 6 pixels/frame, 360 pixels/second

    // Sprite position
    int startpos = 1600;
    int lh = 700;
    int rh = 500;
    licon1.setPosition(startpos-(60*speed*LeftTimes[0][1]),lh);
    licon2.setPosition(startpos-(60*speed*LeftTimes[1][1]),lh);
    licon3.setPosition(startpos-(60*speed*LeftTimes[2][1]),lh);
    licon4.setPosition(startpos-(60*speed*LeftTimes[3][1]),lh);
    licon5.setPosition(startpos-(60*speed*LeftTimes[4][1]),lh);
    licon6.setPosition(startpos-(60*speed*LeftTimes[5][1]),lh);
    licon7.setPosition(startpos-(60*speed*LeftTimes[6][1]),lh);
    licon8.setPosition(startpos-(60*speed*LeftTimes[7][1]),lh);
    licon9.setPosition(startpos-(60*speed*LeftTimes[8][1]),lh);
    licon10.setPosition(startpos-(60*speed*LeftTimes[9][1]),lh);
    licon11.setPosition(startpos-(60*speed*LeftTimes[10][1]),lh);
    licon12.setPosition(startpos-(60*speed*LeftTimes[11][1]),lh);
    licon13.setPosition(startpos-(60*speed*LeftTimes[12][1]),lh);
    licon14.setPosition(startpos-(60*speed*LeftTimes[13][1]),lh);
    licon15.setPosition(startpos-(60*speed*LeftTimes[14][1]),lh);
    licon16.setPosition(startpos-(60*speed*LeftTimes[15][1]),lh);
    licon17.setPosition(startpos-(60*speed*LeftTimes[16][1]),lh);
    licon18.setPosition(startpos-(60*speed*LeftTimes[17][1]),lh);
    licon19.setPosition(startpos-(60*speed*LeftTimes[18][1]),lh);
    licon20.setPosition(startpos-(60*speed*LeftTimes[19][1]),lh);
    licon21.setPosition(startpos-(60*speed*LeftTimes[20][1]),lh);
    licon22.setPosition(startpos-(60*speed*LeftTimes[21][1]),lh);
    licon23.setPosition(startpos-(60*speed*LeftTimes[22][1]),lh);
    licon24.setPosition(startpos-(60*speed*LeftTimes[23][1]),lh);
    licon25.setPosition(startpos-(60*speed*LeftTimes[24][1]),lh);
    licon26.setPosition(startpos-(60*speed*LeftTimes[25][1]),lh);
    licon27.setPosition(startpos-(60*speed*LeftTimes[26][1]),lh);
    licon28.setPosition(startpos-(60*speed*LeftTimes[27][1]),lh);
    licon29.setPosition(startpos-(60*speed*LeftTimes[28][1]),lh);
    ricon1.setPosition(startpos-(60*speed*RightTimes[0][1]),rh);
    ricon2.setPosition(startpos-(60*speed*RightTimes[1][1]),rh);
    ricon3.setPosition(startpos-(60*speed*RightTimes[2][1]),rh);
    ricon4.setPosition(startpos-(60*speed*RightTimes[3][1]),rh);
    ricon5.setPosition(startpos-(60*speed*RightTimes[4][1]),rh);
    ricon6.setPosition(startpos-(60*speed*RightTimes[5][1]),rh);
    ricon7.setPosition(startpos-(60*speed*RightTimes[6][1]),rh);
    ricon8.setPosition(startpos-(60*speed*RightTimes[7][1]),rh);
    ricon9.setPosition(startpos-(60*speed*RightTimes[8][1]),rh);
    ricon10.setPosition(startpos-(60*speed*RightTimes[9][1]),rh);
    ricon11.setPosition(startpos-(60*speed*RightTimes[10][1]),rh);
    ricon12.setPosition(startpos-(60*speed*RightTimes[11][1]),rh);
    ricon13.setPosition(startpos-(60*speed*RightTimes[12][1]),rh);
    ricon14.setPosition(startpos-(60*speed*RightTimes[13][1]),rh);
    ricon15.setPosition(startpos-(60*speed*RightTimes[14][1]),rh);
    ricon16.setPosition(startpos-(60*speed*RightTimes[15][1]),rh);
    ricon17.setPosition(startpos-(60*speed*RightTimes[16][1]),rh);
    ricon18.setPosition(startpos-(60*speed*RightTimes[17][1]),rh);
    ricon19.setPosition(startpos-(60*speed*RightTimes[18][1]),rh);
    ricon20.setPosition(startpos-(60*speed*RightTimes[19][1]),rh);
    ricon21.setPosition(startpos-(60*speed*RightTimes[20][1]),rh);
    ricon22.setPosition(startpos-(60*speed*RightTimes[21][1]),rh);
    ricon23.setPosition(startpos-(60*speed*RightTimes[22][1]),rh);
    ricon24.setPosition(startpos-(60*speed*RightTimes[23][1]),rh);
    ricon25.setPosition(startpos-(60*speed*RightTimes[24][1]),rh);
    ricon26.setPosition(startpos-(60*speed*RightTimes[25][1]),rh);
    ricon27.setPosition(startpos-(60*speed*RightTimes[26][1]),rh);
    ricon28.setPosition(startpos-(60*speed*RightTimes[27][1]),rh);
    ricon29.setPosition(startpos-(60*speed*RightTimes[28][1]),rh);
    lbase.setPosition(1600,lh);
    rbase.setPosition(1600,rh);

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
        window.draw(licon11);
        window.draw(licon12);
        window.draw(licon13);
        window.draw(licon14);
        window.draw(licon15);
        window.draw(licon16);
        window.draw(licon17);
        window.draw(licon18);
        window.draw(licon19);
        window.draw(licon20);
        window.draw(licon21);
        window.draw(licon22);
        window.draw(licon23);
        window.draw(licon24);
        window.draw(licon25);
        window.draw(licon26);
        window.draw(licon27);
        window.draw(licon28);
        window.draw(licon29);
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
        window.draw(ricon11);
        window.draw(ricon12);
        window.draw(ricon13);
        window.draw(ricon14);
        window.draw(ricon15);
        window.draw(ricon16);
        window.draw(ricon17);
        window.draw(ricon18);
        window.draw(ricon19);
        window.draw(ricon20);
        window.draw(ricon21);
        window.draw(ricon22);
        window.draw(ricon23);
        window.draw(ricon24);
        window.draw(ricon25);
        window.draw(ricon26);
        window.draw(ricon27);
        window.draw(ricon28);
        window.draw(ricon29);
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
        licon11.move(speed,0);
        licon12.move(speed,0);
        licon13.move(speed,0);
        licon14.move(speed,0);
        licon15.move(speed,0);
        licon16.move(speed,0);
        licon17.move(speed,0);
        licon18.move(speed,0);
        licon19.move(speed,0);
        licon20.move(speed,0);
        licon21.move(speed,0);
        licon22.move(speed,0);
        licon23.move(speed,0);
        licon24.move(speed,0);
        licon25.move(speed,0);
        licon26.move(speed,0);
        licon27.move(speed,0);
        licon28.move(speed,0);
        licon29.move(speed,0);
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
        ricon11.move(speed,0);
        ricon12.move(speed,0);
        ricon13.move(speed,0);
        ricon14.move(speed,0);
        ricon15.move(speed,0);
        ricon16.move(speed,0);
        ricon17.move(speed,0);
        ricon18.move(speed,0);
        ricon19.move(speed,0);
        ricon20.move(speed,0);
        ricon21.move(speed,0);
        ricon22.move(speed,0);
        ricon23.move(speed,0);
        ricon24.move(speed,0);
        ricon25.move(speed,0);
        ricon26.move(speed,0);
        ricon27.move(speed,0);
        ricon28.move(speed,0);
        ricon29.move(speed,0);

        sf::Time timeCheck = clock.getElapsedTime();
        float fltTime = timeCheck.asSeconds();

        if (LeftCount >= 1){
          if (fltTime >= (LeftTimes[LeftCount-1][1] + .1)){
                lbase.setTexture(texture5);
          }
        }

        if (RightCount >= 1){
          if (fltTime >= (RightTimes[RightCount-1][1] + .1)){
                rbase.setTexture(texture5);
          }
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
          window.draw(sprite1);
          sf::Time lHitTime = clock.getElapsedTime();
          float lHitSec = lHitTime.asSeconds();
          if (LeftCount >= 29){

          }
          else if (lHitSec > LeftTimes[LeftCount][1]) {
             LeftCount++;
          }
          else if (LeftTimes[LeftCount][1] <= (lHitSec + .5)) {
              timeDif = (LeftTimes[LeftCount][1]-(lHitSec));
              if (timeDif < .1){
                lbase.setTexture(texture8);
              }
              else if (timeDif < .2){
                lbase.setTexture(texture7);
              }
              else if (timeDif < .3){
                lbase.setTexture(texture6);
              }
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
          if (RightCount >= 29){

          }
          else if (rHitSec > RightTimes[RightCount][1]) {
             RightCount++;
          }
          else if (RightTimes[RightCount][1] <= (rHitSec + .5)) {
              timeDif = (RightTimes[RightCount][1]-(rHitSec));
                if (timeDif < .1){
                  rbase.setTexture(texture8);
                }
                else if (timeDif < .2){
                  rbase.setTexture(texture7);
                }
                else if (timeDif < .3){
                  rbase.setTexture(texture6);
                }
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
