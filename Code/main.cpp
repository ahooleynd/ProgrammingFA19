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
    sf::RenderWindow window(sf::VideoMode(1600, 1200), "My window"); // Create Window
    window.setFramerateLimit(60);     // Cap framerate

    int LeftCount = 1;
    int RightCount = 1;


    // Create texture names
    sf::Texture texture1;
    sf::Texture texture2;
    sf::Texture texture3;
    sf::Sprite sprite1;

    // Create sprite names
    sf::Sprite sprite2;
    sf::Sprite sprite3;
    sf::Sprite sprite4;

    // Load textures
    texture1.loadFromFile("1Lep-1.jpg");
    texture2.loadFromFile("1Lep-2.jpg");
    texture3.loadFromFile("1Lep-3.jpg");
    //if (!texture.loadFromFile("1Lep-2.jpg")){
      //return 1;
    //}
    sprite1.setTexture(texture1);
    sprite2.setTexture(texture2);
    sprite3.setTexture(texture3);
    sprite4.setTexture(texture2);
    //sprite2.setPosition(400,400);
    //sprite3.setPosition(800,800);

    // Sprite Scaling
    sprite1.scale(2,2);
    sprite2.scale(2,2);
    sprite3.scale(2,2);
    sprite4.scale(0.5,0.5);
    sprite4.setPosition(10,800);

    // Music code
    sf::Music music;
    music.openFromFile("Cmusic.ogg");

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
        music.play();    // Takes no arguments

        window.clear(sf::Color::Black);
        //window.draw(sprite2);
        //window.draw(sprite1);
        //window.draw(sprite3);
        window.draw(sprite4);
        sprite4.move(6,0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
          //sprite2.move(-1,0);
          window.draw(sprite1);
          //cout << elapsed1.asSeconds() << endl;

        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
          //sprite2.move(1,0);
          window.draw(sprite3);
        }
        else window.draw(sprite2);
        //sprite1.move(1,1);
        window.display();

    }

    return 0;
}
