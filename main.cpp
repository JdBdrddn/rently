#include <iostream>
#include "Vehicle.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
Vehicle v1("Elantra", "Hyundai", "17AHEY7371", 2025, "FPA 129");
    Vehicle v2("Elantra", "Hyundai", "17AHEY7371", 2025, "FPA 129");

    Vehicle v3("Elantra", "Hyundai", "17AHEY7371", 2025, "FPA 129");
    Vehicle v4("Elantra", "Hyundai", "17AHEY7371", 2025, "FPA 129");
    std::cout << v4.getID() << std::endl;
    std::cout << v3.getID();

}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.