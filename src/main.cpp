#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/WindowStyle.hpp>
#include <fstream>
#include <iostream>
#include <vector>
const int width = 800;
const int height = 600;

std::vector<std::string>pressedKeys;

int main()
{
    // create the window
    // sf::RenderWindow window(sf::VideoMode(window[0].width,window[0].height), "My window is that time i got reincarneated as a slime");
    
    
    sf::RenderWindow window(sf::VideoMode(800,600),"Dyanmic text");
    window.setFramerateLimit(60);
    
    
    sf::Font FFont;
    FFont.loadFromFile("fonts/calibri.ttf");
    
    

    sf::Text text;
    text.setFont(FFont);
    text.setFillColor(sf::Color(0xFF,0xFF,0xFF));
    
    
    bool save = false;
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed && event.type == sf::Event::KeyReleased){
                if(event.key.control == true && event.key.code == sf::Keyboard::S) {
                    save = true;
                    std::cout << "ctrl + s\n";
                }
            }

            if (event.type == sf::Event::KeyPressed) {
                
                std::cout << "Key pressed with code: " << event.key.code << "\n";
                switch (event.key.code) {
                    case sf::Keyboard::Escape:
                        window.close();
                        break;
                    case sf::Keyboard::Unknown:
                        break;
                    case sf::Keyboard::A:
                        pressedKeys.push_back("a");
                        break;
                    case sf::Keyboard::B:
                        pressedKeys.push_back("b");
                        break;
                    case sf::Keyboard::C:
                        pressedKeys.push_back("c");
                        break;
                    case sf::Keyboard::D:
                        pressedKeys.push_back("d");
                        break;
                    case sf::Keyboard::E:
                        pressedKeys.push_back("e");
                        break;
                    case sf::Keyboard::F:
                        pressedKeys.push_back("f");
                        break;
                    case sf::Keyboard::G:
                        pressedKeys.push_back("g");
                        break;
                    case sf::Keyboard::H:
                        pressedKeys.push_back("h");
                        break;
                    case sf::Keyboard::I:
                        pressedKeys.push_back("i");
                        break;
                    case sf::Keyboard::J: 
                        pressedKeys.push_back("j");
                        break;
                    case sf::Keyboard::K:
                        pressedKeys.push_back("k");
                        break;
                    case sf::Keyboard::L:
                        pressedKeys.push_back("l");
                        break;
                    case sf::Keyboard::M:
                        pressedKeys.push_back("m");
                        break;
                    case sf::Keyboard::N:
                        pressedKeys.push_back("n");
                        break;
                    case sf::Keyboard::O:
                        pressedKeys.push_back("o");
                        break;
                    case sf::Keyboard::P:
                        pressedKeys.push_back("p");
                        break;
                    case sf::Keyboard::Q:
                        pressedKeys.push_back("q");
                        break;
                    case sf::Keyboard::R:
                        pressedKeys.push_back("r");
                        break;
                    case sf::Keyboard::S:   
                        pressedKeys.push_back("s");
                        break;
                    case sf::Keyboard::T:
                        pressedKeys.push_back("t");
                        break;
                    case sf::Keyboard::U:
                        pressedKeys.push_back("u");
                        break;
                    case sf::Keyboard::V:
                        pressedKeys.push_back("v");
                        break;
                    case sf::Keyboard::W: 
                        pressedKeys.push_back("w");
                        break;
                    case sf::Keyboard::X:
                        pressedKeys.push_back("x");
                        break;
                    case sf::Keyboard::Y:
                        pressedKeys.push_back("y");
                        break;
                    case sf::Keyboard::Z:
                        pressedKeys.push_back("z");
                        break;
                    case sf::Keyboard::Num0:
                        pressedKeys.push_back("0");
                        break;
                    case sf::Keyboard::Num1:
                        pressedKeys.push_back("1");
                        break;
                    case sf::Keyboard::Num2:
                        pressedKeys.push_back("2");
                        break;
                    case sf::Keyboard::Num3:
                        pressedKeys.push_back("3");
                        break;
                    case sf::Keyboard::Num4:
                        pressedKeys.push_back("4");
                        break;
                    case sf::Keyboard::Num5:
                        pressedKeys.push_back("5");
                        break;
                    case sf::Keyboard::Num6:
                        pressedKeys.push_back("6");
                        break;
                    case sf::Keyboard::Num7:
                        pressedKeys.push_back("7");
                        break;
                    case sf::Keyboard::Num8:
                        pressedKeys.push_back("8");
                        break;
                    case sf::Keyboard::Num9:
                        pressedKeys.push_back("9");
                        break;
                    case sf::Keyboard::LControl:
                        break;
                    case sf::Keyboard::LShift:
                        break;
                    case sf::Keyboard::LAlt:
                        break;
                    case sf::Keyboard::LSystem: 
                        break;
                    case sf::Keyboard::RControl:
                        break;
                    case sf::Keyboard::RShift:
                        break;
                    case sf::Keyboard::RAlt:
                        break;
                    case sf::Keyboard::RSystem:
                        break;
                    case sf::Keyboard::Menu:

                        break;
                    case sf::Keyboard::LBracket:
                        pressedKeys.push_back("(");
                        break;
                    case sf::Keyboard::RBracket:
                        pressedKeys.push_back(")");
                        break;
                    case sf::Keyboard::Semicolon:
                        pressedKeys.push_back(";");
                        break;
                    case sf::Keyboard::Comma:
                        pressedKeys.push_back(",");
                        break;
                    case sf::Keyboard::Period:
                        pressedKeys.push_back(".");
                        break;
                    case sf::Keyboard::Quote:
                        pressedKeys.push_back("""");
                        break;
                    case sf::Keyboard::Slash:
                        pressedKeys.push_back("/");
                        break;
                    case sf::Keyboard::Backslash:   
                        pressedKeys.push_back("\\");
                        break;
                    case sf::Keyboard::Tilde:
                        pressedKeys.push_back("`");
                        break;
                    case sf::Keyboard::Equal:
                        pressedKeys.push_back("=");
                        break;
                    case sf::Keyboard::Hyphen:
                        pressedKeys.push_back("-");
                        break;
                    case sf::Keyboard::Space:
                        pressedKeys.push_back(" ");
                        break;
                    case sf::Keyboard::Enter:
                        pressedKeys.push_back("\n");
                        break;
                    case sf::Keyboard::Backspace:
                        if (pressedKeys.size() > 0) {
                            pressedKeys.pop_back();
                            
                        }
                        
                        break;
                    case sf::Keyboard::Tab: 
                        break;
                    case sf::Keyboard::PageUp:
                        break;
                    case sf::Keyboard::PageDown:
                        break;
                    case sf::Keyboard::End:
                        break;
                    case sf::Keyboard::Home:
                        break;
                    case sf::Keyboard::Insert:
                        break;
                    case sf::Keyboard::Delete:
                        break;
                    case sf::Keyboard::Add:
                        break;
                    case sf::Keyboard::Subtract:
                        break;
                    case sf::Keyboard::Multiply:
                        break;
                    case sf::Keyboard::Divide:
                        break;
                    case sf::Keyboard::Left:
                        break;
                    case sf::Keyboard::Right:
                        break;
                    case sf::Keyboard::Up:
                        break;
                    case sf::Keyboard::Down:
                        break;
                    case sf::Keyboard::Numpad0:
                        break;
                    case sf::Keyboard::Numpad1: 
                        break;
                    case sf::Keyboard::Numpad2:
                        break;
                    case sf::Keyboard::Numpad3:
                        break;
                    case sf::Keyboard::Numpad4:
                        break;
                    case sf::Keyboard::Numpad5:
                        break;
                    case sf::Keyboard::Numpad6:
                        break;
                    case sf::Keyboard::Numpad7:
                        break;
                    case sf::Keyboard::Numpad8:
                        break;
                    case sf::Keyboard::Numpad9:
                        break;
                    case sf::Keyboard::F1:
                        break;
                    case sf::Keyboard::F2:
                        break;
                    case sf::Keyboard::F3:
                        break;
                    case sf::Keyboard::F4:
                        break;
                    case sf::Keyboard::F5:
                        break;
                    case sf::Keyboard::F6:
                        break;
                    case sf::Keyboard::F7:
                        break;
                    case sf::Keyboard::F8:
                        break;
                    case sf::Keyboard::F9:
                        break;
                    case sf::Keyboard::F10:
                        break;
                    case sf::Keyboard::F11:
                        break;
                    case sf::Keyboard::F12:
                        break;  
                    case sf::Keyboard::F13:
                        break;
                    case sf::Keyboard::F14:
                        break;
                    case sf::Keyboard::F15:
                        break;
                    case sf::Keyboard::Pause:
                        break;
                    case sf::Keyboard::KeyCount:

                        break;
                    }
            }
        }

        // clear the window with black color
        window.clear(sf::Color::Black);
        std::string finalRender;
        for(auto& e: pressedKeys) {
            finalRender += e;
        }
        text.setString(finalRender);
        window.draw(text);

        if (save) {
            std::ofstream file("test.txt");           
            file.write(finalRender.c_str(),finalRender.size());
        }

        window.display();
    }

    return 0;
}
