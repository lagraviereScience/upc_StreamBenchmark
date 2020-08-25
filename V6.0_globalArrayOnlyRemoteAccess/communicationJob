#!/bin/bash
#SBATCH --job-name=streamBenchmark.2
#SBATCH --time=05:00:00
#SBATCH --account=nn2849k
#SBATCH --output=/cluster/home/jeremie/myRepo/pgm-jlg-upc-svn/trunk/otherThanSpmv/BenchmarkingUPC/StreamBenchmark//results/abel/comJob_1_out
#SBATCH --nodes=2
#SBATCH --ntasks-per-node=1
#SBATCH --mem-per-cpu=6000MB
source /cluster/bin/jobsetup


module load intelmpi.intel/5.0.2
module load intel/2017.0


export GASNET_PHYSMEM_MAX=63G
export GASNET_PHYSMEM_NOPROBE=1

export PATH=/cluster/software/VERSIONS/intel-2017.0/compilers_and_libraries_2017.0.098/linux/bin/intel64:/cluster/software/VERSIONS/intel-2017.0/compilers_and_libraries_2017.0.098/linux/mpi/intel64/bin:/cluster/software/VERSIONS/intel-2017.0/bin:/cluster/software/VERSIONS/intel-2017.0/bin/intel64:/cluster/software/VERSIONS/intel-2017.0/mkl/tools:/cluster/software/VERSIONS/intel-2017.0/vtune_amplifier_xe_2017.0.2.478468/bin64:/cluster/software/VERSIONS/intel-2017.0/advisor_2017.1.0.477503/bin64/:/cluster/software/VERSIONS/intel-2017.0/inspector_2017.1.0.475470/bin64:/cluster/software/VERSIONS/intel-2017.0/itac/2017.0.020/bin/:/cluster/software/VERSIONS/intel-2017.0/debugger_2017/gdb/intel64/bin:/cluster/software/VERSIONS/intelmpi.intel-5.0.2//intel64/bin:/cluster/software/VERSIONS/intel-2015.1/bin:/cluster/software/VERSIONS/intel-2015.1/bin/intel64:/cluster/software/VERSIONS/intel-2015.1/mkl/tools:/hpc/bin:/opt/gold/bin:/cluster/bin:/usr/lib64/qt-3.3/bin:/usr/local/bin:/bin:/usr/bin:/usr/local/sbin:/usr/sbin:/sbin:/opt/ganglia/bin:/opt/ganglia/sbin:/usr/java/latest/bin:/opt/rocks/bin:/opt/rocks/sbin

export UPC=/usit/abel/u1/jeremie/myRepo/pgashpc/Compilers/BUFA_2.22.3/installed/bin


cd /cluster/home/jeremie/myRepo/pgm-jlg-upc-svn/trunk/otherThanSpmv/BenchmarkingUPC/StreamBenchmark/V6.0_globalArrayOnlyRemoteAccess

make run THREADS=2 >> /cluster/home/jeremie/myRepo/pgm-jlg-upc-svn/trunk/otherThanSpmv/BenchmarkingUPC/StreamBenchmark//results/abel/comJob_1
