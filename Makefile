all: 
	rm -f *.fls
	rm -f *.log
	rm -f *.bbl
	xelatex math-notes
	xelatex math-notes

