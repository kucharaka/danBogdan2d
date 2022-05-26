//
// Created by djety on 04.12.2021.
//

#ifndef BOGDAN_H
#define BOGDAN_H
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <chrono>
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"


class Bogdan {
private:
//Variables
    //path
    std::string PATH;
    //Window
    sf::RenderWindow* window;
    sf::Event ev;
    sf::VideoMode videoMode;

    //text
    sf::Font font;
    sf::Text text;
    sf::Text text2;

    //game objects
    int currentColor;

    sf::Music music;

    std::vector<sf::Vector2f> coordinates;
    std::vector<sf::Sprite> sprites;
    
    sf::Vector2f coordinates1;
    
    sf::Texture texture1;
    sf::Sprite sprite1;
    sf::Texture texture2;
    sf::Vector2f coordinates2;
    sf::Texture texture3;
    sf::Sprite sprite2;
    sf::Texture texture4;
    sf::Vector2f coordinates3;
    sf::Texture texture5;
    sf::Sprite sprite3;
    sf::Texture texture6;
    sf::Vector2f coordinates4;
    sf::Texture texture7;
    sf::Sprite sprite4;
    sf::Texture texture8;
    sf::Vector2f coordinates5;
    sf::Texture texture9;
    sf::Sprite sprite5;

    sf::Texture texture10;
    sf::Vector2f coordinates6;
    sf::Texture texture11;
    sf::Sprite sprite6;

    sf::Texture texture12;
    sf::Vector2f coordinates7;
    sf::Texture texture13;
    sf::Sprite sprite7;

    sf::Texture texture14;
    sf::Vector2f coordinates8;
    sf::Texture texture15;
    sf::Sprite sprite8;

    sf::Texture texture16;
    sf::Vector2f coordinates9;
    sf::Texture texture17;
    sf::Sprite sprite9;

    sf::Texture texture18;
    sf::Vector2f coordinates10;
    sf::Texture texture19;
    sf::Sprite sprite10;

    sf::Texture texture20;
    sf::Vector2f coordinates11;
     sf::Sprite sprite11;

     sf::Vector2f coordinates12;
     sf::Sprite sprite12;

     sf::Vector2f coordinates13;
     sf::Sprite sprite13;

     sf::Vector2f coordinates14;
     sf::Sprite sprite14;

     sf::Vector2f coordinates15;
     sf::Sprite sprite15;

     sf::Vector2f coordinates16;
     sf::Sprite sprite16;

     sf::Vector2f coordinates17;
     sf::Sprite sprite17;

     sf::Vector2f coordinates18;
     sf::Sprite sprite18;

     sf::Vector2f coordinates19;
     sf::Sprite sprite19;

     sf::Vector2f coordinates20;
     sf::Sprite sprite20;

    //game logic
    int points;
    float enemySpawnTimer;
    float enemySpawnTimerMax;
    int maxEnemies;
    int numOfSprite;

    //MousePositions
    sf::Vector2i mousePosWindow;

    //private functions
    void initVariables();
    void initWindow();
    void initEnemies();
public:
//constructor and destructor
    Bogdan();
    virtual ~Bogdan();

//    //vars
//    int hp;
//    int x;
//    int y;
    //accessors
    const bool running() const;

    //Functions
    void spawnEnemy();
    void textWriting();
    void backgroundColor(bool fromWhere);
    void pollEvents();
    void updateMousePositions();
    void updateEnemies();
    void update();
    void renderEnemies();
    void render();

};


#endif //BOGDAN_H
