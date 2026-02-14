
EXEC=out.exe
compile: main.cpp
	g++ main.cpp -o $(EXEC)
run: $(EXEC)
	./$(EXEC) $(var)

