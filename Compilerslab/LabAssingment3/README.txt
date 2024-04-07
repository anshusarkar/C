Use the following commands to compile and run YACC

in windows or in Linux

1 ) first use flex filename.l to compile flex (Would generate a file called lex.yy.c)
2 ) the use biso -dy filename.y (would generate a file called y.tab.c)
3) lastly use gcc lex.yy.c y.tab.c (Use tab key after typing gcc that would do it)
4) finally depending on the os run the program ither using a.exe or ./a.out
