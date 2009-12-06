
NAME= 	v0

CPP=	g++
CFLAGS=	-W -Wall -ansi -pedantic
LDFLAGS= -lsfml-window -lsfml-system -lsfml-graphics
SRC=	$(wildcard *.cpp)
OBJS= 	$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CPP) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf *.o

rebuild : clean all
