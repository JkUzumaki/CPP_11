#compiler name
GCC := g++

#executeable file name and for windows .exe extension will be taken automatically
OUTPUT := ch01_mt_ex
#wilcard will take all file names with .cpp extension
SOURCES := $(wildcard *.cpp)
#compiler flags 
CCFLAGS := -std=c++11 -pthread

#calling output
all: $(OUTPUT)

#here output is running g++ with supplied information
$(OUTPUT):
	$(GCC) -o $(OUTPUT) $(CCFLAGS) $(SOURCES)

#this is used to remove the produced binary
clean:
	rm $(OUTPUT)

.PHONY: all
