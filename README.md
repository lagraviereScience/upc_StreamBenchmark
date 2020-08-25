# upc_StreamBenchmark
Stream Benchmark (Based on https://www.cs.virginia.edu/stream/ref.html)in UPC ( https://upc.lbl.gov/)
Implemented using different programming styles in UPC

## Use cases
You want to check that you get the maximum out of your (super)computers bandwidths: RAM <-> CPU, or network (Infiniband and alike)
You want to check that your UPC installation performs well 
You want to perform a stress test on your (super)computer
etc.

## V1.0 to V9.0
Multiple levels of optimizations for UPC Stream Benchmark. The best one should be V7.0

## Usage
Requires a working installation of UPC ( https://upc.lbl.gov/ )
Pretty straight forward, a Makefile so just type "make"

Do not hesitate to open modify the Makefile(s) :)

Then it will generate an executable

Tested a million times on Linux
No idea how to make this works on Windows

Works fine on PC (single node), super computers (multi node), many core computers (AI chips, Intel Xeon Phi, etc.)
