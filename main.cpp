#include<SFML/Graphics.hpp>
#include "birb.h"
#include "flowa.h"

int main() {

	srand(time(NULL));

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int birbColor2[] = { 0,255,0 };
	int birbColor3[] = { 255, 0, 255 };

	int birdflu; // yeah they do that
	

	birb Alex(200, 200, birbColor); //instantiate 1 birb
	birb Jevin(400, 400, birbColor2);
	birb Damac(100, 100, birbColor); //instantiate 1 birb
	birb Paimon(200, 400, birbColor3);
	birb Axel(400, 200, birbColor3); //instantiate 1 birb
	birb Tem(650, 650, birbColor3);

	flowa XD(350, 350, birbColor2);
	flowa DX(100, 250, birbColor3);
	flowa de(30, 400, birbColor);
	flowa ez(650, 600
		, birbColor3);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window


	while (1) {//GAME LOOP OMG


		//if da bird flies
		birdflu = rand() % 100 + 1;

		if (birdflu <= 3) {
			Alex.fly();
			Jevin.fly();
			Damac.fly();
			Paimon.fly();
			Axel.fly();
			Tem.fly();
		}
		if (birdflu <= 5) {
			XD.changeColor();
			DX.changeColor();
			de.changeColor();
			ez.changeColor();
		}
		


		Alex.draw(window);
		Jevin.draw(window);
		Damac.draw(window);
		Paimon.draw(window);
		Axel.draw(window);
		Tem.draw(window);
		XD.draw(window);
		DX.draw(window);
		de.draw(window);
		ez.draw(window);
		window.display();
	}
}


