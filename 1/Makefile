obj-m += helloworld.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

CFLAGS_helloworld.o := -DDEBUG

all:
	@echo 'Checking patch'
	../checkpatch.pl -no-tree -file helloworld.c
	@echo

	make -C $(KERNELDIR) M=$(PWD) modules

clean:
	make -C $(KERNELDIR) M=$(PWD) clean
