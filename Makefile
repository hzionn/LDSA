clean:
	@echo "Removing .DS_Store files..."
	@find . -type d -name '.git' -prune -o -name '.DS_Store' -exec rm -f {} +

	@echo "Removing object files and output files..."
	@find . -type d -name '.git' -prune -o -type f \( -name '*.o' -or -name '*.out' \) -exec rm -f {} +

	@echo "Removing 'main' executables..."
	@find . -type d -name '.git' -prune -o -type f -name 'main' -exec rm -f {} +
