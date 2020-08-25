# upc_StreamBenchmark
Stream Benchmark in UPC ( https://upc.lbl.gov/)
Implemented using different programming styles in UPC

## V1.0_classicUpcForLoop

Basic implementation of UPC Stream Benchmark using UPC global shared arrays and  upc_forall (of doom!)

## V2.0_blocksizedImplementation

UPC Stream Benchmark using blocks to distribute data still using upc_forall

## V3.0_localPointers

Using local pointers to access shared arrays and no more upc_forall

## V4.0 to V9.0

Multiple levels of optimizations for UPC Stream Benchmark. The best one should be V7.0

## Usage
Requires a working installation of UPC ( https://upc.lbl.gov/ )
Pretty straight forward, a Makefile so just type "make"

Do not hesitate to open modify the Makefile(s) :)

Then it will generate an executable

Tested a million times on Linux
No idea how to make this works on Windows

Works fine on PC (single node), super computers (multi node), many core computers (AI chips, Intel Xeon Phi, etc.)
