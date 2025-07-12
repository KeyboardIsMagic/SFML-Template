#include <SFML/Graphics.hpp>
#include "window_config.hpp"


int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({ winconf::window_size.x, winconf::window_size.y }), "SFML Template");
    window.setFramerateLimit(winconf::max_framerate);

    while (window.isOpen())
    {
        winconf::processEvents(window);

        window.clear();
        window.display();
    }
}
