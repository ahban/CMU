
CC = cl.exe

TARGET = main.exe

REMOVE = del /F /S /Q

$(TARGET) : client.c
	$(CC) client.c -o $(TARGET)

clean : 
	$(REMOVE) *.exe *.obj

run : $(TARGET)
	$(TARGET)



