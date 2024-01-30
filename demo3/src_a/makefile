# 自定义变量
OBJ=$(patsubst %.c, %.o, $(wildcard ./*.c))
TARGET=libMyDiv.a


$(TARGET): $(OBJ)
	$(AR) -r $(TARGET) $^


# 模式匹配
%.o:%.c
	$(CC) -c $^ -o $@

clean:
	@$(RM) $(OBJ) $(TARGET)


show:
	@echo $(AR)