#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
int Exit_Variable = 0;
string Period = "";
string Space = "";
string Comma = "";
string Colon = "";
string day = "";
string night = "";

night = "night";
day = "day";
Colon = ":";
Period = ".";
Comma = ",";
Space = " ";

cout << "Genesis 1" << Colon << endl;
cout << "The Account of Creation" << endl;

cout << "In the beginning God created the heavens and the earth" << Period << endl;
cout << "The earth was formless and empty" << Comma << Space << "and darkness covered the deep waters" << Period << endl;
cout << "And the Spirit of God was hovering over the surface of the waters" << Period << endl;
cout << "Then God said" << Comma << Space << "Let there be light" << Comma << Space << "and there was light" << Period << endl;
cout << "And God saw that the light was good" << Period << endl;
cout << "Then he separated the light from the darkness" << Period << endl;
cout << "God called the light" << Space << day << Space << "and the darkness" << Space << night << Period << endl;
cout << "And evening passed and morning came" << Comma << Space << "marking the first day" << Period << endl;

cout << "Then God said" << Comma << Space << "Let there be a space between the waters" << Comma << Space << "to separate the waters of the heavens from the waters of the earth" << Period << endl;
cout << "And that is what happened" << Period << endl;
cout << "God made this space to separate the waters of the earth from the waters of the heavens" << Period << endl;
cout << "God called the space" << Space << "sky" << Period << endl;
cout << "And evening passed and morning came" << Comma << Space << "marking the second day" << Period << endl;

cout << "Then God said" << "," << " " << "Let the waters beneath the sky flow together into one place, so dry ground may appear" << ".";
cout << "And that is what happened" << ".";
cout << "God called the dry ground" << " " << "land" << " " << "and the waters" << " " << "seas" << ".";
cout << "And God saw that it was good" << ".";











/*
Then God said, "Let the land sprout with vegetation—every sort of seed-bearing plant, and trees that grow seed-bearing fruit.
These seeds will then produce the kinds of plants and trees from which they came."
And that is what happened.
The land produced vegetation—all sorts of seed-bearing plants, and trees with seed-bearing fruit. Their seeds produced plants and trees of the same kind. And God saw that it was good.
And evening passed and morning came, marking the third day.


*/
cout << "Exit" << "?" << endl;
cin >> Exit_Variable;
return 0;
}