# Nombre del ejecutable final
TARGET = wemo.exe

# Compilador a utilizar (g++ en MinGW)
CXX = g++

# Opciones de compilación
CXXFLAGS = -std=c++11 -Wall

# Archivos fuente
SRCS = grafo.cpp main.cpp

# Archivos objeto generados a partir de los archivos fuente
OBJS = $(SRCS:.cpp=.o)

# Regla principal: compilación y enlazado
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Regla para la compilación de cada archivo objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar archivos objeto y ejecutable
clean:
	del $(OBJS) $(TARGET)

# Regla para compilar y ejecutar el programa
run: $(TARGET)
	./$(TARGET)