# PensjoMath

Aplikacja PensjoMath

# Język kodowania: C++

# Środowisko: CodeBlocks

Obecnie jest podział na 3 pliki, który każdy zawiera adekwatną do swojej nazwy funkcję. Kazdy plik zawiera wyodrębnioną metodę by pokazać by pokazac jej działanie. Podczas tworzenia prawdziwej aplikacji, metody/funkcje zostają wrzucone do jednego pliku z klasą by uprościć działanie apikacji. Cały kod jest na podstawie wcześniej zaprojektowanego pseudokodu.

# Cel działania aplikacji:
Wyliczanie premii i płacy dla danego pracownika. Sprawdzenie czy pracownik jest winny oddania zaliczki.

Pliki:
- jakapremia.cpp
- liczplace.cpp
- zwrocplace.cpp

# jakapremia.cpp :
Przyjmuje ilość sprzedarzy od danego pracownika, i zależnie od ilości sprzedazy taka będzie premia.
Przelicznik to:
- sprzedarz < 10000 zł, premia = sprzedarz * 0.10;
- 14999.99 zł > sprzedarz > 10000 zł, premia = sprzedarz * 0.12;
- 17999.99 zł > sprzedarz > 15000 zł, premia = sprzedarz * 0.14;
- 21999.99 zł > sprzedarz > 18000 zł, premia = sprzedarz * 0.16;
- sprzedarz > 22000 zł, premia = sprzedarz * 0.18;

# liczplace.cpp :

Bierze wartość zaliczki, premii i sprzedaży by wyliczyc płacę. 

# zwrocplace.cpp :

Wypisuje wczesniej obliczona płace
