hepsi:	derle calistir
derle:
		g++ -I ./include/ -o ./lib/Kova.o -c ./src/Kova.cpp
		g++ -I ./include/ -o ./lib/Top.o -c ./src/Top.cpp
		g++ -I ./include/ -o ./lib/KovaKontrolu.o -c ./src/KovaKontrolu.cpp
		g++ -I ./include/ -o ./bin/Test ./lib/KovaKontrolu.o ./lib/Top.o ./lib/Kova.o ./src/Test.cpp
calistir:
		./bin/Test