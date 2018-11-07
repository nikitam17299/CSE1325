CXXFLAGS += --std=c++17

main: main.o Electric_vehicle.o Gas_vehicle.o vehicle.o
	${CXX} ${CXXFLAGS} -o main main.o vehicle.o Electric_vehicle.o Gas_vehicle.o

main.o: main.cpp *.h
	${CXX} ${CXXFLAGS} -c main.cpp

vehicle.o: vehicle.cpp *.h
	${CXX} ${CXXFLAGS} -c vehicle.cpp

Electric_vehicle.o: Electric_vehicle.cpp *.h
	${CXX} ${CXXFLAGS} -c Electric_vehicle.cpp

Gas_vehicle.o: Gas_vehicle.cpp *.h
	${CXX} ${CXXFLAGS} -c Gas_vehicle.cpp

