#ifndef FLAPPY_BIRD_COURSE_WORK_GAMESTATE_H
#define FLAPPY_BIRD_COURSE_WORK_GAMESTATE_H

#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "State.h"
#include "Game.h"
#include "Pipe.h"
#include "Land.h"
#include "Bird.h"
#include "Collision.h"
#include "Flash.h"
#include "HUD.h"

class GameState : public State {
public:
    GameState(GameDataRef data);

    void Init();

    void HandleInput();

    void Update(float dt);

    void Draw(float dt);

private:
    GameDataRef _data;

    sf::Sprite _background;

    Pipe *pipe;
    Land *land;
    Bird *bird;
    Collision collision;
    Flash *flash;
    HUD *hud;

    sf::Clock clock;

    int _gameState;

    sf::RectangleShape _gameOverFlash;
    bool _flashOn;

    int _score;

    sf::SoundBuffer _hitSoundBuffer;
    sf::SoundBuffer _wingSoundBuffer;
    sf::SoundBuffer _pointSoundBuffer;

    sf::Sound _hitSound;
    sf::Sound _wingSound;
    sf::Sound _pointSound;
};


#endif //FLAPPY_BIRD_COURSE_WORK_GAMESTATE_H
