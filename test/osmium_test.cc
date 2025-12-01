#include <osmium/io/reader.hpp>
#include <string>
#include "fmt/core.h"
#include "gtest/gtest.h"
#include "osmium/io/pbf_input.hpp"
namespace osm_io = osmium::io;

TEST(osmium, osmium_read) {
  const std::string osm_file_path("test/data/luisenplatz-darmstadt.osm.pbf");
  osm_io::File osm_file{osm_file_path};
  const size_t file_size =
      osm_io::Reader{osm_file, osm_io::read_meta::no}.file_size();
  auto reader = osm_io::Reader(osm_file);
  fmt::println("file size : {}", file_size);
}
