F74034091_lab2: BMI.o main.o
	g++ -o F74034091 BMI.o main.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

main.o: main.cpp BMI.h 
	g++ -c main.cpp

clean:
	rm lab2 *.o
