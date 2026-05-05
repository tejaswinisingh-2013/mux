
compile:
	verilator -Wall --trace --binary --timing mux.v mux_tb.v
run:
	./obj_dir/Vmux
all: compile run
