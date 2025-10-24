#include <SFML/Graphics.hpp>
#include "../header/game.h"
#include "../header/Camera.h"
#include "../header/Renderer.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1200, 900), "Super UPB");
    sf::Clock deltaClock;
    Camera camera;
    Renderer renderer(window);


    sf::Texture texture;
    if(!texture.loadFromFile("../assets/bloque.jpg")){
        return -1;
    }



    Begin(window);

    while (window.isOpen()){
        float deltaTime = deltaClock.restart().asSeconds();

        sf::Event event{};
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.setView(camera.GetView(window.getSize()));
        Update(deltaTime);

        window.clear();
        Render(window);
        window.display();
    }
    
    
}

