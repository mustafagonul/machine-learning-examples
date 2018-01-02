#include <iostream>
#include <boost/mpi.hpp>

#include "../csv/csv.h"

namespace mpi = boost::mpi;

void read_csv()
{
  io::CSVReader<3> in("ram.csv");
  in.read_header(io::ignore_extra_column, "vendor", "size", "speed");
  std::string vendor; int size; double speed;
  while (in.read_row(vendor, size, speed)) {
    // do stuff with the data
  }
}

void master()
{

}

void worker(int rank)
{

}

int main(int argc, char* argv[])
{
  mpi::environment env(argc, argv);
  mpi::communicator world;



  return 0;
}
