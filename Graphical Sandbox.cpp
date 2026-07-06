#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Graphics/Color.hpp>

int main() {
	sf::RenderWindow Canvas(sf::VideoMode({ 800, 600 }), "Background");

	//Circle
	sf::CircleShape shape1(35.f);
	shape1.setFillColor(sf::Color::Red);
	shape1.setPosition({ 0.f, 0.f });

	//Square
	sf::RectangleShape shape2({ 75.f, 75.f });
	shape2.setFillColor(sf::Color::Blue);
	shape2.setPosition({ 150.f, 15.f });

	//Rectangle
	sf::RectangleShape shape3({ 125.f, 75.f });
	shape3.setFillColor(sf::Color::Green);
	shape3.setPosition({ 300.f, 15.f });

	//Hexagon
	sf::ConvexShape hexagon;
	hexagon.setPointCount(6);
	hexagon.setPoint(0, { 400.f, 500.f });
	hexagon.setPoint(1, { 505.f, 445.f });
	hexagon.setPoint(2, { 505.f, 345.f });
	hexagon.setPoint(3, { 400.f, 290.f });
	hexagon.setPoint(4, { 295.f, 345.f });
	hexagon.setPoint(5, { 295.f, 445.f });
	hexagon.setFillColor(sf::Color(5, 135, 225));

	//C++ text
	sf::Font font;
	font.openFromFile("C:/Users/Siglaptop/Downloads/FiraCode-Bold.ttf");
	sf::Font font2;
	font2.openFromFile("/Users/Siglaptop/Downloads/FiraCode-Regular.ttf");

	sf::Text symboltext(font);
	symboltext.setString("C");
	symboltext.setCharacterSize(180);
	symboltext.setFillColor(sf::Color::White);
	symboltext.setPosition({ 335.f, 280.f });

	sf::Text plustext(font);
	plustext.setString("++");
	plustext.setCharacterSize(60);
	plustext.setFillColor(sf::Color::White);
	plustext.setPosition({ 420.f, 350.f });

	sf::Text caption(font2);
	caption.setString("This was the symbol that marked the start of my journey. A hobby that is\nproductive and the only thing I enjoyed learning. The first day I\nlearned to program I knew that there was a sign that this is for me.");
	caption.setCharacterSize(18);
	caption.setFillColor(sf::Color::Black);
	caption.setPosition({ 5.f, 510.f });

	sf::Text title(font);
	title.setString("            Project 13 Graphical Sandbox\n   Day 15 learning programming first SFML project.");
	title.setCharacterSize(20);
	title.setFillColor(sf::Color::Black);
	title.setPosition({ 75.f, 225.f });



	while (Canvas.isOpen())
	{
		while (const auto event = Canvas.pollEvent())
		{
			if (event->is<sf::Event::Closed>()) { Canvas.close(); }
		}

		Canvas.clear(sf::Color::White);
		Canvas.draw(shape1);
		Canvas.draw(shape2);
		Canvas.draw(shape3);
		Canvas.draw(title);
		Canvas.draw(hexagon);
		Canvas.draw(symboltext);
		Canvas.draw(plustext);
		Canvas.draw(caption);
		Canvas.display();
	
	}
}