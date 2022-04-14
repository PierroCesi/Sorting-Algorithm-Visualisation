//
// Created by Pierre Forques on 13/04/2022.
//

#ifndef SORTVISUALISATION_MODEL_H
#define SORTVISUALISATION_MODEL_H


#include <vector>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Model {
private:

public:
    std::vector<sf::RectangleShape> _rectangles;
    std::vector<int> _list;
};


#endif //SORTVISUALISATION_MODEL_H
