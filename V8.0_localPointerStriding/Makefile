UPCC=$(UPC)/upcc
CC =$(UPCC)

UPCRUN=$(UPC)/upcrun

STREAM_ARRAY_SIZE?=100000000
SHARED_HEAP?=4000
THREADS?=4
BLOCKSIZE?=1
#$(( (8*$STREAM_ARRAY_SIZE) / $THREADS ))

CFLAGS= -O -DBLOCKSIZE=$(BLOCKSIZE) -DSTREAM_ARRAY_SIZE=$(STREAM_ARRAY_SIZE) -T$(THREADS)

PROGRAM_NAME=streamBenchmark

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): stream.o
	$(CC) $(CFLAGS) $^ -o $(PROGRAM_NAME)

#mysecond.o: mysecond.c
#	$(CC) $(CFLAGS) -c $^ -o $@

stream.o: stream.c
	$(CC) $(CFLAGS) -c $^ -o $@

run:
	 $(UPCRUN) -shared-heap=$(SHARED_HEAP)MB -n $(THREADS) $(PROGRAM_NAME) 

clean:
	rm -f *.o
	rm -f $(PROGRAM_NAME)

# an example of a more complex build line for the Intel icc compiler
#stream.icc: stream.c
#	icc -O3 -xCORE-AVX2 -ffreestanding -qopenmp -DSTREAM_ARRAY_SIZE=80000000 -DNTIMES=20 stream.c -o stream.omp.AVX2.80M.20x.icc
