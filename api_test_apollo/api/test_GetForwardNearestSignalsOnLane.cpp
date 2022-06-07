#include "cyber/common/file.h"
#include "modules/map/hdmap/hdmap.h"
#include "modules/map/hdmap/hdmap_util.h"

#include <iostream>
#include <string>
#define STDCOUT(express)  std::cout << express << std::endl
#define SIZECOUT(vec) STDCOUT(#vec << " size : " << vec.size() )
#define TRY_RUN(express)  if ( 0 == (express) ) { \
  std::cout << "run " << #express << " Communicating successfully." << std::endl; \
} else { \
  std::cout << "run " << #express << " Communicating failed." << std::endl; \
}
#define PNTCOUT(location) std::cout << "Point : (" << location.x() << " "<< location.y() << " " << location.z() << ")"<< std::endl;
#define DISCOUT(searchdistance) std::cout << "Distance : "<< searchdistance << std::endl;


int main ( int argc, char** argv){
  apollo::hdmap::HDMap map;
    //map.LoadMapFromFile(argv[1]);
  map.LoadMapFromFile("/home/mcw/api_test_apollo/borregas_ave");
  std::cout<<"Loading Map Successfully!\n"; // 是不是可以加一个判断？判断地图是否加载成功

    /**
   * @brief get all road and junctions boundaries within certain range
   * @param point the target position
   * @param distance the forward search distance
   * @param signals all signals match conditions
   * @return 0:success, otherwise failed
   */
  apollo::common::PointENU point;
  point.set_x(427292.62534242147);
  point.set_y(4419239.997745479);
  point.set_z(73.4581222534180);
  PNTCOUT(point)

  double distance = 100.0;
  DISCOUT(distance)

  std::vector<apollo::hdmap::SignalInfoConstPtr> signals;
  TRY_RUN( map.GetForwardNearestSignalsOnLane(point, distance, &signals) )
  SIZECOUT(signals);

  return 0;

}