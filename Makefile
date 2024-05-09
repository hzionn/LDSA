clean:
	@echo "Removing .DS_Store files..."
	@find . -name '.DS_Store' -exec rm -f {} +

	@echo "Removing object files and output files..."
	@find . -type f \( -name '*.o' -or -name '*.out' \) -exec rm -f {} +

	@echo "Removing 'main' executables..."
	@find . -type f -name 'main' -exec rm -f {} +
