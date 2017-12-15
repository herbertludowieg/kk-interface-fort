VER = 
all:
	@echo "Compiling methods..."
	cd methods;make VER=$(VER)
	@echo "Succesfully built methods module for python "$(VER)

clean:
	@echo "Changing into methods directory. Executing clean..."
	cd methods;make clean
	@echo "Changing into scripts directory. Executing clean..."
	cd scripts;make clean
