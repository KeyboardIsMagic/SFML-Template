#include "window_config.hpp"

namespace winconf
{

    // Close the window with the title bar 'x' or ESC key
    void processEvents(sf::Window& window)
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
            {
                window.close();
            }
        }
    }


}