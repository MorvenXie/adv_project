TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    cyber/base/atomic_hash_map_test.cc \
    cyber/base/atomic_rw_lock_test.cc \
    cyber/base/bounded_queue_test.cc \
    cyber/base/for_each_test.cc \
    cyber/base/object_pool_test.cc \
    cyber/base/signal_test.cc \
    cyber/base/unbounded_queue_test.cc \
    cyber/common/environment_test.cc \
    cyber/common/file.cc \
    cyber/common/file_test.cc \
    cyber/common/global_data.cc \
    cyber/common/log_test.cc \
    cyber/common/macros_test.cc \
    cyber/proto/choreography_conf.pb.cc \
    cyber/proto/classic_conf.pb.cc \
    cyber/proto/clock.pb.cc \
    cyber/proto/component_conf.pb.cc \
    cyber/proto/cyber_conf.pb.cc \
    cyber/proto/dag_conf.pb.cc \
    cyber/proto/parameter.pb.cc \
    cyber/proto/perf_conf.pb.cc \
    cyber/proto/proto_desc.pb.cc \
    cyber/proto/qos_profile.pb.cc \
    cyber/proto/record.pb.cc \
    cyber/proto/role_attributes.pb.cc \
    cyber/proto/run_mode_conf.pb.cc \
    cyber/proto/scheduler_conf.pb.cc \
    cyber/proto/topology_change.pb.cc \
    cyber/proto/transport_conf.pb.cc \
    cyber/proto/unit_test.pb.cc \
    cyber/time/clock.cc \
    cyber/time/clock_test.cc \
    cyber/time/duration.cc \
    cyber/time/duration_test.cc \
    cyber/time/rate.cc \
    cyber/time/time.cc \
    cyber/time/time_test.cc \
    modules/adapter/kernel_adapter/adapter_manager.cc \
    modules/adapter/kernel_adapter/adapter_routing.cc \
    modules/common/adapters/adapter_gflags.cc \
    modules/common/configs/config_gflags.cc \
    modules/common/configs/vehicle_config_helper.cc \
    modules/common/configs/vehicle_config_helper_test.cc \
    modules/common/filters/digital_filter.cc \
    modules/common/filters/digital_filter_coefficients.cc \
    modules/common/filters/digital_filter_coefficients_test.cc \
    modules/common/filters/digital_filter_test.cc \
    modules/common/filters/mean_filter.cc \
    modules/common/filters/mean_filter_test.cc \
    modules/common/kv_db/kv_db.cc \
    modules/common/kv_db/kv_db_test.cc \
    modules/common/kv_db/kv_db_tool.cc \
    modules/common/math/qp_solver/qp_solver.cc \
    modules/common/math/aabox2d.cc \
    modules/common/math/aabox2d_test.cc \
    modules/common/math/aaboxkdtree2d_test.cc \
    modules/common/math/angle.cc \
    modules/common/math/angle_test.cc \
    modules/common/math/box2d.cc \
    modules/common/math/box2d_test.cc \
    modules/common/math/cartesian_frenet_conversion.cc \
    modules/common/math/cartesian_frenet_conversion_test.cc \
    modules/common/math/euler_angles_zxy_test.cc \
    modules/common/math/integral.cc \
    modules/common/math/integral_test.cc \
    modules/common/math/kalman_filter_test.cc \
    modules/common/math/line_segment2d.cc \
    modules/common/math/line_segment2d_test.cc \
    modules/common/math/linear_interpolation.cc \
    modules/common/math/linear_interpolation_test.cc \
    modules/common/math/linear_quadratic_regulator.cc \
    modules/common/math/math_utils.cc \
    modules/common/math/math_utils_test.cc \
    modules/common/math/matrix_operations.cc \
    modules/common/math/matrix_operations_test.cc \
    modules/common/math/mpc_osqp.cc \
    modules/common/math/mpc_osqp_test.cc \
    modules/common/math/path_matcher.cc \
    modules/common/math/polygon2d.cc \
    modules/common/math/polygon2d_test.cc \
    modules/common/math/quaternion_test.cc \
    modules/common/math/search.cc \
    modules/common/math/search_test.cc \
    modules/common/math/sin_table.cc \
    modules/common/math/vec2d.cc \
    modules/common/math/vec2d_test.cc \
    modules/common/monitor_log/proto/monitor_log.pb.cc \
    modules/common/monitor_log/monitor_log_buffer.cc \
    modules/common/monitor_log/monitor_log_buffer_test.cc \
    modules/common/monitor_log/monitor_logger.cc \
    modules/common/monitor_log/monitor_logger_test.cc \
    modules/common/proto/direction.pb.cc \
    modules/common/proto/drive_event.pb.cc \
    modules/common/proto/drive_state.pb.cc \
    modules/common/proto/error_code.pb.cc \
    modules/common/proto/geometry.pb.cc \
    modules/common/proto/header.pb.cc \
    modules/common/proto/pnc_point.pb.cc \
    modules/common/proto/vehicle_signal.pb.cc \
    modules/common/status/status_test.cc \
    modules/common/util/factory_test.cc \
    modules/common/util/json_util.cc \
    modules/common/util/json_util_test.cc \
    modules/common/util/lru_cache_test.cc \
    modules/common/util/message_util_test.cc \
    modules/common/util/perf_util.cc \
    modules/common/util/perf_util_test.cc \
    modules/common/util/points_downsampler_test.cc \
    modules/common/util/string_util.cc \
    modules/common/util/string_util_test.cc \
    modules/common/util/time_util_test.cc \
    modules/common/util/util.cc \
    modules/common/util/util_test.cc \
    modules/common/vehicle_model/vehicle_model.cc \
    modules/common/vehicle_model/vehicle_model_test.cc \
    modules/common/vehicle_state/vehicle_state_provider.cc \
    modules/common/vehicle_state/vehicle_state_provider_test.cc \
    modules/drivers/gnss/proto/gnss_raw_observation.pb.cc \
    modules/localization/common/localization_gflags.cc \
    modules/localization/msf/common/io/velodyne_utility.cc \
    modules/localization/msf/common/util/base_map_cache_test.cc \
    modules/localization/msf/common/util/compression.cc \
    modules/localization/msf/common/util/compression_test.cc \
    modules/localization/msf/common/util/file_utility.cc \
    modules/localization/msf/common/util/frame_transform.cc \
    modules/localization/msf/common/util/frame_transform_test.cc \
    modules/localization/msf/common/util/rect2d_test.cc \
    modules/localization/msf/common/util/system_utility.cc \
    modules/localization/msf/common/util/system_utility_test.cc \
    modules/localization/msf/local_integ/gnss_msg_transfer.cc \
    modules/localization/msf/local_integ/lidar_msg_transfer.cc \
    modules/localization/msf/local_integ/localization_gnss_process.cc \
    modules/localization/msf/local_integ/localization_integ.cc \
    modules/localization/msf/local_integ/localization_integ_impl.cc \
    modules/localization/msf/local_integ/localization_integ_process.cc \
    modules/localization/msf/local_integ/localization_lidar.cc \
    modules/localization/msf/local_integ/localization_lidar_process.cc \
    modules/localization/msf/local_integ/measure_republish_process.cc \
    modules/localization/msf/local_integ/online_localization_expert.cc \
    modules/localization/msf/local_map/base_map/base_map.cc \
    modules/localization/msf/local_map/base_map/base_map_config.cc \
    modules/localization/msf/local_map/base_map/base_map_matrix.cc \
    modules/localization/msf/local_map/base_map/base_map_node.cc \
    modules/localization/msf/local_map/base_map/base_map_node_index.cc \
    modules/localization/msf/local_map/base_map/base_map_pool.cc \
    modules/localization/msf/local_map/base_map/map_node_index_test.cc \
    modules/localization/msf/local_map/lossless_map/lossless_map.cc \
    modules/localization/msf/local_map/lossless_map/lossless_map_config.cc \
    modules/localization/msf/local_map/lossless_map/lossless_map_config_test.cc \
    modules/localization/msf/local_map/lossless_map/lossless_map_matrix.cc \
    modules/localization/msf/local_map/lossless_map/lossless_map_node.cc \
    modules/localization/msf/local_map/lossless_map/lossless_map_pool.cc \
    modules/localization/msf/local_map/lossless_map/map_pool_test.cc \
    modules/localization/msf/local_map/lossy_map/lossy_map_2d.cc \
    modules/localization/msf/local_map/lossy_map/lossy_map_config_2d.cc \
    modules/localization/msf/local_map/lossy_map/lossy_map_config_2d_test.cc \
    modules/localization/msf/local_map/lossy_map/lossy_map_matrix_2d.cc \
    modules/localization/msf/local_map/lossy_map/lossy_map_pool_2d.cc \
    modules/localization/msf/local_map/ndt_map/ndt_map.cc \
    modules/localization/msf/local_map/ndt_map/ndt_map_config.cc \
    modules/localization/msf/local_map/ndt_map/ndt_map_config_test.cc \
    modules/localization/msf/local_map/ndt_map/ndt_map_matrix.cc \
    modules/localization/msf/local_map/ndt_map/ndt_map_node.cc \
    modules/localization/msf/local_map/ndt_map/ndt_map_pool.cc \
    modules/localization/msf/local_map/ndt_map/ndt_map_test.cc \
    modules/localization/msf/local_pyramid_map/base_map/base_map.cc \
    modules/localization/msf/local_pyramid_map/base_map/base_map_config.cc \
    modules/localization/msf/local_pyramid_map/base_map/base_map_matrix.cc \
    modules/localization/msf/local_pyramid_map/base_map/base_map_node.cc \
    modules/localization/msf/local_pyramid_map/base_map/base_map_node_config.cc \
    modules/localization/msf/local_pyramid_map/base_map/base_map_node_index.cc \
    modules/localization/msf/local_pyramid_map/base_map/base_map_pool.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_config.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_config_test.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_matrix.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_matrix_handler.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_node.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_node_config.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_pool.cc \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_test.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_config.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_config_test.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_matrix.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_matrix_handler.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_matrix_handler_test.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_matrix_test.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_node.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_node_config.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_node_test.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_pool.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_pool_test.cc \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_test.cc \
    modules/localization/msf/local_tool/data_extraction/compare_poses.cc \
    modules/localization/msf/local_tool/data_extraction/cyber_record_parser.cc \
    modules/localization/msf/local_tool/data_extraction/cyber_record_reader.cc \
    modules/localization/msf/local_tool/data_extraction/location_exporter.cc \
    modules/localization/msf/local_tool/data_extraction/pcd_exporter.cc \
    modules/localization/msf/local_tool/local_visualization/engine/visualization_engine.cc \
    modules/localization/msf/local_tool/local_visualization/engine/visualization_manager.cc \
    modules/localization/msf/local_tool/local_visualization/offline_visual/offline_local_visualizer.cc \
    modules/localization/msf/local_tool/local_visualization/offline_visual/offline_local_visualizer_main.cc \
    modules/localization/msf/local_tool/local_visualization/online_visual/online_visualizer_component.cc \
    modules/localization/msf/local_tool/map_creation/poses_interpolation/poses_interpolation.cc \
    modules/localization/msf/local_tool/map_creation/lossless_map_creator.cc \
    modules/localization/msf/local_tool/map_creation/lossless_map_to_lossy_map.cc \
    modules/localization/msf/local_tool/map_creation/poses_interpolator.cc \
    modules/localization/msf/msf_localization.cc \
    modules/localization/msf/msf_localization_component.cc \
    modules/localization/msf/msf_localization_test.cc \
    modules/localization/ndt/map_creation/ndt_map_creator.cc \
    modules/localization/ndt/ndt_locator/lidar_locator_ndt.cc \
    modules/localization/ndt/ndt_locator/lidar_locator_ndt_test.cc \
    modules/localization/ndt/ndt_locator/ndt_solver_test.cc \
    modules/localization/ndt/localization_pose_buffer.cc \
    modules/localization/ndt/localization_pose_buffer_test.cc \
    modules/localization/ndt/ndt_localization.cc \
    modules/localization/ndt/ndt_localization_component.cc \
    modules/localization/ndt/ndt_localization_test.cc \
    modules/localization/proto/gnss_pnt_result.pb.cc \
    modules/localization/proto/gps.pb.cc \
    modules/localization/proto/imu.pb.cc \
    modules/localization/proto/localization.pb.cc \
    modules/localization/proto/localization_config.pb.cc \
    modules/localization/proto/localization_status.pb.cc \
    modules/localization/proto/measure.pb.cc \
    modules/localization/proto/pose.pb.cc \
    modules/localization/proto/rtk_config.pb.cc \
    modules/localization/proto/sins_pva.pb.cc \
    modules/localization/rtk/rtk_localization.cc \
    modules/localization/rtk/rtk_localization_component.cc \
    modules/localization/rtk/rtk_localization_test.cc \
    modules/map/hdmap/adapter/xml_parser/header_xml_parser.cc \
    modules/map/hdmap/adapter/xml_parser/junctions_xml_parser.cc \
    modules/map/hdmap/adapter/xml_parser/lanes_xml_parser.cc \
    modules/map/hdmap/adapter/xml_parser/objects_xml_parser.cc \
    modules/map/hdmap/adapter/xml_parser/roads_xml_parser.cc \
    modules/map/hdmap/adapter/xml_parser/signals_xml_parser.cc \
    modules/map/hdmap/adapter/xml_parser/util_xml_parser.cc \
    modules/map/hdmap/adapter/coordinate_convert_tool.cc \
    modules/map/hdmap/adapter/opendrive_adapter.cc \
    modules/map/hdmap/adapter/proto_organizer.cc \
    modules/map/hdmap/hdmap.cc \
    modules/map/hdmap/hdmap_common.cc \
    modules/map/hdmap/hdmap_common_test.cc \
    modules/map/hdmap/hdmap_impl.cc \
    modules/map/hdmap/hdmap_impl_test.cc \
    modules/map/hdmap/hdmap_util.cc \
    modules/map/hdmap/hdmap_util_test.cc \
    modules/map/pnc_map/cuda_util_test.cc \
    modules/map/pnc_map/path.cc \
    modules/map/pnc_map/path_test.cc \
    modules/map/pnc_map/pnc_map.cc \
    modules/map/pnc_map/pnc_map_test.cc \
    modules/map/pnc_map/route_segments.cc \
    modules/map/pnc_map/route_segments_test.cc \
    modules/map/proto/map.pb.cc \
    modules/map/proto/map_clear_area.pb.cc \
    modules/map/proto/map_crosswalk.pb.cc \
    modules/map/proto/map_geometry.pb.cc \
    modules/map/proto/map_id.pb.cc \
    modules/map/proto/map_junction.pb.cc \
    modules/map/proto/map_lane.pb.cc \
    modules/map/proto/map_overlap.pb.cc \
    modules/map/proto/map_parking_space.pb.cc \
    modules/map/proto/map_pnc_junction.pb.cc \
    modules/map/proto/map_road.pb.cc \
    modules/map/proto/map_rsu.pb.cc \
    modules/map/proto/map_signal.pb.cc \
    modules/map/proto/map_speed_bump.pb.cc \
    modules/map/proto/map_speed_control.pb.cc \
    modules/map/proto/map_stop_sign.pb.cc \
    modules/map/proto/map_yield_sign.pb.cc \
    modules/map/relative_map/common/relative_map_gflags.cc \
    modules/map/relative_map/proto/navigation.pb.cc \
    modules/map/relative_map/proto/navigator_config.pb.cc \
    modules/map/relative_map/proto/relative_map_config.pb.cc \
    modules/map/relative_map/tools/navigation_dummy.cc \
    modules/map/relative_map/tools/navigator.cc \
    modules/map/relative_map/navigation_lane.cc \
    modules/map/relative_map/navigation_lane_test.cc \
    modules/map/relative_map/relative_map.cc \
    modules/map/relative_map/relative_map_component.cc \
    modules/perception/proto/perception_obstacle.pb.cc \
    modules/routing/common/routing_gflags.cc \
    modules/routing/core/black_list_range_generator.cc \
    modules/routing/core/navigator.cc \
    modules/routing/core/result_generator.cc \
    modules/routing/graph/node_with_range.cc \
    modules/routing/graph/sub_topo_graph.cc \
    modules/routing/graph/sub_topo_graph_test.cc \
    modules/routing/graph/topo_graph.cc \
    modules/routing/graph/topo_graph_test.cc \
    modules/routing/graph/topo_node.cc \
    modules/routing/graph/topo_node_test.cc \
    modules/routing/graph/topo_range.cc \
    modules/routing/graph/topo_range_manager.cc \
    modules/routing/graph/topo_range_test.cc \
    modules/routing/graph/topo_test_utils.cc \
    modules/routing/proto/poi.pb.cc \
    modules/routing/proto/routing.pb.cc \
    modules/routing/proto/routing_config.pb.cc \
    modules/routing/proto/topo_graph.pb.cc \
    modules/routing/strategy/a_star_strategy.cc \
    modules/routing/topo_creator/edge_creator.cc \
    modules/routing/topo_creator/graph_creator.cc \
    modules/routing/topo_creator/graph_creator_test.cc \
    modules/routing/topo_creator/node_creator.cc \
    modules/routing/topo_creator/topo_creator.cc \
    modules/routing/routing.cc \
    modules/routing/routing_component.cc \
    main.cpp \
    modules/common/configs/proto/vehicle_config.pb.cc \

HEADERS += \
    cyber/base/atomic_hash_map.h \
    cyber/base/atomic_rw_lock.h \
    cyber/base/bounded_queue.h \
    cyber/base/concurrent_object_pool.h \
    cyber/base/for_each.h \
    cyber/base/macros.h \
    cyber/base/object_pool.h \
    cyber/base/reentrant_rw_lock.h \
    cyber/base/rw_lock_guard.h \
    cyber/base/signal.h \
    cyber/base/thread_pool.h \
    cyber/base/thread_safe_queue.h \
    cyber/base/unbounded_queue.h \
    cyber/base/wait_strategy.h \
    cyber/common/environment.h \
    cyber/common/file.h \
    cyber/common/global_data.h \
    cyber/common/log.h \
    cyber/common/macros.h \
    cyber/common/time_conversion.h \
    cyber/common/types.h \
    cyber/common/util.h \
    cyber/proto/choreography_conf.pb.h \
    cyber/proto/classic_conf.pb.h \
    cyber/proto/clock.pb.h \
    cyber/proto/component_conf.pb.h \
    cyber/proto/cyber_conf.pb.h \
    cyber/proto/dag_conf.pb.h \
    cyber/proto/parameter.pb.h \
    cyber/proto/perf_conf.pb.h \
    cyber/proto/proto_desc.pb.h \
    cyber/proto/qos_profile.pb.h \
    cyber/proto/record.pb.h \
    cyber/proto/role_attributes.pb.h \
    cyber/proto/run_mode_conf.pb.h \
    cyber/proto/scheduler_conf.pb.h \
    cyber/proto/topology_change.pb.h \
    cyber/proto/transport_conf.pb.h \
    cyber/proto/unit_test.pb.h \
    cyber/time/clock.h \
    cyber/time/duration.h \
    cyber/time/rate.h \
    cyber/time/time.h \
    cyber/binary.h \
    cyber/cyber.h \
    modules/adapter/kernel_adapter/adapter_manager.h \
    modules/adapter/kernel_adapter/adapter_routing.h \
    modules/common/adapters/adapter_gflags.h \
    modules/common/configs/config_gflags.h \
    modules/common/configs/vehicle_config_helper.h \
    modules/common/filters/digital_filter.h \
    modules/common/filters/digital_filter_coefficients.h \
    modules/common/filters/mean_filter.h \
    modules/common/kv_db/kv_db.h \
    modules/common/math/qp_solver/qp_solver.h \
    modules/common/math/aabox2d.h \
    modules/common/math/aaboxkdtree2d.h \
    modules/common/math/angle.h \
    modules/common/math/box2d.h \
    modules/common/math/cartesian_frenet_conversion.h \
    modules/common/math/curve_fitting.h \
    modules/common/math/euler_angles_zxy.h \
    modules/common/math/factorial.h \
    modules/common/math/hermite_spline.h \
    modules/common/math/integral.h \
    modules/common/math/kalman_filter.h \
    modules/common/math/line_segment2d.h \
    modules/common/math/linear_interpolation.h \
    modules/common/math/linear_quadratic_regulator.h \
    modules/common/math/math_utils.h \
    modules/common/math/matrix_operations.h \
    modules/common/math/mpc_osqp.h \
    modules/common/math/path_matcher.h \
    modules/common/math/polygon2d.h \
    modules/common/math/quaternion.h \
    modules/common/math/search.h \
    modules/common/math/sin_table.h \
    modules/common/math/vec2d.h \
    modules/common/monitor_log/proto/monitor_log.pb.h \
    modules/common/monitor_log/monitor_log_buffer.h \
    modules/common/monitor_log/monitor_logger.h \
    modules/common/proto/direction.pb.h \
    modules/common/proto/drive_event.pb.h \
    modules/common/proto/drive_state.pb.h \
    modules/common/proto/error_code.pb.h \
    modules/common/proto/geometry.pb.h \
    modules/common/proto/header.pb.h \
    modules/common/proto/pnc_point.pb.h \
    modules/common/proto/vehicle_signal.pb.h \
    modules/common/status/status.h \
    modules/common/util/color.h \
    modules/common/util/eigen_defs.h \
    modules/common/util/factory.h \
    modules/common/util/future.h \
    modules/common/util/json_util.h \
    modules/common/util/lru_cache.h \
    modules/common/util/map_util.h \
    modules/common/util/message_util.h \
    modules/common/util/perf_util.h \
    modules/common/util/point_factory.h \
    modules/common/util/points_downsampler.h \
    modules/common/util/string_util.h \
    modules/common/util/time_util.h \
    modules/common/util/util.h \
    modules/common/vehicle_model/vehicle_model.h \
    modules/common/vehicle_state/vehicle_state_provider.h \
    modules/drivers/gnss/proto/gnss_raw_observation.pb.h \
    modules/localization/common/localization_gflags.h \
    modules/localization/msf/common/io/pcl_point_types.h \
    modules/localization/msf/common/io/velodyne_utility.h \
    modules/localization/msf/common/util/base_map_cache.h \
    modules/localization/msf/common/util/compression.h \
    modules/localization/msf/common/util/extract_ground_plane.h \
    modules/localization/msf/common/util/file_utility.h \
    modules/localization/msf/common/util/frame_transform.h \
    modules/localization/msf/common/util/math_util.h \
    modules/localization/msf/common/util/rect2d.h \
    modules/localization/msf/common/util/system_utility.h \
    modules/localization/msf/common/util/time_conversion.h \
    modules/localization/msf/common/util/voxel_grid_covariance_hdmap.h \
    modules/localization/msf/local_integ/gnss_msg_transfer.h \
    modules/localization/msf/local_integ/lidar_msg_transfer.h \
    modules/localization/msf/local_integ/localization_gnss_process.h \
    modules/localization/msf/local_integ/localization_integ.h \
    modules/localization/msf/local_integ/localization_integ_impl.h \
    modules/localization/msf/local_integ/localization_integ_process.h \
    modules/localization/msf/local_integ/localization_lidar.h \
    modules/localization/msf/local_integ/localization_lidar_process.h \
    modules/localization/msf/local_integ/localization_params.h \
    modules/localization/msf/local_integ/measure_republish_process.h \
    modules/localization/msf/local_integ/online_localization_expert.h \
    modules/localization/msf/local_map/base_map/base_map.h \
    modules/localization/msf/local_map/base_map/base_map_config.h \
    modules/localization/msf/local_map/base_map/base_map_fwd.h \
    modules/localization/msf/local_map/base_map/base_map_matrix.h \
    modules/localization/msf/local_map/base_map/base_map_node.h \
    modules/localization/msf/local_map/base_map/base_map_node_index.h \
    modules/localization/msf/local_map/base_map/base_map_pool.h \
    modules/localization/msf/local_map/lossless_map/lossless_map.h \
    modules/localization/msf/local_map/lossless_map/lossless_map_config.h \
    modules/localization/msf/local_map/lossless_map/lossless_map_matrix.h \
    modules/localization/msf/local_map/lossless_map/lossless_map_node.h \
    modules/localization/msf/local_map/lossless_map/lossless_map_pool.h \
    modules/localization/msf/local_map/lossy_map/lossy_map_2d.h \
    modules/localization/msf/local_map/lossy_map/lossy_map_config_2d.h \
    modules/localization/msf/local_map/lossy_map/lossy_map_matrix_2d.h \
    modules/localization/msf/local_map/lossy_map/lossy_map_node_2d.h \
    modules/localization/msf/local_map/lossy_map/lossy_map_pool_2d.h \
    modules/localization/msf/local_map/ndt_map/ndt_map.h \
    modules/localization/msf/local_map/ndt_map/ndt_map_config.h \
    modules/localization/msf/local_map/ndt_map/ndt_map_matrix.h \
    modules/localization/msf/local_map/ndt_map/ndt_map_node.h \
    modules/localization/msf/local_map/ndt_map/ndt_map_pool.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map_config.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map_fwd.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map_matrix.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map_matrix_handler.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map_node.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map_node_config.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map_node_index.h \
    modules/localization/msf/local_pyramid_map/base_map/base_map_pool.h \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map.h \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_config.h \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_matrix.h \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_matrix_handler.h \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_node.h \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_node_config.h \
    modules/localization/msf/local_pyramid_map/ndt_map/ndt_map_pool.h \
    modules/localization/msf/local_pyramid_map/pyramid_map/aligned_matrix.h \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map.h \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_config.h \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_matrix.h \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_matrix_handler.h \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_node.h \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_node_config.h \
    modules/localization/msf/local_pyramid_map/pyramid_map/pyramid_map_pool.h \
    modules/localization/msf/local_tool/data_extraction/cyber_record_reader.h \
    modules/localization/msf/local_tool/data_extraction/location_exporter.h \
    modules/localization/msf/local_tool/data_extraction/pcd_exporter.h \
    modules/localization/msf/local_tool/local_visualization/engine/visualization_engine.h \
    modules/localization/msf/local_tool/local_visualization/engine/visualization_manager.h \
    modules/localization/msf/local_tool/local_visualization/offline_visual/offline_local_visualizer.h \
    modules/localization/msf/local_tool/local_visualization/online_visual/online_visualizer_component.h \
    modules/localization/msf/local_tool/map_creation/poses_interpolation/poses_interpolation.h \
    modules/localization/msf/msf_localization.h \
    modules/localization/msf/msf_localization_component.h \
    modules/localization/ndt/ndt_locator/lidar_locator_ndt.h \
    modules/localization/ndt/ndt_locator/ndt_solver.h \
    modules/localization/ndt/ndt_locator/ndt_voxel_grid_covariance.h \
    modules/localization/ndt/localization_pose_buffer.h \
    modules/localization/ndt/ndt_localization.h \
    modules/localization/ndt/ndt_localization_component.h \
    modules/localization/proto/gnss_pnt_result.pb.h \
    modules/localization/proto/gps.pb.h \
    modules/localization/proto/imu.pb.h \
    modules/localization/proto/localization.pb.h \
    modules/localization/proto/localization_config.pb.h \
    modules/localization/proto/localization_status.pb.h \
    modules/localization/proto/measure.pb.h \
    modules/localization/proto/pose.pb.h \
    modules/localization/proto/rtk_config.pb.h \
    modules/localization/proto/sins_pva.pb.h \
    modules/localization/rtk/rtk_localization.h \
    modules/localization/rtk/rtk_localization_component.h \
    modules/map/hdmap/adapter/xml_parser/common_define.h \
    modules/map/hdmap/adapter/xml_parser/header_xml_parser.h \
    modules/map/hdmap/adapter/xml_parser/junctions_xml_parser.h \
    modules/map/hdmap/adapter/xml_parser/lanes_xml_parser.h \
    modules/map/hdmap/adapter/xml_parser/objects_xml_parser.h \
    modules/map/hdmap/adapter/xml_parser/roads_xml_parser.h \
    modules/map/hdmap/adapter/xml_parser/signals_xml_parser.h \
    modules/map/hdmap/adapter/xml_parser/status.h \
    modules/map/hdmap/adapter/xml_parser/util_xml_parser.h \
    modules/map/hdmap/adapter/coordinate_convert_tool.h \
    modules/map/hdmap/adapter/opendrive_adapter.h \
    modules/map/hdmap/adapter/proto_organizer.h \
    modules/map/hdmap/hdmap.h \
    modules/map/hdmap/hdmap_common.h \
    modules/map/hdmap/hdmap_impl.h \
    modules/map/hdmap/hdmap_util.h \
    modules/map/pnc_map/cuda_util.h \
    modules/map/pnc_map/path.h \
    modules/map/pnc_map/pnc_map.h \
    modules/map/pnc_map/route_segments.h \
    modules/map/proto/map.pb.h \
    modules/map/proto/map_clear_area.pb.h \
    modules/map/proto/map_crosswalk.pb.h \
    modules/map/proto/map_geometry.pb.h \
    modules/map/proto/map_id.pb.h \
    modules/map/proto/map_junction.pb.h \
    modules/map/proto/map_lane.pb.h \
    modules/map/proto/map_overlap.pb.h \
    modules/map/proto/map_parking_space.pb.h \
    modules/map/proto/map_pnc_junction.pb.h \
    modules/map/proto/map_road.pb.h \
    modules/map/proto/map_rsu.pb.h \
    modules/map/proto/map_signal.pb.h \
    modules/map/proto/map_speed_bump.pb.h \
    modules/map/proto/map_speed_control.pb.h \
    modules/map/proto/map_stop_sign.pb.h \
    modules/map/proto/map_yield_sign.pb.h \
    modules/map/relative_map/common/relative_map_gflags.h \
    modules/map/relative_map/proto/navigation.pb.h \
    modules/map/relative_map/proto/navigator_config.pb.h \
    modules/map/relative_map/proto/relative_map_config.pb.h \
    modules/map/relative_map/navigation_lane.h \
    modules/map/relative_map/relative_map.h \
    modules/map/relative_map/relative_map_component.h \
    modules/perception/proto/perception_obstacle.pb.h \
    modules/routing/common/routing_gflags.h \
    modules/routing/core/black_list_range_generator.h \
    modules/routing/core/navigator.h \
    modules/routing/core/result_generator.h \
    modules/routing/graph/node_with_range.h \
    modules/routing/graph/range_utils.h \
    modules/routing/graph/sub_topo_graph.h \
    modules/routing/graph/topo_graph.h \
    modules/routing/graph/topo_node.h \
    modules/routing/graph/topo_range.h \
    modules/routing/graph/topo_range_manager.h \
    modules/routing/graph/topo_test_utils.h \
    modules/routing/proto/poi.pb.h \
    modules/routing/proto/routing.pb.h \
    modules/routing/proto/routing_config.pb.h \
    modules/routing/proto/topo_graph.pb.h \
    modules/routing/strategy/a_star_strategy.h \
    modules/routing/strategy/strategy.h \
    modules/routing/topo_creator/edge_creator.h \
    modules/routing/topo_creator/graph_creator.h \
    modules/routing/topo_creator/node_creator.h \
    modules/routing/routing.h \
    modules/routing/routing_component.h \
    modules/common/configs/proto/vehicle_config.pb.h \