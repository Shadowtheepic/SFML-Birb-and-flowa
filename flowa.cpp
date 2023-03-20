#include"flowa.h"


//function definition for constructor
flowa::flowa(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];

}


void flowa::changeColor() {
	color[0] = rand() % 100 + 1;
	color[1] = rand() % 100 + 1;
	color[2] = rand() % 100 + 1;
}

//function definition for draw
void flowa::draw(sf::RenderWindow& window) {


	//leggies
	feets.setPosition(xpos + 20, ypos + 35);
	feets.setFillColor(sf::Color(200, 150, 0));
	feets.setSize(sf::Vector2f(20, 60));
	window.draw(feets); 


	//body 
	body.setRadius(30);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

}
