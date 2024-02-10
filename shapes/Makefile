CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Shape.o

LIBS =

TARGET =	Shape

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
