BINARIES=sls ntpproxy clock

.PHONY: clean

all: $(BINARIES)

clean:
	$(RM) $(BINARIES)
