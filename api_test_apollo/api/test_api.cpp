
#include "modules/map/hdmap/hdmap.h"
#include "modules/common/util/util.h"
#include <iostream>
#include <string>

#include <glog/logging.h>

#define STDCOUT(express)  std::cout << express << std::endl
#define SIZECOUT(vec) STDCOUT(#vec << " size : " << vec.size() )
#define TRY_RUN(express)  if ( 0 == (express) ) { \
  std::cout << "run " << #express << " success." << std::endl; \
} else { \
  std::cout << "run " << #express << " failed." << std::endl; \
}

int main (int argc, char** argv[]){

   google::InitGoogleLogging(argv[0]);
  //std::cout << "test map" << std::endl;
  //std::string path(argv[1]);
  //apollo::hdmap::HDMap map;
  //map.LoadMapFromFile(path);
  apollo::hdmap::HDMap map;
  map.LoadMapFromFile("/home/mcw/api_test_apollo/borregas_ave");
  std::cout<<"Loading Map Successfully!\n"; // 是不是可以加一个判断？判断地图是否加载成功

  double distance = 100.0;

  apollo::common::PointENU point;
  point.set_x(427292.62534242147);
  point.set_y(4419239.997745479);
  point.set_z(73.4581222534180);

  /**
   * @brief get all lanes in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param lanes store all lanes in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::LaneInfoConstPtr> lanes;
  TRY_RUN( map.GetLanes(point, distance, &lanes) )
  SIZECOUT(lanes);
  /**
   * @brief get all junctions in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param junctions store all junctions in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::JunctionInfoConstPtr> junctions;
  TRY_RUN( map.GetJunctions(point, distance, &junctions) )
  SIZECOUT(junctions);

  /**
   * @brief get all signals in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param signals store all signals in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::SignalInfoConstPtr> signals;
  TRY_RUN( map.GetSignals(point, distance, &signals) )
  SIZECOUT(signals);

  /**
   * @brief get all crosswalks in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param crosswalks store all crosswalks in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::CrosswalkInfoConstPtr> crosswalks;
  TRY_RUN( map.GetCrosswalks(point, distance, &crosswalks) )
  SIZECOUT(crosswalks);

  /**
   * @brief get all stop signs in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param stop signs store all stop signs in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::StopSignInfoConstPtr> stop_signs;
  TRY_RUN( map.GetStopSigns(point, distance, &stop_signs) )
  SIZECOUT(stop_signs);

  /**
   * @brief get all yield signs in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param yield signs store all yield signs in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::YieldSignInfoConstPtr> yield_signs;
  TRY_RUN( map.GetYieldSigns(point, distance, &yield_signs) )
  SIZECOUT(yield_signs);

  /**
   * @brief get all clear areas in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param clear_areas store all clear areas in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::ClearAreaInfoConstPtr> clear_areas;
  TRY_RUN( map.GetClearAreas(point, distance, &clear_areas) )
  SIZECOUT(clear_areas);

  /**
   * @brief get all speed bumps in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param speed_bumps store all speed bumps in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::SpeedBumpInfoConstPtr> speed_bumps;
  TRY_RUN( map.GetSpeedBumps(point, distance, &speed_bumps) )
  SIZECOUT(speed_bumps);

  /**
   * @brief get all roads in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param roads store all roads in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::RoadInfoConstPtr> roads;
  TRY_RUN( map.GetRoads(point, distance, &roads) )
  SIZECOUT(roads);

  /**
   * @brief get all parking spaces in certain range
   * @param point the central point of the range
   * @param distance the search radius
   * @param parking spaces store all clear areas in target range
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::ParkingSpaceInfoConstPtr> parking_spaces;
  TRY_RUN( map.GetParkingSpaces(point, distance, &parking_spaces) )
  SIZECOUT(parking_spaces);

  /**
   * @brief get nearest lane from target point,
   * @param point the target point
   * @param nearest_lane the nearest lane that match search conditions
   * @param nearest_s the offset from lane start point along lane center line
   * @param nearest_l the lateral offset from lane center line
   * @return 0:success, otherwise, failed.
   */
  double nearest_s;
  double nearest_l;
  apollo::hdmap::LaneInfoConstPtr nearest_lane;
  TRY_RUN( map.GetNearestLane(point, &nearest_lane, &nearest_s, &nearest_l) )


  /**
   * @brief get the nearest lane within a certain range by pose
   * @param point the target position
   * @param distance the search radius
   * @param central_heading the base heading
   * @param max_heading_difference the heading range
   * @param nearest_lane the nearest lane that match search conditions
   * @param nearest_s the offset from lane start point along lane center line
   * @param nearest_l the lateral offset from lane center line
   * @return 0:success, otherwise, failed.
   */
  double central_heading = 0.0;
  double max_heading_difference = 1.57;
  apollo::hdmap::LaneInfoConstPtr nearest_lane_s;
  TRY_RUN( map.GetNearestLaneWithHeading(point, distance, central_heading, 
      max_heading_difference, &nearest_lane_s, &nearest_s, &nearest_l) )

  /**
   * @brief get all lanes within a certain range by pose
   * @param point the target position
   * @param distance the search radius
   * @param central_heading the base heading
   * @param max_heading_difference the heading range
   * @param nearest_lane all lanes that match search conditions
   * @return 0:success, otherwise, failed.
   */
  std::vector<apollo::hdmap::LaneInfoConstPtr> lanes_h;
  TRY_RUN(  map.GetLanesWithHeading(point, distance, central_heading, 
      max_heading_difference, &lanes_h) )
  SIZECOUT(lanes_h);

  /**
   * @brief get all road and junctions boundaries within certain range
   * @param point the target position
   * @param radius the search radius
   * @param road_boundaries the roads' boundaries
   * @param junctions the junctions' boundaries
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::RoadROIBoundaryPtr> road_boundaries;                  
  std::vector<apollo::hdmap::JunctionBoundaryPtr> junctions_b;
  TRY_RUN( map.GetRoadBoundaries(point, distance, &road_boundaries, &junctions_b) )
  SIZECOUT(road_boundaries);
  SIZECOUT(junctions_b);

  /**
   * @brief get forward nearest signals within certain range on the lane
   *        if there are two signals related to one stop line,
   *        return both signals.
   * @param point the target position
   * @param distance the forward search distance
   * @param signals all signals match conditions
   * @return 0:success, otherwise failed
   */
  std::vector<apollo::hdmap::SignalInfoConstPtr> signals_s;
  TRY_RUN( map.GetForwardNearestSignalsOnLane(point, distance, &signals_s) )
  SIZECOUT(signals_s);

/**
 * @brief  get all PNCJunctions in certain range
 * @param point the central point of the range  
 * @param distance  the search radius
 * @param pnc_junctions store all pnc_junctions in target range
 * @return int  0 success, otherwise failed
 */
  std::vector<apollo::hdmap::PNCJunctionInfoConstPtr> pnc_junctions;
  TRY_RUN(map.GetPNCJunctions(point, distance, &pnc_junctions))
  SIZECOUT(pnc_junctions);

  /**
   * @brief get all lanes within a certain range by pose
   * @param point the target position
   * @param distance the search radius
   * @param roads_roi the roads' boundaries
   * @param polygons_roi the polygons' boundaries
   * @return 0:success, otherwise, failed.
   */
  std::vector<apollo::hdmap::RoadRoiPtr> roads_roi;
  std::vector<apollo::hdmap::PolygonRoiPtr> polygons_roi;
  TRY_RUN( map.GetRoi(point, distance, &roads_roi, &polygons_roi) )
  SIZECOUT(roads_roi);
  SIZECOUT(polygons_roi);

/**
 * @brief  get all yieldsigns in certain range
 * @param id the number of  stop signals
 * @param stop_signs all signs match conditions
 * @return int  0 success, otherwise failed
 */
  apollo::hdmap::Id Id;

  std::vector<apollo::hdmap::StopSignInfoConstPtr> stop_signs_s;
  TRY_RUN(map.GetStopSignAssociatedStopSigns(Id, &stop_signs_s))
  SIZECOUT(stop_signs);

/**
 * @brief  get all yieldsigns in certain range
 * @param id the number of  stop signals
 * @param Lanes all signs match conditions
 * @return int  0 success, otherwise failed
 */
std::vector<apollo::hdmap::LaneInfoConstPtr> Lanes;
TRY_RUN(map.GetStopSignAssociatedLanes(Id, &Lanes))
SIZECOUT(Lanes);

/**
 * @brief get all road and junctions boundaries within certain range
 * @param point the target position
 * @param distance the forward search distance
 * @param signals all signals match conditions
 * @return 0:success, otherwise failed
 */
std::pair<double,double> range ;
range.first = 100;
range.second = 100;
    
apollo::hdmap::Map local_map;
TRY_RUN( map.GetLocalMap(point, range, &local_map) )

  return 0;
}