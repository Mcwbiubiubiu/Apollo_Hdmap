#include "cyber/common/file.h"
#include "modules/map/hdmap/hdmap.h"
#include "modules/map/hdmap/hdmap_util.h"

#define STDCOUT(express)  std::cout << express << std::endl
#define SIZECOUT(vec) STDCOUT(#vec << " size : " << vec.size() )
#define TRY_RUN(express)  if ( 0 == (express) ) { \
  std::cout << "run " << #express << " Communicating successfully." << std::endl; \
} else { \
  std::cout << "run " << #express << " Communicating failed." << std::endl; \
}
#define PNTCOUT(location) std::cout << "Point : (" << location.x() << " "<< location.y() << " " << location.z() << ")"<< std::endl;
#define DISCOUT(searchdistance) std::cout << "Distance : "<< searchdistance << std::endl;

int main (int argc, char** argv) {

  apollo::hdmap::HDMap map;
  map.LoadMapFromFile("/home/mcw/cmake_apollo_hdmap-master/borregas_ave");
  std::cout << "Loading Successfully!\n";

/**
 * @brief  get all PNCJunctions in certain range
 * @param point the central point of the range  
 * @param distance  the search radius
 * @param pnc_junctions store all pnc_junctions in target range
 * @return int  0 success, otherwise failed
 */
 apollo::common::PointENU point;
  point.set_x(427292.62534242147);
  point.set_y(4419239.997745479);
  point.set_z(73.4581222534180);
  PNTCOUT(point)

  double distance;
  distance = 100.0;
  DISCOUT(distance)

 std::vector<apollo::hdmap::JunctionInfoConstPtr> junctions;
  TRY_RUN( map.GetJunctions(point, distance, &junctions) )
  SIZECOUT(junctions);

return 0;

}
