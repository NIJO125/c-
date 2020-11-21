#include <vector>
#include <iostream>
int main() {
 std::vector<int> v = { 1, 2, 3, 4, 5 }; 
 for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
 std::cout << *it << " ";
 }
 return 0;
}


#include <iostream>
#include <fstream>
#include <locale>
int main()
{
 std::cout << "User-preferred locale setting is "
 << std::locale("").name().c_str() << std::endl;
 // Write a floating-point value using the user's preferred locale.
 std::ofstream ofs1;
 ofs1.imbue(std::locale(""));
 ofs1.open("file1.txt");
 ofs1 << 78123.456 << std::endl;
 // Use a specific locale (names are system-dependent)
 std::ofstream ofs2;
 ofs2.imbue(std::locale("en_US.UTF-8"));
 ofs2.open("file2.txt");
 ofs2 << 78123.456 << std::endl;
 // Switch to the classic "C" locale
 std::ofstream ofs3;
 ofs3.imbue(std::locale::classic());
 ofs3.open("file3.txt");
 ofs3 << 78123.456 << std::endl;
}


