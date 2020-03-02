###
### Makefile
###

CC      = gcc
TARGET  = str
INSTALL = /usr/bin/install -c

INCLUDE = include
SOURCES = src
TOOLS   = tools

CSFILES = $(wildcard $(SOURCES)/*.c)
OBFILES = $(patsubst %.c,%.o,$(CSFILES))

CFLAGS  = -I$(INCLUDE)
LDFLAGS = -pthread -lz

.PHONY: all $(TARGET) clean install uninstall reinstall

all: $(TARGET)

$(TARGET): $(CSFILES)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	@cd $(TOOLS) && ./clean.sh $(TARGET)

install:
	@cd $(TOOLS) && ./install.sh $(TARGET)

uninstall:
	@cd $(TOOLS) && ./uninstall.sh $(TARGET)

reinstall: uninstall install
