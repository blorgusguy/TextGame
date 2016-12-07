

#include <iostream>
#include <string>

using namespace std;
std::string s = "start";
std::string fv = "forestorvillage";
std::string where = "shop";
int itemsword = 0;
int money = 500;

int village()
{
	cout << "where do you go? (home, shop, armory, bar, forest)";
	cin >> wheretown;
	switch (where){
	case "home":
		home();
		break;
	case "shop":
		shop();
		break;
	case "armory":
		armory();
		break;
	case "bar":
		bar();
		break;
	case "forest":
		forest();
		break;
	}
} 



int main()
{
	cout << "Begin your Adventure? (y/n)";
	cin >> s;
	if (s == "y"){
		cout << "choose your path (forest/village)";
		cin >> fv;
		if (fv == "forest"){
			forest();
		}
		if (fv == "village"){
		village();
		}
	}
}