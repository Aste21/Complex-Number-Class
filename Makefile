# List your *.h files (if you do not have them in your project then leave the variable "headers" empty):
headers = ComplexNumbers.h

# List your *.c files:
sources = TestComplexNumbers.cpp ComplexNumbers.cpp


# Specify name of your program:
executable = ComplexNumbers

$(executable): $(headers) $(sources)
	g++ -g -Wall -pedantic $(sources) -o $(executable)

.PHONY: clean
clean:
	rm $(executable)

.PHONY: check
check: $(executable)
	valgrind --leak-check=full --track-origins=yes ./$(executable)