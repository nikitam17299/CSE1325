CXXFLAGS += --std=c++17

main: main.cpp card.cpp deck.cpp
	${CXX} ${CXXFLAGS} -o main main.cpp

test: test_deck test_card
	@./test_card
	@./test_deck
test_deck: test_deck.cpp deck.cpp card.cpp
	${CXX} ${CXXFLAGS} -o test_deck test_deck.cpp
test_card: test_deck.cpp deck.cpp card.cpp
	${CXX} ${CXXFLAGS} -o test_card test_card.cpp
clean:
	-rm -f *.o a,out test_card test_deck main

