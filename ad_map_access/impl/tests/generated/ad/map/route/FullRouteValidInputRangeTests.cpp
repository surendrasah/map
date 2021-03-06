/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/map/route/FullRouteValidInputRange.hpp"

TEST(FullRouteValidInputRangeTests, testValidInputRange)
{
  ::ad::map::route::FullRoute value;
  ::ad::map::route::RoadSegmentList valueRoadSegments;
  ::ad::map::route::RoadSegment valueRoadSegmentsElement;
  ::ad::map::route::LaneSegmentList valueRoadSegmentsElementDrivableLaneSegments;
  ::ad::map::route::LaneSegment valueRoadSegmentsElementDrivableLaneSegmentsElement;
  ::ad::map::lane::LaneId valueRoadSegmentsElementDrivableLaneSegmentsElementLeftNeighbor(1);
  valueRoadSegmentsElementDrivableLaneSegmentsElement.leftNeighbor
    = valueRoadSegmentsElementDrivableLaneSegmentsElementLeftNeighbor;
  ::ad::map::lane::LaneId valueRoadSegmentsElementDrivableLaneSegmentsElementRightNeighbor(1);
  valueRoadSegmentsElementDrivableLaneSegmentsElement.rightNeighbor
    = valueRoadSegmentsElementDrivableLaneSegmentsElementRightNeighbor;
  ::ad::map::lane::LaneIdList valueRoadSegmentsElementDrivableLaneSegmentsElementPredecessors;
  ::ad::map::lane::LaneId valueRoadSegmentsElementDrivableLaneSegmentsElementPredecessorsElement(1);
  valueRoadSegmentsElementDrivableLaneSegmentsElementPredecessors.resize(
    1, valueRoadSegmentsElementDrivableLaneSegmentsElementPredecessorsElement);
  valueRoadSegmentsElementDrivableLaneSegmentsElement.predecessors
    = valueRoadSegmentsElementDrivableLaneSegmentsElementPredecessors;
  ::ad::map::lane::LaneIdList valueRoadSegmentsElementDrivableLaneSegmentsElementSuccessors;
  ::ad::map::lane::LaneId valueRoadSegmentsElementDrivableLaneSegmentsElementSuccessorsElement(1);
  valueRoadSegmentsElementDrivableLaneSegmentsElementSuccessors.resize(
    1, valueRoadSegmentsElementDrivableLaneSegmentsElementSuccessorsElement);
  valueRoadSegmentsElementDrivableLaneSegmentsElement.successors
    = valueRoadSegmentsElementDrivableLaneSegmentsElementSuccessors;
  ::ad::map::route::LaneInterval valueRoadSegmentsElementDrivableLaneSegmentsElementLaneInterval;
  ::ad::map::lane::LaneId valueRoadSegmentsElementDrivableLaneSegmentsElementLaneIntervalLaneId(1);
  valueRoadSegmentsElementDrivableLaneSegmentsElementLaneInterval.laneId
    = valueRoadSegmentsElementDrivableLaneSegmentsElementLaneIntervalLaneId;
  ::ad::physics::ParametricValue valueRoadSegmentsElementDrivableLaneSegmentsElementLaneIntervalStart(0.);
  valueRoadSegmentsElementDrivableLaneSegmentsElementLaneInterval.start
    = valueRoadSegmentsElementDrivableLaneSegmentsElementLaneIntervalStart;
  ::ad::physics::ParametricValue valueRoadSegmentsElementDrivableLaneSegmentsElementLaneIntervalEnd(0.);
  valueRoadSegmentsElementDrivableLaneSegmentsElementLaneInterval.end
    = valueRoadSegmentsElementDrivableLaneSegmentsElementLaneIntervalEnd;
  bool valueRoadSegmentsElementDrivableLaneSegmentsElementLaneIntervalWrongWay{true};
  valueRoadSegmentsElementDrivableLaneSegmentsElementLaneInterval.wrongWay
    = valueRoadSegmentsElementDrivableLaneSegmentsElementLaneIntervalWrongWay;
  valueRoadSegmentsElementDrivableLaneSegmentsElement.laneInterval
    = valueRoadSegmentsElementDrivableLaneSegmentsElementLaneInterval;
  valueRoadSegmentsElementDrivableLaneSegments.resize(1, valueRoadSegmentsElementDrivableLaneSegmentsElement);
  valueRoadSegmentsElement.drivableLaneSegments = valueRoadSegmentsElementDrivableLaneSegments;
  ::ad::map::route::SegmentCounter valueRoadSegmentsElementSegmentCountFromDestination(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  valueRoadSegmentsElement.segmentCountFromDestination = valueRoadSegmentsElementSegmentCountFromDestination;
  ::ad::map::point::BoundingSphere valueRoadSegmentsElementBoundingSphere;
  ::ad::map::point::ECEFPoint valueRoadSegmentsElementBoundingSphereCenter;
  ::ad::map::point::ECEFCoordinate valueRoadSegmentsElementBoundingSphereCenterX(-6400000);
  valueRoadSegmentsElementBoundingSphereCenter.x = valueRoadSegmentsElementBoundingSphereCenterX;
  ::ad::map::point::ECEFCoordinate valueRoadSegmentsElementBoundingSphereCenterY(-6400000);
  valueRoadSegmentsElementBoundingSphereCenter.y = valueRoadSegmentsElementBoundingSphereCenterY;
  ::ad::map::point::ECEFCoordinate valueRoadSegmentsElementBoundingSphereCenterZ(-6400000);
  valueRoadSegmentsElementBoundingSphereCenter.z = valueRoadSegmentsElementBoundingSphereCenterZ;
  valueRoadSegmentsElementBoundingSphere.center = valueRoadSegmentsElementBoundingSphereCenter;
  ::ad::physics::Distance valueRoadSegmentsElementBoundingSphereRadius(0.);
  valueRoadSegmentsElementBoundingSphere.radius = valueRoadSegmentsElementBoundingSphereRadius;
  valueRoadSegmentsElement.boundingSphere = valueRoadSegmentsElementBoundingSphere;
  valueRoadSegments.resize(1, valueRoadSegmentsElement);
  value.roadSegments = valueRoadSegments;
  ::ad::map::route::RoutePlanningCounter valueRoutePlanningCounter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
  value.routePlanningCounter = valueRoutePlanningCounter;
  ::ad::map::route::SegmentCounter valueFullRouteSegmentCount(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  value.fullRouteSegmentCount = valueFullRouteSegmentCount;
  ASSERT_TRUE(withinValidInputRange(value));
}
