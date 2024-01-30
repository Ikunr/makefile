# 自定义变量
OBJ=main.o add.o sub.o div.o mul.o
TARGET=main

#使用$(TARGET) 必须要加 '$' 符号

$(TARGET):$(OBJ)
	gcc $^ -o $@

add.o:add.c
	gcc -c $^ -o $@

sub.o:sub.c
	gcc -c $^ -o $@

div.o:div.c
	gcc -c $^ -o $@

mul.o:mul.c
	gcc -c $^ -o $@

main.o:main.c
	gcc -c $^ -o $@

clean:
#@ 表示不显示输出
	@rm -rf *.o $(TARGET)

show:
	echo $(CC)
	echo $(RM)
	


