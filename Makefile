BMImain: BMIclass.o BMImain.o
	   g++ -o BMI BMIclass.o BMImain.o

BMIclass.o: BMIclass.cpp BMIclass.h
	   g++ -c  BMIclass.cpp

BMImain.o: BMImain.cpp BMIclass.h
	   g++ -c  BMImain.cpp

clean: rm BMIclass *.o

