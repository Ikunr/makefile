# 自定义变量
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=libSoMyAdd.so



$(TARGET):$(OBJ)
	$(CC) -shared -fPIC $^ -o $@
#发布
	cp $(TARGET) /usr/lib/

#模式匹配

%.o:%.c
	$(CC) -c $^ -o $@

clean:
	$(RM) $(OBJ) $(TARGET)
	$(RM) /usr/lib/$(TARGET)