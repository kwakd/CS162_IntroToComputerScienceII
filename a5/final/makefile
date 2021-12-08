all: lib

lib: newa5.o Album.o Movie.o Book.o LibraryItem.o Patron.o Library.o
		g++ -g newa5.o Album.o Movie.o Book.o LibraryItem.o Patron.o Library.o -o lib

newa5.o: newa5.cpp Library.hpp Patron.hpp Album.hpp Movie.hpp Book.hpp
		g++ -c newa5.cpp

Album.o: Album.cpp Album.hpp LibraryItem.hpp
		g++ -c Album.cpp

Movie.o: Movie.cpp Movie.hpp LibraryItem.hpp
		g++ -c Movie.cpp

Book.o: Book.cpp Book.hpp LibraryItem.hpp
		g++ -c Book.cpp

LibraryItem.o: LibraryItem.cpp LibraryItem.hpp
		g++ -c LibraryItem.cpp

Patron.o: Patron.cpp Patron.hpp
		g++ -c Patron.cpp

Library.o: Library.cpp Library.hpp
		g++ -c Library.cpp

clean:
		rm -f *.o
