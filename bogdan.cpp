//
// Created by djety on 04.12.2021.
//

#include "bogdan.h"

Bogdan::Bogdan() {
    this->initVariables();
    this->initWindow();
    this->initEnemies();

}

Bogdan::~Bogdan() {
    delete this->window;
}

//accessors
const bool Bogdan::running() const {
    return this->window->isOpen();
}

//private funcs
void Bogdan::initVariables() {
    this->window = nullptr;
    this->PATH = "D:/C/danBogdan2D/textures/";
//music
    this->music.openFromFile("../music/music1.ogg");
    this->music.play();
//color of background
    this->currentColor = 7; // kostyl for time
    this->points = 0;
    //text
    this->font.loadFromFile("../fonts/Samson.ttf");
    this->text.setFont( font);
    this->text.setStyle(sf::Text::Bold | sf::Text::Underlined);
    this->text.setCharacterSize(100);
    this->text.setFillColor(sf::Color::White);

    this->text2.setFont(font);
    this->text2.setCharacterSize(23);
    this->text2.setFillColor(sf::Color::White);


    this->sprites.reserve(20);
    this->coordinates.reserve(20);
    this->numOfSprite = std::rand()%20;
    //Bogdan logic
//    this->points = 0;
//    this->enemySpawnTimerMax = 1000.f;
//    this->enemySpawnTimer = this->enemySpawnTimerMax;
//
//    this->maxEnemies = 5;


//    this->hp = 100;
//    this->x = 400;
//    this->y = 300;
}

void Bogdan::initWindow() {
    this->videoMode.width = 1920;
    this->videoMode.height = 1080;
    this->window = new sf::RenderWindow(sf::VideoMode(this->videoMode),"danBogdan2D",sf::Style::Default);
    this->window->setFramerateLimit(60);
}


void Bogdan::initEnemies() {
//    sf::Texture::loadFromFile(this->PATH + "bogdan1.png")

    if (!this->texture1.loadFromFile("../textures/bogdan1.png")){
        std::cout <<"noway";
    }
    this->sprite1.setTexture(this->texture1);
    this->coordinates1.x = 200+std::rand()%(1400);
    this->coordinates1.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates1);
    this->sprites.push_back(this->sprite1);

    this->texture2.loadFromFile( "../textures/bogdan2.png");
    this->sprite2.setTexture(this->texture2);
    this->coordinates2.x = 200+std::rand()%(1400);
    this->coordinates2.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates2);
    this->sprites.push_back(this->sprite2);

    this->texture3.loadFromFile( "../textures/bogdan3.png");
    this->sprite3.setTexture(this->texture3);
    this->coordinates3.x = 200+std::rand()%(1400);
    this->coordinates3.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates3);
    this->sprites.push_back(this->sprite3);

    this->texture4.loadFromFile( "../textures/bogdan4.png");
    this->sprite4.setTexture(this->texture4);
    this->coordinates4.x = 200+std::rand()%(1400);
    this->coordinates4.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates4);
    this->sprites.push_back(this->sprite4);

    this->texture5.loadFromFile( "../textures/bogdan5.png");
    this->sprite5.setTexture(this->texture5);
    this->coordinates5.x = 200+std::rand()%(1400);
    this->coordinates5.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates5);
    this->sprites.push_back(this->sprite5);

    this->texture6.loadFromFile( "../textures/bogdan6.png");
    this->sprite6.setTexture(this->texture6);
    this->coordinates6.x = 200+std::rand()%(1400);
    this->coordinates6.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates6);
    this->sprites.push_back(this->sprite6);

    this->texture7.loadFromFile("../textures/bogdan7.png");
    this->sprite7.setTexture(this->texture7);
    this->coordinates7.x = 200+std::rand()%(1400);
    this->coordinates7.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates7);
    this->sprites.push_back(this->sprite7);

    this->texture8.loadFromFile("../textures/bogdan8.png");
    this->sprite8.setTexture(this->texture8);
    this->coordinates8.x = 200+std::rand()%(1400);
    this->coordinates8.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates8);
    this->sprites.push_back(this->sprite8);

    this->texture9.loadFromFile( "../textures/bogdan9.png");
    this->sprite9.setTexture(this->texture9);
    this->coordinates9.x = 200+std::rand()%(1400);
    this->coordinates9.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates9);
    this->sprites.push_back(this->sprite9);

    this->texture10.loadFromFile( "../textures/bogdan10.png");
    this->sprite10.setTexture(this->texture10);
    this->coordinates10.x = 200+std::rand()%(1400);
    this->coordinates10.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates10);
    this->sprites.push_back(this->sprite10);

    this->texture11.loadFromFile("../textures/anime1.png");
    this->sprite11.setTexture(this->texture11);
    this->coordinates11.x = 200+std::rand()%(1400);
    this->coordinates11.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates11);
    this->sprites.push_back(this->sprite11);
    
    this->texture12.loadFromFile("../textures/anime2.png");
    this->sprite12.setTexture(this->texture12);
    this->coordinates12.x = 200+std::rand()%(1400);
    this->coordinates12.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates12);
    this->sprites.push_back(this->sprite12);

    this->texture13.loadFromFile("../textures/anime3.png");
    this->sprite13.setTexture(this->texture13);
    this->coordinates13.x = 200+std::rand()%(1400);
    this->coordinates13.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates13);
    this->sprites.push_back(this->sprite13);

    this->texture14.loadFromFile( "../textures/anime4.png");
    this->sprite14.setTexture(this->texture14);
    this->coordinates14.x = 200+std::rand()%(1400);
    this->coordinates14.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates14);
    this->sprites.push_back(this->sprite14);

    this->texture15.loadFromFile( "../textures/anime5.png");
    this->sprite15.setTexture(this->texture15);
    this->coordinates15.x = 200+std::rand()%(1400);
    this->coordinates15.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates15);
    this->sprites.push_back(this->sprite15);

    this->texture16.loadFromFile( "../textures/anime6.png");
    this->sprite16.setTexture(this->texture16);
    this->coordinates16.x = 200+std::rand()%(1400);
    this->coordinates16.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates16);
    this->sprites.push_back(this->sprite16);

    this->texture17.loadFromFile( "../textures/anime7.png");
    this->sprite17.setTexture(this->texture17);
    this->coordinates17.x = 200+std::rand()%(1400);
    this->coordinates17.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates17);
    this->sprites.push_back(this->sprite17);

    this->texture18.loadFromFile( "../textures/anime8.png");
    this->sprite18.setTexture(this->texture18);
    this->coordinates18.x = 200+std::rand()%(1400);
    this->coordinates18.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates18);
    this->sprites.push_back(this->sprite18);

    this->texture19.loadFromFile("../textures/anime9.png");
    this->sprite19.setTexture(this->texture19);
    this->coordinates19.x = 200+std::rand()%(1400);
    this->coordinates19.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates19);
    this->sprites.push_back(this->sprite19);

    this->texture20.loadFromFile("../textures/anime10.png");
    this->sprite20.setTexture(this->texture20);
    this->coordinates20.x = 200+std::rand()%(1400);
    this->coordinates20.y = 100+std::rand()%(800);
    this->coordinates.push_back(this->coordinates20);
    this->sprites.push_back(this->sprite20);
    
    
    for (int i = 0; i < this->sprites.size(); ++i){
        this->sprites[i].setPosition(this->coordinates[i]);
    }

}

//funcs
void Bogdan::spawnEnemy() {
/**
 * @return void
 * spawns enemies and sets their colors and positions
 */
}
void Bogdan::textWriting() {
    this->text2.setString("lb when bodya, rb when animeshki");
    this->text.setString("SCORE " + std::to_string(this->points));
    this->window->draw(this->text);
    this->window->draw(this->text2);

}

void Bogdan::backgroundColor(bool fromWhere) {
    int temp = this->currentColor;

    if (this->currentColor == 7){
        this->currentColor = std::rand()%6;
        temp = this->currentColor;
    }
    if (fromWhere){
        this->currentColor = std::rand()%6;
        while (temp == this->currentColor){
            this->currentColor = std::rand()%6;
        }
        temp = this->currentColor;
    }
    switch(temp){
        case 0:
            this->window->clear(sf::Color::Red);
            break;
        case 1:
            this->window->clear(sf::Color::Blue);
            break;
        case 2:
            this->window->clear(sf::Color::Green);
            break;
        case 3:
            this->window->clear(sf::Color::Yellow);
            break;
        case 4:
            this->window->clear(sf::Color::Magenta);
            break;
        case 5:
            this->window->clear(sf::Color::Cyan);
            break;
    }

}

void Bogdan::pollEvents() {
    //event polling
    while(this->window->pollEvent(this->ev)){
        switch (this->ev.type) {
            case sf::Event::Closed:
                this->window->close();
                break;
            case sf::Event::KeyPressed:
                if (this->ev.key.code == sf::Keyboard::Escape) {
                    this->window->close();
                }
                break;

            case sf::Event::MouseButtonPressed:
                if (this->ev.mouseButton.button == sf::Mouse::Left) {
                    if (this->numOfSprite < 10) {
                        if (sf::Mouse::getPosition(*this->window).x > this->coordinates[this->numOfSprite].x &&
                            sf::Mouse::getPosition(*this->window).x < this->coordinates[this->numOfSprite].x + 100) {
                            if (sf::Mouse::getPosition(*this->window).y > this->coordinates[this->numOfSprite].y &&
                                sf::Mouse::getPosition(*this->window).y <
                                this->coordinates[this->numOfSprite].y + 100) {
                                this->points += 1;
                                this->coordinates[this->numOfSprite].x = 200+std::rand()%(1400);
                                this->coordinates[this->numOfSprite].y = 100+std::rand()%(800);
                                this->sprites[this->numOfSprite].setPosition(this->coordinates[this->numOfSprite]);

                                this->numOfSprite = rand()%20;
                            }
                            else {
                                this->points -= 2;
                            }
                        }
                        else {
                            this->points -= 2;
                        }
                    }

                    else {
                        this->points -= 2;
                    }
                }
                if (this->ev.mouseButton.button == sf::Mouse::Right){
                    if (this->numOfSprite >= 10) {
                        if (sf::Mouse::getPosition(*this->window).x > this->coordinates[this->numOfSprite].x &&
                            sf::Mouse::getPosition(*this->window).x < this->coordinates[this->numOfSprite].x + 100) {
                            if (sf::Mouse::getPosition(*this->window).y > this->coordinates[this->numOfSprite].y &&
                                sf::Mouse::getPosition(*this->window).y <
                                this->coordinates[this->numOfSprite].y + 100) {
                                this->points += 1;
                                this->coordinates[this->numOfSprite].x = 200+std::rand()%(1400);
                                this->coordinates[this->numOfSprite].y = 100+std::rand()%(800);
                                this->sprites[this->numOfSprite].setPosition(this->coordinates[this->numOfSprite]);
                                this->numOfSprite = rand()%20;
                            }
                            else {
                                this->points -= 2;
                            }
                        }
                        else {
                            this->points -= 2;
                        }
                    }
                    else {
                        this->points -= 2;
                    }
                }
                break;
                }
        }
    }

void Bogdan::updateMousePositions() {
    /*
     * @return void
     * mouse pos relative to window
     * */
    this->mousePosWindow = sf::Mouse::getPosition(*this->window);

}
void Bogdan::updateEnemies() {
    /**
     * @return void
     * updates enemies timer and spawns the enemies
     */

//    if (this->enemies.size() < this->maxEnemies) {
//        if (this->enemySpawnTimer >= this->enemySpawnTimerMax) {
//            this->spawnEnemy();
//            this->enemySpawnTimer = 0.f;
//        }
//        else {
//            this->enemySpawnTimer += 1.f;
//        }
//    }
}

void Bogdan::update() {
    this->pollEvents();
    this->updateMousePositions();
    this->updateEnemies();
    //get mouse coord
//    std::cout <<"Mouse pos: x" << sf::Mouse::getPosition().x << " y: " << sf::Mouse::getPosition().y << std::endl;
}

void Bogdan::renderEnemies() {
    this->window->draw(this->sprites[this->numOfSprite]);
}

void Bogdan::render() {
    // clear old frame
    // render new objects
    // display frame
    static unsigned int timeBegin;
    static unsigned int timeEnd;
    static unsigned int timeDuration;

    if (this->currentColor == 7) {
       timeBegin = clock();
    }
    timeEnd = clock();
    timeDuration = timeEnd - timeBegin;
    if (timeDuration > 363){
       timeBegin = clock();
       this->backgroundColor(true);
    }
    else {
        this->backgroundColor(false);
    }



    //draw
    this->renderEnemies();

    this->textWriting();


    this->window->display();
}
