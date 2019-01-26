all:
	g++ -std=c++11 faith.cpp -o faith

run:
	clear
	./faith < in/1_in.txt > 1_out.txt
	./faith < in/2_in.txt > 2_out.txt
	./faith < in/3_in.txt > 3_out.txt
	./faith < in/4_in.txt > 4_out.txt
	./faith < in/5_in.txt > 5_out.txt
	diff -w 1_out.txt out/1_out.txt > difere.txt
	diff -w 2_out.txt out/2_out.txt > difere.txt
	diff -w 3_out.txt out/3_out.txt > difere.txt
	diff -w 4_out.txt out/4_out.txt > difere.txt
	diff -w 5_out.txt out/5_out.txt > difere.txt

clean:
		rm -f faith
		clear
