
#include <ocl/Component.hpp>

#include <controllerman_controllers/trajectory_dispatcher.h>
#include <controllerman_controllers/controller_mux.h>

#include <controllerman_controllers/controllers/trivial.h>
#include <controllerman_controllers/controllers/gravity_compensation.h>
#include <controllerman_controllers/controllers/joint_pid.h>
#include <controllerman_controllers/controllers/wrench.h>
#include <controllerman_controllers/controllers/pose.h>

ORO_CREATE_COMPONENT_LIBRARY()

ORO_LIST_COMPONENT_TYPE(controllerman_controllers::TrajectoryDispatcher)

ORO_LIST_COMPONENT_TYPE(controllerman_controllers::ControllerMux)

ORO_LIST_COMPONENT_TYPE(controllerman_controllers::controllers::Trivial)
ORO_LIST_COMPONENT_TYPE(controllerman_controllers::controllers::GravityCompensation)
ORO_LIST_COMPONENT_TYPE(controllerman_controllers::controllers::JointPID)
ORO_LIST_COMPONENT_TYPE(controllerman_controllers::controllers::CartesianWrench)
ORO_LIST_COMPONENT_TYPE(controllerman_controllers::controllers::CartesianPose)
