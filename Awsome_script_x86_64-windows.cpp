#include <iostream>
#include <string>
#include <vector>
#include <map>

// ASCII Sanatı için Basit Bir Fonksiyon (Sadece bazı harfler için örnek)
void ascilx(const std::string& text)
{
    // ASCII sanatını yazdırma fonksiyonu
    std::map < char, std::vector < std::string>> ascii_art = {
        { 'A', { "  A  ", " A A ", "AAAAA", "A   A", "A   A"} },
        { 'B', { "BBBB ", "B   B", "BBBB ", "B   B", "BBBB "} },
        { 'C', { " CCC ", "C    ", "C    ", "C    ", " CCC "} },
        // Diğer harfler ve semboller için benzerler eklenebilir
    }
    ;

    for (char ch : text) {
        if (ascii_art.find(toupper(ch)) != ascii_art.end()) {
            for (const std::string& line : ascii_art[toupper(ch)]) {
    std::cout << line << std::endl;
}
        } else
{
    // Harf ASCII sanatında yoksa boşluk bırakabiliriz.
    std::cout << "  " << std::endl;
}
    }
}

// Normal metin yazdırma fonksiyonu
void nprint(const std::string& text)
{
    std::cout << text << std::endl;
}

int main()
{
    // Kullanıcıdan gelen metinler
    std::string metin = "ABAC";

    // ASCII sanatıyla yazdırma
    std::cout << "ASCII Sanatıyla Yazdırma:" << std::endl;
    ascilx(metin);
    std::cout << std::endl;

    // Normal metin yazdırma
    std::cout << "Normal Yazdırma:" << std::endl;
    nprint(metin);

    return 0;
}

