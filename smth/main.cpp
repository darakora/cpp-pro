#include <iostream>
#include <vector>
#include <algorithm>

struct Ice_cream{
std::string name;
double weight;
double price;
double get_price (double control_weight)
{
    return (control_weight / weight) * price;
}
};

std::vector<Ice_cream> ice_cream{
Ice_cream{"Alenka", 100.0, 20.5},
Ice_cream{"Ashan", 90, 30.5},
Ice_cream{"Vorobey", 10, 100}
};

int main()
{
    std::for_each(ice_cream.begin(), ice_cream.end(), [](Ice_cream a){std::cout << a.name << " " << a.get_price(1000) << " " ;});
    return 0;
}
