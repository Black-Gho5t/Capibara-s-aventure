#include "../header/game.h"

sf::CircleShape circle(2.0f, 360u);

void Begin(const sf::Window& window) {
     
    circle.setOrigin(sf::Vector2f(circle.getRadius(), circle.getRadius()));
    circle.setFillColor(sf::Color::Blue);
}

void Update(float deltaTime) {
    // Update game logic here using deltaTime
}



void Render(Renderer& rederer, sf::RenderTarget& window) {
    // Render game objects here
    window.draw(circle);
}