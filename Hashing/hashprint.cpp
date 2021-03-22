#include <iostream>
#include<cstring>
#include "hashmap.h"
int main(int argc, char **argv)
{
	Hashtable<int> price_menu;
    price_menu.insert("Burger",120);
    price_menu.insert("dog",20);
    price_menu.insert("Burgerpizza",150);
    price_menu.insert("noodles",25);
    price_menu.insert("Bun",40);
    price_menu.print();
	return 0;
}
