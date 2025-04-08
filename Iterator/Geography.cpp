#include <iostream>
#include <vector>
#include <string>

struct Country {
    std::string name;
    std::string capital;
};

class CountryList {
private:
    std::vector<Country> countries;

public:
    void addCountry(const std::string& name, const std::string& capital) {
        countries.push_back({name, capital});
    }

    class Iterator {
    private:
        std::vector<Country>::iterator iter;

    public:
        Iterator(std::vector<Country>::iterator it) : iter(it) {}

        Iterator& operator++() {
            ++iter;
            return *this;
        }

        bool operator!=(const Iterator& other) const {
            return iter != other.iter;
        }

        Country& operator*() {
            return *iter;
        }
    };

    Iterator begin() { return Iterator(countries.begin()); }
    Iterator end() { return Iterator(countries.end()); }
};

int main() {
    CountryList world;

    world.addCountry("Canada", "Ottawa");
    world.addCountry("France", "Paris");
    world.addCountry("Japan", "Tokyo");
    world.addCountry("Brazil", "Brasília");

    for (auto country : world) {
        std::cout << "Country: " << country.name
                  << ", Capital: " << country.capital << std::endl;
    }

    return 0;
}
