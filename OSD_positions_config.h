//OSD elements positions
//in betaflight configurator set OSD elements to your desired positions and in CLI type "set osd" to retreieve the numbers.
//234 -> not visible. Horizontally 2048-2074(spacing 1), vertically 2048-2528(spacing 32). 26 characters X 15 lines

//currently working elements
const uint16_t osd_avg_cell_voltage_pos = 234;
const uint16_t osd_pitch_angle_pos = 2538;
const uint16_t osd_roll_angle_pos = 2542;
const uint16_t osd_crosshairs_pos = 234;

const uint16_t osd_rssi_value_pos = 2048;
const uint16_t osd_home_dir_pos = 2062;
const uint16_t osd_home_dist_pos = 2063;

const uint16_t osd_main_batt_voltage_pos = 2073;
const uint16_t osd_gps_speed_pos = 2273;
const uint16_t osd_gps_lat_pos = 2419;
const uint16_t osd_gps_lon_pos = 2451;

const uint16_t osd_display_name_pos = 234;
const uint16_t osd_flymode_pos = 234;
const uint16_t osd_craft_name_pos = 2144;
const uint16_t osd_current_draw_pos = 2103;
const uint16_t osd_mah_drawn_pos = 2138;
uint16_t osd_gps_sats_pos = 2080;

const uint16_t osd_altitude_pos = 2296;
const uint16_t osd_numerical_vario_pos = 2330;

//not implemented or not available
const uint16_t osd_throttle_pos_pos = 234;
const uint16_t osd_vtx_channel_pos = 234;
const uint16_t osd_roll_pids_pos = 234;
const uint16_t osd_pitch_pids_pos = 234;
const uint16_t osd_yaw_pids_pos = 234;
const uint16_t osd_power_pos = 234;
const uint16_t osd_pidrate_profile_pos = 234;
const uint16_t osd_warnings_pos = 234;
const uint16_t osd_debug_pos = 234;
const uint16_t osd_artificial_horizon_pos = 234;
const uint16_t osd_horizon_sidebars_pos = 234;
const uint16_t osd_item_timer_1_pos = 234;
const uint16_t osd_item_timer_2_pos = 234;
const uint16_t osd_main_batt_usage_pos = 234;
const uint16_t osd_disarmed_pos = 234;
const uint16_t osd_numerical_heading_pos = 234;
const uint16_t osd_compass_bar_pos = 234;
const uint16_t osd_esc_tmp_pos = 234;
const uint16_t osd_esc_rpm_pos = 234;
const uint16_t osd_remaining_time_estimate_pos = 234;
const uint16_t osd_rtc_datetime_pos = 234;
const uint16_t osd_adjustment_range_pos = 234;
const uint16_t osd_core_temperature_pos = 234;
const uint16_t osd_anti_gravity_pos = 234;
const uint16_t osd_g_force_pos = 234;
const uint16_t osd_motor_diag_pos = 234;
const uint16_t osd_log_status_pos = 234;
const uint16_t osd_flip_arrow_pos = 234;
const uint16_t osd_link_quality_pos = 234;
const uint16_t osd_flight_dist_pos = 234;
const uint16_t osd_stick_overlay_left_pos = 234;
const uint16_t osd_stick_overlay_right_pos = 234;
const uint16_t osd_esc_rpm_freq_pos = 234;
const uint16_t osd_rate_profile_name_pos = 234;
const uint16_t osd_pid_profile_name_pos = 234;
const uint16_t osd_profile_name_pos = 234;
const uint16_t osd_rssi_dbm_value_pos = 234;
const uint16_t osd_rc_channels_pos = 234;
