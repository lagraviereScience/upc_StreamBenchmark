#!/bin/bash

#SBATCH --job-name=streamBenchmark.2
#SBATCH --time=00:60:00
#SBATCH --account=nn2849k
#SBATCH --output=/cluster/home/jeremie/myRepo/pgm-jlg-upc-svn/trunk/otherThanSpmv/BenchmarkingUPC/StreamBenchmark//results/abel/comJob_1_out
#SBATCH --nodes=2
#SBATCH --ntasks-per-node=1
#SBATCH --mem-per-cpu=6000MB
source /cluster/bin/jobsetup

module load intelmpi.intel/5.0.2
module load intel/2015.1

export GASNET_PHYSMEM_MAX=63G
export GASNET_PHYSMEM_NOPROBE=1

export PATH=/cluster/software/VERSIONS/intelmpi.intel-5.0.2//intel64/bin:/cluster/software/VERSIONS/intel-2015.1/bin:/cluster/software/VERSIONS/intel-2015.1/bin/intel64:/cluster/software/VERSIONS/intel-2015.1/mkl/tools:/hpc/bin:/opt/gold/bin:/cluster/bin:/usr/lib64/qt-3.3/bin:/usr/local/bin:/bin:/usr/bin:/usr/local/sbin:/usr/sbin:/sbin:/opt/ganglia/bin:/opt/ganglia/sbin:/opt/ibutils/bin:/usr/java/latest/bin:/opt/rocks/bin:/opt/rocks/sbin:/cluster/home/jeremie/myRepo/pgashpc/Compilers/BUFA2.22/installed/bin
export UPC=/cluster/home/jeremie/myRepo/pgashpc/Compilers/BUFA2.22/installed/bin


cd /cluster/home/jeremie/myRepo/pgm-jlg-upc-svn/trunk/otherThanSpmv/BenchmarkingUPC/StreamBenchmark/V6.0_globalArrayOnlyRemoteAccess

make run THREADS=2 >> /cluster/home/jeremie/myRepo/pgm-jlg-upc-svn/trunk/otherThanSpmv/BenchmarkingUPC/StreamBenchmark//results/abel/comJob_1
