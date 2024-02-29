CC=g++
CFLAGS= -Wvla #-fpermissive
INTRO_OBJECTS = Introduction/hello_world Introduction/data_types Introduction/arrays_and_vectors Introduction/scopes Introduction/loops_and_statements Introduction/switch Introduction/switch_expanded  Introduction/functions
OBJECTS=$(INTRO_OBJECTS)
all: $(INTRO_OBJECTS)


$(INTRO_OBJECTS): %: %.cpp
	$(CC) $(CFLAGS)  $< -o $@ 


clean:
	rm -rf $(OBJECTS)