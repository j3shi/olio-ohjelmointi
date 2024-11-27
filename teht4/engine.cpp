#include "engine.h"

Engine::Engine()
{
}

Engine::Engine(int, double)
{
    cout << "Engine konstruktori" << endl;
}

int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setHorsepower(int h)
{
    horsepower = h;
}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double d)
{
    displacement = d;
}


