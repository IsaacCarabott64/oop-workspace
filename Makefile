all: main.cpp workshop.h
	g++ main.cpp -o main.exe

clean:
	rm main.exe

run:
	./main.exe