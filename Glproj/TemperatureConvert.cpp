#include <iostream>
#include <string>
#include <cctype>


namespace Con
{
    std::string temp;
    std::string letters;
    char wybor;
    double numbers;
};


void Separate(const std::string& temp, std::string& letters, double& numbers)
{
    std::string stringnums;

    for (char c : temp)
    {
        if(std::isalpha(c))
        {
            letters += c;
        }
        else if(std::isdigit(c) || c == '.')
        {
            stringnums += c;
        }
    }


    if(!stringnums.empty())
    {
        numbers = std::stod(stringnums); // convertuje z string to double
    }
    
}


int Fahrenheit(double& numbers, std::string& letters, char& zadanie)
{
    if(letters == "C")
    {
        double fahrenheit = (numbers * 1.8) + 32;
        std::cout << "Convertion to Fahrenheit: " << fahrenheit << 'F' << '\n'; 
    }
    else if(letters == "K")
    {
        double fahrenheit = (numbers * 9/5) - 459.67;
        std::cout << "Convertion to Fahrenheit: " << fahrenheit << 'F' << '\n';
    }
    
}
int Kelvin(double& numbers, std::string& letters, char& zadanie)
{
    if(letters == "C")
    {
        double kelvin = (numbers + 273.15);
        std::cout << "Convertion to Kelvin: " << kelvin << 'K'<<  '\n'; 
    }
    else if(letters == "F")
    {
        int kelvin = (numbers + 459.67) * (5/9);
        std::cout << "Convertion to Celsius: " << kelvin << 'K' << '\n'; 
    }

    
}
int Celsius(double& numbers, std::string& letters, char& zadanie)
{
    if(letters == "K")
    {
        int celsius = numbers - (273.15);
        std::cout << "Convertion to Celsius: " << celsius << 'C' << '\n'; 
    }
    else if(letters == "F")
    {
        int celsius = (numbers - 32) * (5/9);
        std::cout << "Convertion to Celsius: " << celsius << 'C' << '\n'; 
    }
}

int main()
{


std::cout << "input the temperature\n";
std::cin >> Con::temp;


Separate(Con::temp, Con::letters, Con::numbers); // oddziela liczby i litery z string

if(Con::letters == "F")
{
    std::cout << "Convert to K/C\n";
    std::cin >> Con::wybor;
    char zadanie = std::tolower(Con::wybor);

    if(zadanie == 'k')
    {
        Kelvin(Con::numbers, Con::letters,zadanie);
    }
    else if(zadanie == 'c')
    {
        Celsius(Con::numbers, Con::letters, zadanie);
    }
    else if(zadanie == 'f')
    {
        std::cout << "it's already Fahrenheit" << '\n';
    }
    else
    {
        std::cout << "have to choose between K/C" << '\n';
    }
}

else if(Con::letters == "K")
{
    std::cout << "Convert to F/C\n";
    std::cin >> Con::wybor;
    char zadanie = std::tolower(Con::wybor);

    if(zadanie == 'f')
    {
        Fahrenheit(Con::numbers, Con::letters, zadanie);
    }
    else if(zadanie == 'c')
    {
        Celsius(Con::numbers, Con::letters, zadanie);
    }
    else if(zadanie == 'k')
    {
        std::cout << "it's already Kelvin" << '\n';
    }
    else
    {
        std::cout << "have to choose between F/C" << '\n';
    }
}

else if(Con::letters == "C")
{
    std::cout << "Convert to F/K\n";
    std::cin >> Con::wybor;
    char zadanie = std::tolower(Con::wybor);

    if(zadanie == 'f')
    {
        Fahrenheit(Con::numbers,Con::letters,zadanie);
    }
    else if(zadanie == 'k')
    {
        Kelvin(Con::numbers, Con::letters, zadanie);
    }
    else if(zadanie == 'c')
    {
        std::cout << "it's already Celsius" << '\n';
    }
    else
    {
        std::cout << "have to choose between F/K" << '\n';
    }
}




std::cin.get();
}