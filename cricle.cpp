#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

int main() {
float radius;
int outline;
int x, y;
int red, green, blue;
bool window = false;

RenderWindow screen(sf::VideoMode(800, 800), "idk");

cout << "gimmie radius" << endl;
cin >> radius;
cout << "gimmie outline" << endl;
cin >> outline;
cout << "gimmie x position" << endl;
cin >> x;
cout << "gimmie y" << endl;
cin >> y;
cout << "gimmie color(rgb)" << endl;
cin >> red;
cin >> green;
cin >> blue;
window = true;

CircleShape circle;
circle.setRadius(radius);
circle.setOutlineColor(Color(red, green, blue));
circle.setOutlineThickness(outline);
circle.setPosition(10, 20);
while (window == true) {
screen.clear();
screen.draw(circle);
screen.display();
}
}
