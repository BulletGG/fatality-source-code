#pragma once

namespace offsets
{
        constexpr uint64_t interface_client = 0x5f950a0a0560036a; // fix
        constexpr uint64_t interface_entity_list = 0x6c385bd2d88bd9c5; // fix
        constexpr uint64_t interface_engine = 0x6440607e874b5eb3; // fix
        constexpr uint64_t interface_prediction = 0x26a97ec0330f7222; // fix
        constexpr uint64_t interface_move_helper = 0x8f4a73c10c6d7685; // fix
        constexpr uint64_t interface_game_movement = 0xd75d1bef22ec48c8; // fix
        constexpr uint64_t interface_globals = 0xf77913ecbf0799f7; // fix
        constexpr uint64_t interface_model_info = 0xe6cac7b268d12498; // fix
        constexpr uint64_t interface_model_render = 0xe3e936ce84c3f44e; // fix
        constexpr uint64_t interface_material_system = 0x3ad18acae725dcd7; // fix
        constexpr uint64_t interface_render_view = 0x790f9909e89adcc9; // fix
        constexpr uint64_t interface_cvar = 0x8f55ff2c8ef0f083; // fix
        constexpr uint64_t interface_view_render = 0xabbccb3b25744fd8; // fix
        constexpr uint64_t interface_view_render_beams = 0xed2603870adc719a; // fix
        constexpr uint64_t interface_game_event_manager = 0x6f1b5aa7eac0ad9e; // fix
        constexpr uint64_t interface_input = 0xde6f3f4e7cb943e9; // fix
        constexpr uint64_t interface_surface_props = 0x8c0d532171b8ac9a; // fix
        constexpr uint64_t interface_engine_trace = 0x87f54b60cdea5ada; // fix
        constexpr uint64_t interface_client_state = 0x5fbe0848b92abfcb; // fix
        constexpr uint64_t interface_surface = 0x19ba827c7ff8863a; // fix
        constexpr uint64_t interface_memalloc = 0xc6f89eb3ec46f297; // fix
        constexpr uint64_t interface_debug_overlay = 0x9c0d656b67373e7c; // fix
        constexpr uint64_t interface_glow_object_manager = 0xffded58a3e715e8e; // fix
        constexpr uint64_t interface_panel = 0x52b684df3ee66e63; // fix
        constexpr uint64_t interface_engine_sound = 0x45aa27a005c9606d; // fix
        constexpr uint64_t interface_game_rules_proxy = 0xfbd1b1bb5794d9e5; // fix
        constexpr uint64_t interface_weapon_system = 0x2b0da6691ef7f97d; // fix
        constexpr uint64_t interface_inventory_manager = 0xe8f710a554722fe; // fix
        constexpr uint64_t interface_localize = 0x83f31d18385fe68c; // fix
        constexpr uint64_t interface_hud = 0x8de9a3e3a6a72b7e; // fix
        constexpr uint64_t interface_player_resource = 0x836ed98ce95780fb; // fix
        constexpr uint64_t interface_client_leaf_system = 0xfaad2edafb3c7264; // fix
        constexpr uint64_t interface_effects = 0x20750c86c25e7925; // fix
        constexpr uint64_t interface_host_state = 0x7599ce1a802f7235; // fix
        constexpr uint64_t interface_mdl_cache = 0x666b408ce30f4ba0; // fix
        constexpr uint64_t interface_studio_render = 0xcf8a4047a0511531; // fix
        constexpr uint64_t interface_hardware_config = 0xc52b5fcd0241f48e; // fix
        constexpr uint64_t interface_client_tools = 0x56771e6c7138dac6; // fix
        constexpr uint64_t interface_string_tables = 0x5c84e591d81ed4b1; // fix
        constexpr uint64_t interface_file_system = 0x2a8ad007a599b0e3; // fix
        constexpr uint64_t interface_key_values_system = 0x3262ce91de15d0a3; // fix
        constexpr uint64_t interface_panoroama_ui_engine = 0x78e66385c86c032d; // fix
        constexpr uint64_t sig_set_abs_angles = 0xc3a1d32bd7bc089f; // fix
        constexpr uint64_t sig_set_abs_origin = 0xf5fed60f6dae2aec; // fix
        constexpr uint64_t sig_update_anim_state = 0x36e25bd40f58fb9; // fix
        constexpr uint64_t sig_ret_to_cam_think = 0x8e46e062503f02c0; // fix
        constexpr uint64_t sig_ret_to_draw_notify = 0xc42fd79f8a3030ed; // fix
        constexpr uint64_t sig_ret_to_console_print = 0xff1351fa85fcf389; // fix
        constexpr uint64_t sig_ret_to_add_notify = 0x3e5770e2b6a9782d; // fix
        constexpr uint64_t sig_ret_to_draw_crosshair = 0xf4d2f297ceea4d75; // fix
        constexpr uint64_t sig_standard_blending_rules = 0xd84a911417dc07f2; // fix
        constexpr uint64_t sig_build_transformations = 0x46ff1c838276703c; // fix
        constexpr uint64_t sig_smoke_count = 0x6f2142ec80907bd4; // fix
        constexpr uint64_t sig_get_econ_item_view = 0xde09f047f2c0b3c3; // fix
        constexpr uint64_t sig_get_sequence_act = 0x7407bc9d7fb27df9; // fix
        constexpr uint64_t sig_invalidate_physics_recursive = 0xe8d207d9e93c6229; // fix
        constexpr uint64_t sig_is_breakable_entity = 0x3928934de0ad2a4c; // fix
        constexpr uint64_t sig_print_dev_console = 0xbe3564b890efde15; // fix
        constexpr uint64_t sig_find_element = 0xd157c3edd38d6d89; // fix
        constexpr uint64_t sig_physics_run_think = 0xbe65f44bb17d2246; // fix
        constexpr uint64_t sig_cmbat_get_econ_item_view = 0xa41fb05fec6f9341; // fix
        constexpr uint64_t sig_get_static_data = 0xffd223aaf2c70828; // fix
        constexpr uint64_t sig_disable_post_processing = 0x7db4e75e9fb4d408; // fix
        constexpr uint64_t sig_gc_client_system = 0xecaa3a90ab162975; // fix
        constexpr uint64_t sig_lookup_bone = 0xccce944e870e9f67; // fix
        constexpr uint64_t sig_modifier_table = 0x24abb75efb6b789a; // fix
        constexpr uint64_t sig_load_named_sky = 0x7cc3509ae525c10a; // fix
        constexpr uint64_t sig_reveal_ranks = 0x490096b3c2ac0f82; // fix
        constexpr uint64_t sig_set_clantag = 0x64ede7812291d2bc; // fix
        constexpr uint64_t sig_deathnotice_check = 0x94dec95c061ed333; // fix
        constexpr uint64_t sig_clear_deathnotices = 0x2dbdf37b105eff46; // fix
        constexpr uint64_t sig_get_checksum = 0x2b235adcef40a112; // fix
        constexpr uint64_t sig_equip_glove = 0x1f34daea4358b3d9; // fix
        constexpr uint64_t sig_item_system = 0x37a20d6d0b3bb13e; // fix
        constexpr uint64_t sig_parse_kits_addr = 0x22fe44c2f5f98b74; // fix
        constexpr uint64_t sig_util_traceline = 0x2f246636ddcd739c; // fix
        constexpr uint64_t sig_cl_send_move_limit = 0xc1d50290b89296c2; // fix
        constexpr uint64_t sig_is_ready = 0x844414dc8356c216; // fix
        constexpr uint64_t sig_ret_to_setup_velocity = 0xc278b4f361afaf1a; // fix
        constexpr uint64_t sig_ret_to_post_data_update = 0x5cd9aa960a71db6d; // fix
        constexpr uint64_t sig_ret_to_enable_inventory = 0xf57ee058e58d2fb6; // fix
        constexpr uint64_t sig_interp_clamp = 0xfb2fdd26bb7ac499; // fix
        constexpr uint64_t sig_ret_to_trace_ray = 0xc42fea95e1cb2027; // fix
        constexpr uint64_t sig_ret_to_scope_arc = 0xde35d7f551feffe9; // fix
        constexpr uint64_t sig_ret_to_scope_lens = 0x80bc033e976bb530; // fix
        constexpr uint64_t sig_post_process_params = 0x8a472a02d278a631; // fix
        constexpr uint64_t sig_ret_to_post_network_data_received = 0x2d63be60ef1d8558; // fix
        constexpr uint64_t sig_ret_to_add_viewmodel_stattrak = 0x6a6162f1877ad02a; // fix
        constexpr uint64_t sig_trace_to_studio_csgo_hitgroups_priority = 0x2a02701bea9446a4; // fix
        constexpr uint64_t sig_should_skip_anim_frame_check = 0xaaf12770a9c49139; // fix
        constexpr uint64_t sig_somelimit = 0x553941c275e33fe7; // fix
        constexpr uint64_t sig_cvar_check = 0xedbda6235255216d; // fix
        constexpr uint64_t sig_cs_player_pred_map = 0x9adff1132c3cedb0; // fix
        constexpr uint64_t sig_base_cs_grenade_pred_map = 0x4f4704cac49e99fa; // fix
        constexpr uint64_t sig_decoy_map = 0xa9d819157ae0fdf2; // fix
        constexpr uint64_t sig_he_map = 0x23c2b09661bca9d6; // fix
        constexpr uint64_t sig_molotov_map = 0xd7807f9e1e2a11cf; // fix
        constexpr uint64_t sig_sensor_map = 0x706ab8580377a0a5; // fix
        constexpr uint64_t sig_smoke_map = 0x4bdd967cd08c857b; // fix
        constexpr uint64_t sig_flash_map = 0x3fd82477752d9151; // fix
        constexpr uint64_t sig_view_matrix = 0x7378065c760cfc52; // fix
        constexpr uint64_t sig_get_item_schema = 0xfb3531a9eb707b56; // fix
        constexpr uint64_t sig_econ_item_destructor = 0x82fb50c1b49a36b8; // fix
        constexpr uint64_t sig_create_econ_item = 0x764724ad86314692; // fix
        constexpr uint64_t sig_animstate_reset = 0x7a080929481d0ba2; // fix
        constexpr uint64_t sig_update_layer_order_preset = 0xd3928a0a815258ef; // fix
        constexpr uint64_t sig_update_equipped_state = 0xf9fdcadcfb1a1065; // fix
        constexpr uint64_t sig_set_custom_name = 0x57b82724f130663b; // fix
        constexpr uint64_t sig_set_custom_desc = 0xac82ecfda07eb6af; // fix
        constexpr uint64_t sig_set_dynamic_attribute_value = 0x52778119d3c2de0d; // fix
        constexpr uint64_t sig_empty_mapping = 0xd6dbb55482a20627; // fix
        constexpr uint64_t sig_simulation_tick = 0x8af4a3de0e05db60; // fix
        constexpr uint64_t sig_predictable = 0x1e735fa66949f69c; // fix
        constexpr uint64_t sig_custom_materials = 0x82ed461e41517960; // fix
        constexpr uint64_t sig_custom_material_initialized = 0xd5797cf7bbf4e6b9; // fix
        constexpr uint64_t sig_visual_data_processors = 0x365df4bdd74f8f9e; // fix
        constexpr uint64_t sig_spawn_time = 0x36d78d396680029c; // fix
        constexpr uint64_t sig_ragdoll = 0x28e7810d44232948; // fix
        constexpr uint64_t sig_lod_data = 0xacbf4f14183d0c92; // fix
        constexpr uint64_t sig_ik_context = 0x1aaa2f9406552861; // fix
        constexpr uint64_t sig_snapshot_front = 0x97e44daeccdc4637; // fix
        constexpr uint64_t sig_snapshot_back = 0x4a0399fdee6b65d7; // fix
        constexpr uint64_t sig_blend_tick = 0xda223f6932869407; // fix
        constexpr uint64_t sig_get_follow_entity = 0xba7e6a572cb1fd93; // fix
        constexpr uint64_t sig_last_client_fire_bullet_time = 0x8fef906073f3f319; // fix
        constexpr uint64_t sig_final_predicted_tick = 0xc293e4b7c6f0b202; // fix
        constexpr uint64_t sig_occlusion_mask = 0x9ed793f6cc4430ee; // fix
        constexpr uint64_t sig_anim_state = 0xe5eaa2bd622a212b; // fix
        constexpr uint64_t sig_command_context = 0xa50337dc518ac966; // fix
        constexpr uint64_t sig_send_matching_sequence = 0x2ed0be876534ef26; // fix
        constexpr uint64_t sig_sound_channels = 0xaed9917e2d919803; // fix
        constexpr uint64_t sig_activity_mapping = 0x7fb7c0f4aa8e9e42; // fix
        constexpr uint64_t sig_load_from_buffer = 0x13947a2831c37f5a; // fix
        constexpr uint64_t sig_modifier_table_find = 0x9bffcda77c63d82a; // fix
        constexpr uint64_t sig_modifier_table_add_string = 0x8bfc485169ebedb; // fix
        constexpr uint64_t sig_allocate_thread_id = 0xebbe2b099bac1649; // fix
        constexpr uint64_t sig_game_tonemap_settings = 0xa258d7a07d4b2677; // fix
        constexpr uint64_t sig_length_disasm_game = 0xfc01c1815b9d8094; // fix
        constexpr uint64_t sig_get_active_weapon_pre// fix = 0x3c6f262f8862b3f0; // fix
        constexpr uint64_t sig_get_layer_ideal_weight_from_sequence_cycle = 0x88f12f1cb5bcfe2e; // fix
        constexpr uint64_t sig_on_simulation_time_changing = 0x25b320b6906c5a7e; // fix
        constexpr uint64_t sig_get_root_move_parent = 0x20da1a15cd67abd0; // fix
        constexpr uint64_t sig_ik_context_construct = 0xe1285122e4d32fe7; // fix
        constexpr uint64_t sig_ik_context_destruct = 0x11534a46a7661f25; // fix
        constexpr uint64_t sig_ik_context_init = 0xb2c61463d7f39caf; // fix
        constexpr uint64_t sig_ik_context_update_targets = 0x4243e94ec7d10f48; // fix
        constexpr uint64_t sig_ik_context_solve_dependencies = 0x55c1dbb9af7ced49; // fix
        constexpr uint64_t sig_allocate_and_merge_bones = 0xb21b578e0aaea1fb; // fix
        constexpr uint64_t sig_lookup_sequence = 0x1c4a557c1afa7682; // fix
        constexpr uint64_t sig_ammodef_get = 0xefc47e99011658ab; // fix
        constexpr uint64_t sig_get_any_sequence_anim_tag = 0xe382250da638268c; // fix
        constexpr uint64_t sig_accumulate_interleaved_dispatch_layers = 0x9e0ab026c9d786a7; // fix
        constexpr uint64_t sig_process_sockets = 0x3a655f43371e14f2; // fix
        constexpr uint64_t sig_sequence_hash_find_hash = 0xfd495a1c92349968; // fix
        constexpr uint64_t sig_activity_mapping_reinitialize = 0x6a268ae97cfcd679; // fix
        constexpr uint64_t sig_find_mapping = 0x79ff80b3818739de; // fix
        constexpr uint64_t sig_index_model_sequences = 0x5702b8e6ad354621; // fix
        constexpr uint64_t sig_get_seq_desc = 0x37c02d1d677cd057; // fix
        constexpr uint64_t sig_keyvalues_init = 0xdcb56c67431e0f43; // fix
        constexpr uint64_t sig_ret_is_box_visible = 0x20cb2176c901ba72; // fix
        constexpr uint64_t sig_random_int = 0x6485da387fa70f9a; // fix
        constexpr uint64_t sig_random_float = 0x9f28ebb1c1f009d1; // fix
        constexpr uint64_t sig_random_seed = 0xa9d0ca2aa104428b; // fix
        constexpr uint64_t sig_var_mapping = 0x23f8ce10532a2ecd; // fix
        constexpr uint64_t sig_free_thread_id = 0x368a7026fcdf541f; // fix
        constexpr uint64_t sig_tls_slots = 0xb7ff556d7edf6ef8; // fix
        constexpr uint64_t sig_projectile_throwtime = 0x271b6c0e2c60e5e6; // fix
        constexpr uint64_t sig_init_materials = 0x4a5eccce6ab81636; // fix
        constexpr uint64_t sig_render_box = 0xe5e5361cbbc158be; // fix
        constexpr uint64_t sig_render_triangle = 0x4084b1f52e5a03b1; // fix
        constexpr uint64_t sig_vertex_color_ignorez = 0x421ad52fa6ad1d3e; // fix
        constexpr uint64_t sig_cycle_offset = 0x99e1e9f68a387c13; // fix
        constexpr uint64_t sig_studio_hdr = 0x563bb319e81e2b5e; // fix
        constexpr uint64_t sig_anim_layers = 0x9665292c350da9cf; // fix
        constexpr uint64_t sig_is_ragdoll = 0x70a6503e73895f47; // fix
        constexpr uint64_t sig_bone_accessor = 0xeb3755e63bc588cf; // fix
        constexpr uint64_t sig_cl_move_rest = 0xf41f9195e5a4a5d5; // fix
        constexpr uint64_t sig_post_build_transformations = 0xa5d317be05c73e98; // fix
        constexpr uint64_t sig_ret_to_post_build_transformations = 0xf7e51cb5d3a301c9; // fix
        constexpr uint64_t sig_collision_viewheight = 0xae612a2ac926698e; // fix
        constexpr uint64_t sig_collision_bounds_change_time = 0x6c4d1697ebe311bc; // fix
        constexpr uint64_t sig_velocity_patch = 0xcf3a383100b892c4; // fix
        constexpr uint64_t sig_kv_find_key = 0x4f9d628d378bc9dc; // fix
        constexpr uint64_t sig_kv_set_string = 0xa4557c28e192e86e; // fix
        constexpr uint64_t sig_surface_props = 0xffab6bcca7022fc0; // fix
        constexpr uint64_t sig_animstate_update_setabsagles = 0x54fadacfd08552c6; // fix
        constexpr uint64_t sig_mdl_create = 0x9789a04a47ed8d82; // fix
        constexpr uint64_t sig_set_merged_mdl = 0x46f1e57a0555d4da; // fix
        constexpr uint64_t sig_setup_bones_attachment_queries = 0x2ef716a05cc1838; // fix
        constexpr uint64_t sig_disable_render_target_allocation = 0xad19d20f5dc47300; // fix
        constexpr uint64_t sig_get_sequence_flags = 0x5a8a09ed34f53102; // fix
        constexpr uint64_t sig_get_iron_sight_controller = 0x7ebc5344bac80a96; // fix
        constexpr uint64_t sig_enable_invalidate_bone_cache = 0x85f4cad426f73ebb; // fix
        constexpr uint64_t sig_line_goes_through_smoke = 0xab4ea08f292f7c36; // fix
        constexpr uint64_t sig_keyvalues_from_netsmg = 0x4d6c9d4053587bb6; // fix
        constexpr uint64_t sig_model_bone_counter = 0x14e6506f7f9f7a44; // fix
        constexpr uint64_t sig_most_recent_model_bone_counter = 0x1cdbca2db4cad8d1; // fix
        constexpr uint64_t sig_accumulated_bone_mask = 0x7a06f807dd237ebc; // fix
        constexpr uint64_t sig_ret_hitbox_to_world_transforms = 0xd944c1fb78f2d004; // fix
        constexpr uint64_t sig_emit_sound = 0xdf27340985e23ba4; // fix
        constexpr uint64_t sig_add_to_dirty_kd_tree = 0xa3ed8cb40064b085; // fix
        constexpr uint64_t sig_get_player_viewmodel_arm_config_for_player_model = 0xeaf555c797db5651; // fix
        constexpr uint64_t sig_client_side_addons_mask = 0xff4c0d4b3f958c49; // fix
        constexpr uint64_t sig_assassination_target_addon = 0x42893065b2bd69ca; // fix
        constexpr uint64_t sig_update_addon_models = 0xd9be6e58a8500964; // fix
        constexpr uint64_t sig_msg_voicedata_constructor = 0xda3234911b157b58; // fix
        constexpr uint64_t sig_parse_svg = 0x704eef6d50899593; // fix
        constexpr uint64_t sig_construct_image = 0x70530363b711fce4; // fix
        constexpr uint64_t sig_load_text_file = 0xe26232176602d8fc; // fix
        constexpr uint64_t sig_econ_item_system = 0xa57ad8774ca765fc; // fix
        constexpr uint64_t sig_clear_hud_weapon_icon = 0x907c4b8bf3a6b3d7; // fix
        constexpr uint64_t sig_skinchanger_spam_patch = 0xaee4871f0b157c17; // fix
        constexpr uint64_t sig_cvar_vac_check = 0x5aedb571a8048798; // fix
        constexpr uint64_t sig_v8_try_catch_ctor = 0x56d1d749879ead0e; // fix
        constexpr uint64_t sig_v8_try_catch_dtor = 0x1b384287178dbf15; // fix
        constexpr uint64_t sig_v8_handle_scope_ctor = 0x6c0ada1422807960; // fix
        constexpr uint64_t sig_v8_handle_scope_dtor = 0x5bdb2735b13d980c; // fix
        constexpr uint64_t sig_v8_handle_scope_create_handle = 0xddf663355d4b45ca; // fix
        constexpr uint64_t sig_v8_context_enter = 0x9b878b80cf7325d3; // fix
        constexpr uint64_t sig_v8_context_exit = 0xdcefdd2c64f6e320; // fix
        constexpr uint64_t sig_v8_isolate_enter = 0x45f80fe26b4fa648; // fix
        constexpr uint64_t sig_v8_isolate_exit = 0x6d19cc3d93a89d6c; // fix
        constexpr uint64_t sig_v8_array_get = 0xd2f263411cd78c2f; // fix
        constexpr uint64_t sig_v8_array_length = 0xa703567883cd3ecf; // fix
        constexpr uint64_t sig_v8_object_get = 0x7fc0da130bf67f24; // fix
        constexpr uint64_t sig_v8_object_get_property_names = 0xe90245bd2236e62a; // fix
        constexpr uint64_t sig_v8_value_is_boolean = 0xba1a8d48ca5d3d88; // fix
        constexpr uint64_t sig_v8_value_is_boolean_object = 0xd5572bd1d425607e; // fix
        constexpr uint64_t sig_v8_value_is_number = 0xc177fa825ede9b2d; // fix
        constexpr uint64_t sig_v8_value_is_number_object = 0xc696d67e88b00b34; // fix
        constexpr uint64_t sig_v8_value_is_string = 0xfb7c81faecee59bf; // fix
        constexpr uint64_t sig_v8_value_is_string_object = 0xa766d1be9c3ebd58; // fix
        constexpr uint64_t sig_v8_value_is_object = 0xdb10af33fb398a98; // fix
        constexpr uint64_t sig_v8_value_is_array = 0xae8c9cb172173fb2; // fix
        constexpr uint64_t sig_v8_value_is_function = 0x320bdf6913d3c0f6; // fix
        constexpr uint64_t sig_v8_value_boolean_value = 0x7e415ee1e064c334; // fix
        constexpr uint64_t sig_v8_value_number_value = 0xdc4039f8f61692dd; // fix
        constexpr uint64_t sig_v8_value_to_object = 0x8276c837503ea52; // fix
        constexpr uint64_t sig_v8_string_utf8_ctor = 0xfad7d6ef77bcdc5a; // fix
        constexpr uint64_t sig_v8_string_utf8_dtor = 0x15cc74626ce6fc7; // fix
        constexpr uint64_t sig_ui_engine_get_panel_context = 0x4c29beb51b80c9e2; // fix
        constexpr uint64_t sig_ui_engine_compile = 0x22ba178e6144e703; // fix
        constexpr uint64_t sig_ui_engine_run_compiled_script = 0xd5dbbeedd9fc0bc3; // fix
        constexpr uint64_t hook_start_sound_immediate = 0x990dab38871d6d0f; // fix
        constexpr uint64_t hook_set_bodygroup = 0xcfc09f1103185d72; // fix
        constexpr uint64_t hook_modify_eye_pos = 0x491badaeb6fa665c; // fix
        constexpr uint64_t hook_wnd_proc = 0x4ef9c358b8662f99; // fix
        constexpr uint64_t hook_create_move = 0xcc6f95df263cb4af; // fix
        constexpr uint64_t hook_cl_move = 0xc63d7273239ee0ca; // fix
        constexpr uint64_t hook_frame_stage_notify = 0x6a7b1934448f74fb; // fix
        constexpr uint64_t hook_on_latch_interp_var = 0xa90f00725fbc3bac; // fix
        constexpr uint64_t hook_draw_model_execute = 0x9a3bc7b9ec1b8856; // fix
        constexpr uint64_t hook_render_view = 0x25f1228d5d09d142; // fix
        constexpr uint64_t hook_level_init_post_entity = 0x280c26b8b85b3fa3; // fix
        constexpr uint64_t hook_level_init_pre_entity = 0x729295c7b64439b2; // fix
        constexpr uint64_t hook_get_tonemap_settings_from_env_tonemap_controller = 0x3e932b8428405342; // fix
        constexpr uint64_t hook_draw_3d_debug_overlays = 0x24070b2882df21fb; // fix
        constexpr uint64_t hook_shader_api_draw_mesh = 0x77ee3a2f0f64a5e0; // fix
        constexpr uint64_t hook_is_box_visible = 0xec50c1689d8d518f; // fix
        constexpr uint64_t hook_scene_end = 0x8ae10242ce954707; // fix
        constexpr uint64_t hook_calc_renderable_world_space_aabb_bloated = 0xab3a239a6964faec; // fix
        constexpr uint64_t hook_add_renderables_to_render_lists = 0x90b230ca3ba11e54; // fix
        constexpr uint64_t hook_do_post_screen_space_effects = 0x259621db7245d97c; // fix
        constexpr uint64_t hook_present = 0x32811d6fe369fdcd; // fix
        constexpr uint64_t hook_reset = 0x870f7d4cd2ff4781; // fix
        constexpr uint64_t hook_send_net_msg = 0xf6b85466cef64397; // fix
        constexpr uint64_t hook_override_view = 0xd3812977c9dcb1f7; // fix
        constexpr uint64_t hook_paint_traverse = 0xf041529edd84bab9; // fix
        constexpr uint64_t hook_find_material = 0xafce1a76c4010c5f; // fix
        constexpr uint64_t hook_emit_sound = 0x4218a1cef7b74da; // fix
        constexpr uint64_t hook_is_connected = 0xc79ed9aa13428e73; // fix
        constexpr uint64_t hook_lock_cursor = 0xfdbb17cf17e7313f; // fix
        constexpr uint64_t hook_draw_set_color = 0xf375acda5d06ee03; // fix
        constexpr uint64_t hook_test_hitboxes = 0xc9a81a4d67e259f1; // fix
        constexpr uint64_t hook_setup_bones = 0x3586d0b0540b9eff; // fix
        constexpr uint64_t hook_animating_setup_bones = 0x3d79f162c6eabe8c; // fix
        constexpr uint64_t hook_post_data_update = 0x4a0670480f7fb3a8; // fix
        constexpr uint64_t hook_maintain_sequence_transitions = 0x6141e72d20f02e29; // fix
        constexpr uint64_t hook_trace_ray = 0x46bb51893b974a42; // fix
        constexpr uint64_t hook_run_command = 0x7145f23f1a3f6c97; // fix
        constexpr uint64_t hook_process_movement = 0xfefadab0f433c289; // fix
        constexpr uint64_t hook_transfer_data = 0xde8067686f56043; // fix
        constexpr uint64_t hook_perform_prediction = 0x6bf91d34bae9bff8; // fix
        constexpr uint64_t hook_packet_start = 0xdbdac78dc810badf; // fix
        constexpr uint64_t hook_level_shutdown = 0x77d6660c6c5707ec; // fix
        constexpr uint64_t hook_physics_simulate = 0x3ece973186afe1cb; // fix
        constexpr uint64_t hook_estimate_abs_velocity = 0xf89f58d4881a7c76; // fix
        constexpr uint64_t hook_interpolate = 0x4ecc6f77dfd05f11; // fix
        constexpr uint64_t hook_reset_latched = 0x8e0961461e25e9c6; // fix
        constexpr uint64_t hook_send_weapon_anim = 0x61b4addfa319926e; // fix
        constexpr uint64_t hook_fire_event = 0xbbbd323eadda62b0; // fix
        constexpr uint64_t hook_do_animation_events = 0xfc32d9f36c9efded; // fix
        constexpr uint64_t hook_deploy = 0x5614288d12593f60; // fix
        constexpr uint64_t hook_get_fov = 0x8c6c10faf8c9d3d0; // fix
        constexpr uint64_t hook_effects = 0x26c2c48f27d284e0; // fix
        constexpr uint64_t hook_sequence = 0xda9e4d6e1fc250b4; // fix
        constexpr uint64_t hook_weapon_handle = 0x6a01b6121dbd3b9d; // fix
        constexpr uint64_t hook_simulation_time = 0x3097c47ad9af47ff; // fix
        constexpr uint64_t hook_general_float = 0xe8b3d47dd75267f9; // fix
        constexpr uint64_t hook_general_vec = 0x9ae68733dfabab56; // fix
        constexpr uint64_t hook_general_int = 0x1cb662d97f59f348; // fix
        constexpr uint64_t hook_general_bool = 0x18fcd8ded7e67496; // fix
        constexpr uint64_t hook_layer_sequence = 0x66b9b8cf128cd72e; // fix
        constexpr uint64_t hook_layer_cycle = 0x8e333820c849c48; // fix
        constexpr uint64_t hook_layer_playback_rate = 0x6bb565641643e7c6; // fix
        constexpr uint64_t hook_layer_weight = 0xacfc09ad85e26068; // fix
        constexpr uint64_t hook_layer_weight_delta_rate = 0xa39a870d8922303e; // fix
        constexpr uint64_t hook_layer_order = 0xdddec39131fd2a0b; // fix
        constexpr uint64_t hook_convar_get_float_engine = 0x850b66607b67a6f1; // fix
        constexpr uint64_t hook_convar_get_int_engine = 0x1129dabf0a427837; // fix
        constexpr uint64_t hook_convar_get_int_client = 0x900f0dc43248f6d0; // fix
        constexpr uint64_t hook_eye_position_and_vectors = 0x10542e161baf4879; // fix
        constexpr uint64_t hook_obb_change_callback = 0x8a574e498759a28e; // fix
        constexpr uint64_t hook_server_cmd_key_values = 0x87e429ad2aa05da5; // fix
        constexpr uint64_t hook_calc_view = 0xe19616d26bf8cb92; // fix
        constexpr uint64_t hook_scale_mouse = 0x1f6a28524626d56; // fix
        constexpr uint64_t hook_convar_network_change_callback = 0x8a9ce871e18d32c9; // fix
        constexpr uint64_t hook_reevauluate_anim_lod = 0xfbf6d511deebc7bb; // fix
        constexpr uint64_t hook_start_sound = 0xce6828b31c0516d9; // fix
        constexpr uint64_t hook_update_clientside_anim = 0x9c162a2f63eadc1b; // fix
        constexpr uint64_t hook_do_animation_events_animating = 0x90c4ca2c347ec3a7; // fix
        constexpr uint64_t hook_get_default_fov = 0xeae8a53ae8085169; // fix
        constexpr uint64_t hook_ent_info_list_link_before = 0xc0d164cea3004bd4; // fix
        constexpr uint64_t hook_extract_occluded_renderables = 0x2658ec380eafa168; // fix
        constexpr uint64_t hook_sv_msg_voicedata = 0x44212512945b80cd; // fix
        constexpr uint64_t hook_hud_reticle_process_input = 0x5af1ebd655404f06; // fix
        constexpr uint64_t hook_update_interp_vars = 0x52ffa0489ad652e8; // fix
        constexpr uint64_t hook_particle_draw_model = 0x3bb4ced5ce0bfc5a; // fix
	constexpr uint64_t CAI_BaseNPC_m_bFadeCorpse = 0xf77050cc22597adb; // fix
	constexpr uint64_t CAI_BaseNPC_m_bImportanRagdoll = 0x8723379f9af3b0bc; // fix
	constexpr uint64_t CAI_BaseNPC_m_bIsMoving = 0xb4f7c16c49332c8f; // fix
	constexpr uint64_t CAI_BaseNPC_m_bPerformAvoidance = 0x389bc95f48bcf83d; // fix
	constexpr uint64_t CAI_BaseNPC_m_bSpeedModActive = 0x896e88bfd4c9f096; // fix
	constexpr uint64_t CAI_BaseNPC_m_flTimePingEffect = 0xbc88e6ee75943a01; // fix
	constexpr uint64_t CAI_BaseNPC_m_iDeathFrame = 0x555c32e02ff68f5f; // fix
	constexpr uint64_t CAI_BaseNPC_m_iDeathPose = 0x2fc2503104913151; // fix
	constexpr uint64_t CAI_BaseNPC_m_iSpeedModRadius = 0xc53914361ae95037; // fix
	constexpr uint64_t CAI_BaseNPC_m_iSpeedModSpeed = 0xdc59a1005fd2d270; // fix
	constexpr uint64_t CAI_BaseNPC_m_lifeState = 0x5582ffc5a4807c71; // fix
	constexpr uint64_t CBRC4Target_m_bBrokenOpen = 0xae5afe6442d0b9a1; // fix
	constexpr uint64_t CBRC4Target_m_flRadius = 0x69bbb9091de8e1; // fix
	constexpr uint64_t CBaseAnimating_m_ScaleType = 0x23f650aa6ff146ba; // fix
	constexpr uint64_t CBaseAnimating_m_bClientSideAnimation = 0x175b5fb4a10068cf; // fix
	constexpr uint64_t CBaseAnimating_m_bClientSideFrameReset = 0x4f595a929a6c5570; // fix
	constexpr uint64_t CBaseAnimating_m_bClientSideRagdoll = 0xa81056fb23d64fe6; // fix
	constexpr uint64_t CBaseAnimating_m_bSuppressAnimSounds = 0x946459939cfd1622; // fix
	constexpr uint64_t CBaseAnimating_m_flCycle = 0x3a83aaf41a652ee6; // fix
	constexpr uint64_t CBaseAnimating_m_flEncodedController = 0x450158f6592d1764; // fix
	constexpr uint64_t CBaseAnimating_m_flFrozen = 0x49143d8c7fc065a8; // fix
	constexpr uint64_t CBaseAnimating_m_flModelScale = 0xbf3fca6e1a79823c; // fix
	constexpr uint64_t CBaseAnimating_m_flPlaybackRate = 0x8bf67f1599d93b83; // fix
	constexpr uint64_t CBaseAnimating_m_flPoseParameter = 0x133b5ef32c7b012e; // fix
	constexpr uint64_t CBaseAnimating_m_hLightingOrigin = 0xcb0a6b82e3a8ce84; // fix
	constexpr uint64_t CBaseAnimating_m_nBody = 0x334ac86dc2bef231; // fix
	constexpr uint64_t CBaseAnimating_m_nForceBone = 0xd01c30af1eeb2810; // fix
	constexpr uint64_t CBaseAnimating_m_nHighlightColorB = 0x7d5211a62617cea7; // fix
	constexpr uint64_t CBaseAnimating_m_nHighlightColorG = 0x423e4159555f76c7; // fix
	constexpr uint64_t CBaseAnimating_m_nHighlightColorR = 0x766c5beefabdbea6; // fix
	constexpr uint64_t CBaseAnimating_m_nHitboxSet = 0xfc77f9c5975f3c64; // fix
	constexpr uint64_t CBaseAnimating_m_nMuzzleFlashParity = 0xdfcfc0643c7ffb2; // fix
	constexpr uint64_t CBaseAnimating_m_nNewSequenceParity = 0xc61ed00e4cc1a66a; // fix
	constexpr uint64_t CBaseAnimating_m_nResetEventsParity = 0x1282769551c9a726; // fix
	constexpr uint64_t CBaseAnimating_m_nSequence = 0x63ba532880f73ad3; // fix
	constexpr uint64_t CBaseAnimating_m_nSkin = 0x49dc7f22d03338ee; // fix
	constexpr uint64_t CBaseAnimating_m_vecForce = 0x79f0706dec8a5cc7; // fix
	constexpr uint64_t CBaseAttributableItem_m_AttributeManager = 0x9757c05bf103582f; // fix
	constexpr uint64_t CBaseAttributableItem_m_Attributes = 0x911574dc2061f592; // fix
	constexpr uint64_t CBaseAttributableItem_m_Item = 0x35775e41511575a6; // fix
	constexpr uint64_t CBaseAttributableItem_m_NetworkedDynamicAttributesForDemos = 0x4f358ac7bd801e6a; // fix
	constexpr uint64_t CBaseAttributableItem_m_OriginalOwnerXuidHigh = 0xcf1a277cb16934d; // fix
	constexpr uint64_t CBaseAttributableItem_m_OriginalOwnerXuidLow = 0x50a46704bb9312ca; // fix
	constexpr uint64_t CBaseAttributableItem_m_ProviderType = 0xd1084cfb9e3280d5; // fix
	constexpr uint64_t CBaseAttributableItem_m_bInitialized = 0x293554f8a77a8047; // fix
	constexpr uint64_t CBaseAttributableItem_m_flFallbackWear = 0x759b8dfd1099bae2; // fix
	constexpr uint64_t CBaseAttributableItem_m_hOuter = 0x401c72afec3e4a48; // fix
	constexpr uint64_t CBaseAttributableItem_m_iAccountID = 0xd1375ef0933acb02; // fix
	constexpr uint64_t CBaseAttributableItem_m_iEntityLevel = 0x9ed280991a972537; // fix
	constexpr uint64_t CBaseAttributableItem_m_iEntityQuality = 0xb3ef86873fca72af; // fix
	constexpr uint64_t CBaseAttributableItem_m_iItemDefinitionIndex = 0x39737ba98d734884; // fix
	constexpr uint64_t CBaseAttributableItem_m_iItemIDHigh = 0xb6a368e13a35aa63; // fix
	constexpr uint64_t CBaseAttributableItem_m_iItemIDLow = 0x36c3f0b218931ac7; // fix
	constexpr uint64_t CBaseAttributableItem_m_iReapplyProvisionParity = 0x64a3b77e58d4fe7e; // fix
	constexpr uint64_t CBaseAttributableItem_m_nFallbackPaintKit = 0xd3127189eba77bc; // fix
	constexpr uint64_t CBaseAttributableItem_m_nFallbackSeed = 0x56893511566cfcf8; // fix
	constexpr uint64_t CBaseAttributableItem_m_nFallbackStatTrak = 0xce33f719228446af; // fix
	constexpr uint64_t CBaseAttributableItem_m_szCustomName = 0xca7383d36da25e28; // fix
	constexpr uint64_t CBaseButton_m_usable = 0x69fcb81bf108067; // fix
	constexpr uint64_t CBaseCSGrenadeProjectile_m_nBounces = 0x6166ae5fdc5dc3c6; // fix
	constexpr uint64_t CBaseCSGrenadeProjectile_m_nExplodeEffectIndex = 0xa936a644ff336170; // fix
	constexpr uint64_t CBaseCSGrenadeProjectile_m_nExplodeEffectTickBegin = 0x251e6c1a0d10becc; // fix
	constexpr uint64_t CBaseCSGrenadeProjectile_m_vInitialVelocity = 0x1bf6a9c531f48898; // fix
	constexpr uint64_t CBaseCSGrenadeProjectile_m_vecExplodeEffectOrigin = 0xa416885b6af4235; // fix
	constexpr uint64_t CBaseCSGrenade_m_bIsHeldByPlayer = 0x7b1d62473771355a; // fix
	constexpr uint64_t CBaseCSGrenade_m_bLoopingSoundPlaying = 0x1d381a49844fba19; // fix
	constexpr uint64_t CBaseCSGrenade_m_bPinPulled = 0x2e9f53bf1cf1bb9; // fix
	constexpr uint64_t CBaseCSGrenade_m_bRedraw = 0x59e65437f76983d2; // fix
	constexpr uint64_t CBaseCSGrenade_m_fDropTime = 0x3f6e05956cec0f9f; // fix
	constexpr uint64_t CBaseCSGrenade_m_fThrowTime = 0xf3930d81d148c92f; // fix
	constexpr uint64_t CBaseCSGrenade_m_flThrowStrength = 0x746b5d27a2f7db8e; // fix
	constexpr uint64_t CBaseCombatCharacter_m_LastHitGroup = 0xd3874c4bbe5047d1; // fix
	constexpr uint64_t CBaseCombatCharacter_m_flNextAttack = 0x8fc26f04ab6b9f03; // fix
	constexpr uint64_t CBaseCombatCharacter_m_flTimeOfLastInjury = 0x83fed75786ee20f6; // fix
	constexpr uint64_t CBaseCombatCharacter_m_hActiveWeapon = 0x3cb50a2348aca2b7; // fix
	constexpr uint64_t CBaseCombatCharacter_m_hMyWeapons = 0xf837a95b3596faeb; // fix
	constexpr uint64_t CBaseCombatCharacter_m_hMyWearables = 0x37e2232a39fe0739; // fix
	constexpr uint64_t CBaseCombatCharacter_m_nRelativeDirectionOfLastInjury = 0xf0844333a76efdb3; // fix
	constexpr uint64_t CBaseCombatWeapon_m_bFlipViewModel = 0xb6a32b9d5ee018; // fix
	constexpr uint64_t CBaseCombatWeapon_m_flNextPrimaryAttack = 0xbb68e3157f64642a; // fix
	constexpr uint64_t CBaseCombatWeapon_m_flNextSecondaryAttack = 0x195b08de99f6bcf0; // fix
	constexpr uint64_t CBaseCombatWeapon_m_flTimeWeaponIdle = 0x7a0fd609687e1036; // fix
	constexpr uint64_t CBaseCombatWeapon_m_hOwner = 0x96c360b46f7a0242; // fix
	constexpr uint64_t CBaseCombatWeapon_m_hWeaponWorldModel = 0xdac67002457056d4; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iClip1 = 0x9f98fb7c32fc8415; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iClip2 = 0xe4764fd67492458b; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iNumEmptyAttacks = 0x4b7569d8186fba98; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iPrimaryAmmoType = 0x2c2fcf5dbee1aa2b; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iPrimaryReserveAmmoCount = 0x743ce973aad67990; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iSecondaryAmmoType = 0xc0cd0412927b609; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iSecondaryReserveAmmoCount = 0x9d5351a39582c7b; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iState = 0x6d677b0f091c0ea8; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iViewModelIndex = 0x59621973776c8614; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iWeaponModule = 0x78faf97b3c989ff9; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iWeaponOrigin = 0x25b9c56bde9a613b; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iWorldDroppedModelIndex = 0x7c9d2b637cf40461; // fix
	constexpr uint64_t CBaseCombatWeapon_m_iWorldModelIndex = 0xee9fd920fa103bc; // fix
	constexpr uint64_t CBaseCombatWeapon_m_nNextThinkTick = 0x37025358fe6dc751; // fix
	constexpr uint64_t CBaseCombatWeapon_m_nViewModelIndex = 0x8d39ba1a02b65c13; // fix
	constexpr uint64_t CBaseDoor_m_flWaveHeight = 0x1a9422c5c0d6ff4b; // fix
	constexpr uint64_t CBaseEntity_m_Collision = 0xa3ba2cb11ad4139b; // fix
	constexpr uint64_t CBaseEntity_m_CollisionGroup = 0xa57f8d34a4954598; // fix
	constexpr uint64_t CBaseEntity_m_angRotation = 0xe253a0d0bb0ab80b; // fix
	constexpr uint64_t CBaseEntity_m_bAlternateSorting = 0xae3e66a74bb8eb7d; // fix
	constexpr uint64_t CBaseEntity_m_bAnimatedEveryTick = 0xa034cba5fbcf854e; // fix
	constexpr uint64_t CBaseEntity_m_bEligibleForScreenHighlight = 0x648a9c7cf1b72f89; // fix
	constexpr uint64_t CBaseEntity_m_bIsAutoaimTarget = 0xc0bbe0f22d05cea8; // fix
	constexpr uint64_t CBaseEntity_m_bSimulatedEveryTick = 0x773b08647e85daf3; // fix
	constexpr uint64_t CBaseEntity_m_bSpotted = 0x7f7602ea3180b43a; // fix
	constexpr uint64_t CBaseEntity_m_bSpottedBy = 0x98dc70d80f04b2c7; // fix
	constexpr uint64_t CBaseEntity_m_bSpottedByMask = 0x1fe759e5f9b7faf8; // fix
	constexpr uint64_t CBaseEntity_m_cellX = 0xd4edf0a05735050e; // fix
	constexpr uint64_t CBaseEntity_m_cellY = 0x6784a99de9a90c25; // fix
	constexpr uint64_t CBaseEntity_m_cellZ = 0x922b7d41ac6f451b; // fix
	constexpr uint64_t CBaseEntity_m_cellbits = 0x265e731ca6477fa2; // fix
	constexpr uint64_t CBaseEntity_m_clrRender = 0x6774ae4ffb51a712; // fix
	constexpr uint64_t CBaseEntity_m_fEffects = 0x85c87e1f88db5f98; // fix
	constexpr uint64_t CBaseEntity_m_fadeMaxDist = 0xc6432b4a02163ef6; // fix
	constexpr uint64_t CBaseEntity_m_fadeMinDist = 0xa5394c4b8e5b8be6; // fix
	constexpr uint64_t CBaseEntity_m_flAnimTime = 0x8f4d441d2459c62; // fix
	constexpr uint64_t CBaseEntity_m_flElasticity = 0xbd9feac22602db97; // fix
	constexpr uint64_t CBaseEntity_m_flFadeScale = 0x3f5162c3af39a36a; // fix
	constexpr uint64_t CBaseEntity_m_flLastMadeNoiseTime = 0xda62d7721ad17b28; // fix
	constexpr uint64_t CBaseEntity_m_flMaxFallVelocity = 0xaf84dcd4b6a6b917; // fix
	constexpr uint64_t CBaseEntity_m_flShadowCastDistance = 0x6fb6a4c907fba176; // fix
	constexpr uint64_t CBaseEntity_m_flSimulationTime = 0xf940869839415c33; // fix
	constexpr uint64_t CBaseEntity_m_flUseLookAtAngle = 0xdc5ab6e5103779f4; // fix
	constexpr uint64_t CBaseEntity_m_hEffectEntity = 0xd31a3d493585df34; // fix
	constexpr uint64_t CBaseEntity_m_hOwnerEntity = 0x2ebc9579b82a944f; // fix
	constexpr uint64_t CBaseEntity_m_iName = 0x228139a8f53bca78; // fix
	constexpr uint64_t CBaseEntity_m_iParentAttachment = 0xdc3525a563bcac1e; // fix
	constexpr uint64_t CBaseEntity_m_iPendingTeamNum = 0x1feb258af6193879; // fix
	constexpr uint64_t CBaseEntity_m_iTeamNum = 0xece7b094ce050eb1; // fix
	constexpr uint64_t CBaseEntity_m_iTextureFrameIndex = 0xa3b8178d1756cc5a; // fix
	constexpr uint64_t CBaseEntity_m_nMaxCPULevel = 0x7170fcee5276d4a7; // fix
	constexpr uint64_t CBaseEntity_m_nMaxGPULevel = 0x683f2ee95e7d2830; // fix
	constexpr uint64_t CBaseEntity_m_nMinCPULevel = 0x4c64f82d2752e38b; // fix
	constexpr uint64_t CBaseEntity_m_nMinGPULevel = 0x57369d651f55679f; // fix
	constexpr uint64_t CBaseEntity_m_nModelIndex = 0x54325bd6b6ceea09; // fix
	constexpr uint64_t CBaseEntity_m_nRenderFX = 0x45cf59c71e630a02; // fix
	constexpr uint64_t CBaseEntity_m_nRenderMode = 0xf1ec8321d4da277c; // fix
	constexpr uint64_t CBaseEntity_m_nSolidType = 0xe25dd039832a1abb; // fix
	constexpr uint64_t CBaseEntity_m_nSurroundType = 0x32d510d5de588992; // fix
	constexpr uint64_t CBaseEntity_m_triggerBloat = 0xc6f1e81c7ec5f9c5; // fix
	constexpr uint64_t CBaseEntity_m_usSolidFlags = 0xdcf8fba1c81f0ffb; // fix
	constexpr uint64_t CBaseEntity_m_vecMaxs = 0xfe547442a58e697b; // fix
	constexpr uint64_t CBaseEntity_m_vecMins = 0x407607d9422ff73a; // fix
	constexpr uint64_t CBaseEntity_m_vecOrigin = 0x6ab3bfcc36e14902; // fix
	constexpr uint64_t CBaseEntity_m_vecSpecifiedSurroundingMaxs = 0xa3027aeaa5d5bcdc; // fix
	constexpr uint64_t CBaseEntity_m_vecSpecifiedSurroundingMins = 0xee4c431de8ae0c2c; // fix
	constexpr uint64_t CBaseEntity_moveparent = 0x4da303548a28dde5; // fix
	constexpr uint64_t CBaseFlex_m_blinktoggle = 0xa3697585bf371b43; // fix
	constexpr uint64_t CBaseFlex_m_flexWeight = 0x27f57bde63fdc1a2; // fix
	constexpr uint64_t CBaseFlex_m_viewtarget = 0x3826a92fc946f618; // fix
	constexpr uint64_t CBaseGrenade_m_DmgRadius = 0xa8c5d4637bde0fef; // fix
	constexpr uint64_t CBaseGrenade_m_bIsLive = 0x14adf020a3b8db29; // fix
	constexpr uint64_t CBaseGrenade_m_fFlags = 0xb81cf00cf4921ca6; // fix
	constexpr uint64_t CBaseGrenade_m_flDamage = 0x6826ff760133974e; // fix
	constexpr uint64_t CBaseGrenade_m_hThrower = 0x6cf4330516f291fd; // fix
	constexpr uint64_t CBaseGrenade_m_vecVelocity = 0x7d4d7191387d9ea4; // fix
	constexpr uint64_t CBasePlayer_deadflag = 0xfa77f70fe1b6b4ed; // fix
	constexpr uint64_t CBasePlayer_m_Local = 0xebd83efde553acb5; // fix
	constexpr uint64_t CBasePlayer_m_PlayerFog_m_hCtrl = 0x765c3e9b63aa1923; // fix
	constexpr uint64_t CBasePlayer_m_afPhysicsFlags = 0xf07e3040b0115436; // fix
	constexpr uint64_t CBasePlayer_m_aimPunchAngle = 0x653b5ddec05f596; // fix
	constexpr uint64_t CBasePlayer_m_aimPunchAngleVel = 0x16898817ec79b20a; // fix
	constexpr uint64_t CBasePlayer_m_audio_entIndex = 0x44f4d15e39a4f10f; // fix
	constexpr uint64_t CBasePlayer_m_audio_localBits = 0x99aa31d9885d2a0f; // fix
	constexpr uint64_t CBasePlayer_m_audio_localSound_0_ = 0xdd802484b045a8f2; // fix
	constexpr uint64_t CBasePlayer_m_audio_localSound_1_ = 0x974303107d3def68; // fix
	constexpr uint64_t CBasePlayer_m_audio_localSound_2_ = 0x1730cd653a8a4ae9; // fix
	constexpr uint64_t CBasePlayer_m_audio_localSound_3_ = 0x9d958c766f2eab36; // fix
	constexpr uint64_t CBasePlayer_m_audio_localSound_4_ = 0xe7fdb66e72ccf5e7; // fix
	constexpr uint64_t CBasePlayer_m_audio_localSound_5_ = 0x6f2c3c105c9387b; // fix
	constexpr uint64_t CBasePlayer_m_audio_localSound_6_ = 0x238243bb7a71637c; // fix
	constexpr uint64_t CBasePlayer_m_audio_localSound_7_ = 0xcce30978651f7eb6; // fix
	constexpr uint64_t CBasePlayer_m_audio_soundscapeIndex = 0xa4215754ecad66c9; // fix
	constexpr uint64_t CBasePlayer_m_bActiveCameraMan = 0xf19e3a1adf7e68f0; // fix
	constexpr uint64_t CBasePlayer_m_bAllowAutoMovement = 0x79e0ec34b807c161; // fix
	constexpr uint64_t CBasePlayer_m_bCameraManOverview = 0xdc57a72e58351b1d; // fix
	constexpr uint64_t CBasePlayer_m_bCameraManScoreBoard = 0xad6a03d8d259d789; // fix
	constexpr uint64_t CBasePlayer_m_bCameraManXRay = 0x998306a31209eb5c; // fix
	constexpr uint64_t CBasePlayer_m_bConstraintPastRadius = 0x9e7f5f886e2667ce; // fix
	constexpr uint64_t CBasePlayer_m_bDrawViewmodel = 0x25659f6d5963169b; // fix
	constexpr uint64_t CBasePlayer_m_bDucked = 0xe5e9268e2481d36a; // fix
	constexpr uint64_t CBasePlayer_m_bDucking = 0xa84266fd26f648a6; // fix
	constexpr uint64_t CBasePlayer_m_bInDuckJump = 0xd8058a0c598d9210; // fix
	constexpr uint64_t CBasePlayer_m_bPoisoned = 0x80ce162655b78940; // fix
	constexpr uint64_t CBasePlayer_m_bShouldDrawPlayerWhileUsingViewEntity = 0xe137a49a683ce047; // fix
	constexpr uint64_t CBasePlayer_m_bWearingSuit = 0xe8d18744dcacc4e8; // fix
	constexpr uint64_t CBasePlayer_m_chAreaBits = 0xedffeea234dd2506; // fix
	constexpr uint64_t CBasePlayer_m_chAreaPortalBits = 0xd581eaa6de4d67fc; // fix
	constexpr uint64_t CBasePlayer_m_fFlags = 0xee7d3aa6ec204106; // fix
	constexpr uint64_t CBasePlayer_m_fForceTeam = 0x7f2b38a5f8764137; // fix
	constexpr uint64_t CBasePlayer_m_fOnTarget = 0xeb3c22c564601a3f; // fix
	constexpr uint64_t CBasePlayer_m_flConstraintRadius = 0xbabba77477e95596; // fix
	constexpr uint64_t CBasePlayer_m_flConstraintSpeedFactor = 0x767a501e60bcfd7b; // fix
	constexpr uint64_t CBasePlayer_m_flConstraintWidth = 0x828c0839c94b3034; // fix
	constexpr uint64_t CBasePlayer_m_flDeathTime = 0x1824ccb76d23646f; // fix
	constexpr uint64_t CBasePlayer_m_flDuckAmount = 0x5bf0ee44c8367fd7; // fix
	constexpr uint64_t CBasePlayer_m_flDuckSpeed = 0xce81b3dfbf39271c; // fix
	constexpr uint64_t CBasePlayer_m_flFOVRate = 0x277a3f0f3362cbbb; // fix
	constexpr uint64_t CBasePlayer_m_flFOVTime = 0xeddc9d81f40328c4; // fix
	constexpr uint64_t CBasePlayer_m_flFallVelocity = 0xffc914884523bf9f; // fix
	constexpr uint64_t CBasePlayer_m_flFriction = 0x4d573cf8ab89f049; // fix
	constexpr uint64_t CBasePlayer_m_flLaggedMovementValue = 0x70c34fa007b94361; // fix
	constexpr uint64_t CBasePlayer_m_flLastDuckTime = 0xc3b3fdc51b699049; // fix
	constexpr uint64_t CBasePlayer_m_flMaxspeed = 0xdb4a410e183e9fd6; // fix
	constexpr uint64_t CBasePlayer_m_flNextDecalTime = 0x5fa59b2f7802202c; // fix
	constexpr uint64_t CBasePlayer_m_flStepSize = 0x2066aa9ac64c336a; // fix
	constexpr uint64_t CBasePlayer_m_hColorCorrectionCtrl = 0xf230dea56ebbc0ea; // fix
	constexpr uint64_t CBasePlayer_m_hConstraintEntity = 0xe93eeff3d79cb076; // fix
	constexpr uint64_t CBasePlayer_m_hGroundEntity = 0x33742923332a4537; // fix
	constexpr uint64_t CBasePlayer_m_hLastWeapon = 0x7b3c97fcbf09c518; // fix
	constexpr uint64_t CBasePlayer_m_hObserverTarget = 0x9119fc9e18c69ca; // fix
	constexpr uint64_t CBasePlayer_m_hPostProcessCtrl = 0x51299fa4da4dd2e3; // fix
	constexpr uint64_t CBasePlayer_m_hTonemapController = 0x8b5484a92cb05085; // fix
	constexpr uint64_t CBasePlayer_m_hUseEntity = 0x6c846e68edc0d3ae; // fix
	constexpr uint64_t CBasePlayer_m_hVehicle = 0x96cb5772ca4e96db; // fix
	constexpr uint64_t CBasePlayer_m_hViewEntity = 0x6d61e6cd0d41e8fa; // fix
	constexpr uint64_t CBasePlayer_m_hViewModel_0_ = 0xcc0167e852572452; // fix
	constexpr uint64_t CBasePlayer_m_hZoomOwner = 0x7a64c50f24d25784; // fix
	constexpr uint64_t CBasePlayer_m_iAmmo = 0x5d06d8be80ef2b52; // fix
	constexpr uint64_t CBasePlayer_m_iBonusChallenge = 0x723f90331a0f5150; // fix
	constexpr uint64_t CBasePlayer_m_iBonusProgress = 0x9ecb9677d2bede89; // fix
	constexpr uint64_t CBasePlayer_m_iCoachingTeam = 0x632f200a7c745162; // fix
	constexpr uint64_t CBasePlayer_m_iDeathPostEffect = 0xa6c0d949e89c96ba; // fix
	constexpr uint64_t CBasePlayer_m_iDefaultFOV = 0xdc5be8560aca257c; // fix
	constexpr uint64_t CBasePlayer_m_iFOV = 0xf297e45d7f873f21; // fix
	constexpr uint64_t CBasePlayer_m_iFOVStart = 0x5809dc8f733b588a; // fix
	constexpr uint64_t CBasePlayer_m_iHealth = 0xf84e0f8afd2418d9; // fix
	constexpr uint64_t CBasePlayer_m_iHideHUD = 0x55274be20129ca2d; // fix
	constexpr uint64_t CBasePlayer_m_iObserverMode = 0xc3ae2f98b97ff1a4; // fix
	constexpr uint64_t CBasePlayer_m_ladderSurfaceProps = 0x707649ebf34707bc; // fix
	constexpr uint64_t CBasePlayer_m_lifeState = 0xb15af6a722eca60e; // fix
	constexpr uint64_t CBasePlayer_m_nDuckJumpTimeMsecs = 0xb0cd24590d8b3c97; // fix
	constexpr uint64_t CBasePlayer_m_nDuckTimeMsecs = 0x4b202c410153e5f3; // fix
	constexpr uint64_t CBasePlayer_m_nJumpTimeMsecs = 0xd877d47ff8ce618a; // fix
	constexpr uint64_t CBasePlayer_m_nNextThinkTick = 0x1eb02831e37c154c; // fix
	constexpr uint64_t CBasePlayer_m_nOldButtons = 0x60a0dbc071f2adb; // fix
	constexpr uint64_t CBasePlayer_m_nTickBase = 0x4b766eb702bced61; // fix
	constexpr uint64_t CBasePlayer_m_nWaterLevel = 0x82c464371b6a9a87; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_area = 0x23fa34aaf9a14fdc; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_HDRColorScale = 0x86c21e6a5b9bfa6d; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_blend = 0x33204ef4864c4d94; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_colorPrimary = 0x330833a6e57c9104; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_colorSecondary = 0x78114ad4cc458762; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_dirPrimary = 0x3da82741e24491e9; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_enable = 0x4b191cdca8104a31; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_end = 0x1b1ffade119445d1; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_maxdensity = 0x2f4c7356e40d8e0b; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_fog_start = 0x503619cbc2d8a830; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_origin = 0x2f573be6be55735c; // fix
	constexpr uint64_t CBasePlayer_m_skybox3d_scale = 0xb47f5a923d56e5a8; // fix
	constexpr uint64_t CBasePlayer_m_szLastPlaceName = 0x9737fe79cf0a941f; // fix
	constexpr uint64_t CBasePlayer_m_uCameraManGraphs = 0x2c3ced0e439516c8; // fix
	constexpr uint64_t CBasePlayer_m_ubEFNoInterpParity = 0x15f553d0f877213a; // fix
	constexpr uint64_t CBasePlayer_m_vecBaseVelocity = 0x331713a65c7789b8; // fix
	constexpr uint64_t CBasePlayer_m_vecConstraintCenter = 0xde9009c36922793d; // fix
	constexpr uint64_t CBasePlayer_m_vecLadderNormal = 0xb842a0bf9d5e3c40; // fix
	constexpr uint64_t CBasePlayer_m_vecVelocity_0_ = 0xcca7009dc80ff9c3; // fix
	constexpr uint64_t CBasePlayer_m_vecVelocity_1_ = 0x84e1896eb07adb7c; // fix
	constexpr uint64_t CBasePlayer_m_vecVelocity_2_ = 0x553b21f40e428956; // fix
	constexpr uint64_t CBasePlayer_m_vecViewOffset_0_ = 0xe454c0521bc4b4e6; // fix
	constexpr uint64_t CBasePlayer_m_vecViewOffset_1_ = 0x4e166988c46fc684; // fix
	constexpr uint64_t CBasePlayer_m_vecViewOffset_2_ = 0xbc73739b4bcbb982; // fix
	constexpr uint64_t CBasePlayer_m_viewPunchAngle = 0x8d388a134daca7c8; // fix
	constexpr uint64_t CBasePlayer_m_vphysicsCollisionState = 0x956b7c54713e425; // fix
	constexpr uint64_t CBasePlayer_pl = 0xf5011799631ed4d4; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_bBlocked = 0xaebfce3fd6d09c14; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_bCPIsVisible = 0x86ff2bb91d48ebdc; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_bControlPointsReset = 0xcc3ab0d9c6abb5bc; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_bInMiniRound = 0x982da19bb2442469; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_bPlayingMiniRounds = 0x4f24422909ed4e6c; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_bTeamCanCap = 0xc763d171fc9a3acf; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_flLazyCapPerc = 0x8384c4a7d3e46ca8; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_flPathDistance = 0x98bc4c5afe990ab3; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_flTeamCapTime = 0xf373e412eaa48617; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iBaseControlPoints = 0xbb895bc20f0b7b21; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iCappingTeam = 0xf64b5aff81f60722; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iNumControlPoints = 0x5bffcfe22ec9c9b5; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iNumTeamMembers = 0xd6525fa3adcf8ff4; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iOwner = 0xf09eed5b793852d3; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iPreviousPoints = 0x83d284d7c035a7be; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iStopWatchTimer = 0x32d0222a910bf512; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamBaseIcons = 0x15388710d9f44b93; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamIcons = 0x376c75698babf9bc; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamInZone = 0x679f6b113a6ff6f4; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamOverlays = 0xf1658980d6e1a146; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTeamReqCappers = 0xca6ad221166c8213; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iTimerToShowInHUD = 0x707eddb09ce7c068; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iUpdateCapHudParity = 0x13b8fb834855d98e; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iWarnOnCap = 0x3db56303fbe0cfbb; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_iszWarnSound_0_ = 0xb9103d57764b5954; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_pszCapLayoutInHUD = 0xc03edd5d5b7e7861; // fix
	constexpr uint64_t CBaseTeamObjectiveResource_m_vCPPositions_0_ = 0xe54f911bc7eb531; // fix
	constexpr uint64_t CBaseToggle_m_flMoveTargetTime = 0x859964a0b57fb895; // fix
	constexpr uint64_t CBaseToggle_m_movementType = 0x9ca04727b6887cee; // fix
	constexpr uint64_t CBaseToggle_m_vecFinalDest = 0xb8462a8cad9caac9; // fix
	constexpr uint64_t CBaseTrigger_m_bClientSidePredicted = 0x51081206b846f085; // fix
	constexpr uint64_t CBaseTrigger_m_spawnflags = 0x70bf313c322afaf2; // fix
	constexpr uint64_t CBaseViewModel_m_bShouldIgnoreOffsetAndAccuracy = 0xb3e518234ec718ea; // fix
	constexpr uint64_t CBaseViewModel_m_fEffects = 0x108959363a5892ac; // fix
	constexpr uint64_t CBaseViewModel_m_flPlaybackRate = 0x61d93fab08e25d5; // fix
	constexpr uint64_t CBaseViewModel_m_hOwner = 0x12b20f86ccde0120; // fix
	constexpr uint64_t CBaseViewModel_m_hWeapon = 0xc03d30b8b0994b93; // fix
	constexpr uint64_t CBaseViewModel_m_nAnimationParity = 0xcdd3f2ddc9e9a610; // fix
	constexpr uint64_t CBaseViewModel_m_nBody = 0x7b8bc9cc789cb3bc; // fix
	constexpr uint64_t CBaseViewModel_m_nModelIndex = 0x506f7c7e21b20d11; // fix
	constexpr uint64_t CBaseViewModel_m_nMuzzleFlashParity = 0xa24dd3e5c3e60c69; // fix
	constexpr uint64_t CBaseViewModel_m_nNewSequenceParity = 0x7784b41b6eb8bf27; // fix
	constexpr uint64_t CBaseViewModel_m_nResetEventsParity = 0x8c6e4ba878df2777; // fix
	constexpr uint64_t CBaseViewModel_m_nSequence = 0x1eef3618d6b4f8f0; // fix
	constexpr uint64_t CBaseViewModel_m_nSkin = 0x7e5ab4e6c96e7fe5; // fix
	constexpr uint64_t CBaseViewModel_m_nViewModelIndex = 0x23bacf6d6f807b45; // fix
	constexpr uint64_t CBaseWeaponWorldModel_m_fEffects = 0x2e31173182333332; // fix
	constexpr uint64_t CBaseWeaponWorldModel_m_hCombatWeaponParent = 0x6767c4bd06ead7d7; // fix
	constexpr uint64_t CBaseWeaponWorldModel_m_nBody = 0x6551e8a232d93bc6; // fix
	constexpr uint64_t CBaseWeaponWorldModel_m_nModelIndex = 0x565e41812bea090b; // fix
	constexpr uint64_t CBaseWeaponWorldModel_moveparent = 0x8079e9961ca8c66a; // fix
	constexpr uint64_t CBeamSpotlight_m_bHasDynamicLight = 0x436eaf17bf53e04d; // fix
	constexpr uint64_t CBeamSpotlight_m_bSpotlightOn = 0x2dccf1d1acd20caf; // fix
	constexpr uint64_t CBeamSpotlight_m_flHDRColorScale = 0x31a02268d68a660; // fix
	constexpr uint64_t CBeamSpotlight_m_flRotationSpeed = 0xdb333b7946bdbb83; // fix
	constexpr uint64_t CBeamSpotlight_m_flSpotlightGoalWidth = 0xe0f24f9a812adbf9; // fix
	constexpr uint64_t CBeamSpotlight_m_flSpotlightMaxLength = 0xbeccd2288fede55e; // fix
	constexpr uint64_t CBeamSpotlight_m_nHaloIndex = 0x22a76bdfbc9294b1; // fix
	constexpr uint64_t CBeamSpotlight_m_nRotationAxis = 0x5c1677318ec9d8ea; // fix
	constexpr uint64_t CBeam_m_clrRender = 0x27506f290e45568c; // fix
	constexpr uint64_t CBeam_m_fAmplitude = 0xd141a33121b23671; // fix
	constexpr uint64_t CBeam_m_fEndWidth = 0x239e6963db877a3b; // fix
	constexpr uint64_t CBeam_m_fFadeLength = 0xda5bbc660b7d3d28; // fix
	constexpr uint64_t CBeam_m_fHaloScale = 0xa76ebbb72072761b; // fix
	constexpr uint64_t CBeam_m_fSpeed = 0x22335bc7fd674230; // fix
	constexpr uint64_t CBeam_m_fStartFrame = 0x9212d96cb55903ed; // fix
	constexpr uint64_t CBeam_m_fWidth = 0x371e7609d8d255e2; // fix
	constexpr uint64_t CBeam_m_flFrame = 0xa723de2d37e0c8c3; // fix
	constexpr uint64_t CBeam_m_flFrameRate = 0x6e626d28d3ce973a; // fix
	constexpr uint64_t CBeam_m_flHDRColorScale = 0xf4c0fc8779dbdb1b; // fix
	constexpr uint64_t CBeam_m_hAttachEntity = 0x50cd902cf04609c4; // fix
	constexpr uint64_t CBeam_m_nAttachIndex = 0xaf2ebfeb25724ee6; // fix
	constexpr uint64_t CBeam_m_nBeamFlags = 0x8c19f5ddddc8217a; // fix
	constexpr uint64_t CBeam_m_nBeamType = 0x1b454b1688593366; // fix
	constexpr uint64_t CBeam_m_nClipStyle = 0x4b7bc01de8cac586; // fix
	constexpr uint64_t CBeam_m_nHaloIndex = 0x7037d4b892edd17a; // fix
	constexpr uint64_t CBeam_m_nModelIndex = 0xf0dee0d3d334db35; // fix
	constexpr uint64_t CBeam_m_nNumBeamEnts = 0x8ddd40601a15bd83; // fix
	constexpr uint64_t CBeam_m_nRenderFX = 0xd84e9e1b2a29b4d8; // fix
	constexpr uint64_t CBeam_m_nRenderMode = 0x58398eeabd5bfddd; // fix
	constexpr uint64_t CBeam_m_vecEndPos = 0x2d172fb2d88090ff; // fix
	constexpr uint64_t CBeam_m_vecOrigin = 0xb8a7eb8c8382f9d7; // fix
	constexpr uint64_t CBeam_moveparent = 0xa9ed5c94bdcd3e38; // fix
	constexpr uint64_t CBoneFollower_m_modelIndex = 0x9e56511ecc94fd73; // fix
	constexpr uint64_t CBoneFollower_m_solidIndex = 0x32cee5e5767438d6; // fix
	constexpr uint64_t CBreachChargeProjectile_m_bShouldExplode = 0xde339be7d79e5f7a; // fix
	constexpr uint64_t CBreachChargeProjectile_m_nParentBoneIndex = 0xe1eb648442e52dea; // fix
	constexpr uint64_t CBreachChargeProjectile_m_vecParentBonePos = 0x7bda86fae211fd5d; // fix
	constexpr uint64_t CBreachChargeProjectile_m_weaponThatThrewMe = 0xc71078faf7c7a73c; // fix
	constexpr uint64_t CBreakableProp_m_bClientPhysics = 0x3f8c97b7a5d73504; // fix
	constexpr uint64_t CBreakableProp_m_qPreferredPlayerCarryAngles = 0xe858e35023f641a8; // fix
	constexpr uint64_t CBreakableSurface_m_RawPanelBitVec = 0x2685b51f8b779f44; // fix
	constexpr uint64_t CBreakableSurface_m_bIsBroken = 0xca9c550292634926; // fix
	constexpr uint64_t CBreakableSurface_m_flPanelHeight = 0xb1e7c9249c0fcf57; // fix
	constexpr uint64_t CBreakableSurface_m_flPanelWidth = 0xeccde3b8b2a85540; // fix
	constexpr uint64_t CBreakableSurface_m_nNumHigh = 0x6a6a54d8eeb338b9; // fix
	constexpr uint64_t CBreakableSurface_m_nNumWide = 0x473e8df881b474e7; // fix
	constexpr uint64_t CBreakableSurface_m_nSurfaceType = 0x45cfdc7e8b4b60b; // fix
	constexpr uint64_t CBreakableSurface_m_vCorner = 0xf04ff70c2e08ebe6; // fix
	constexpr uint64_t CBreakableSurface_m_vNormal = 0xe6e9de602b017a89; // fix
	constexpr uint64_t CBumpMineProjectile_m_bArmed = 0x7d317eb330b6f29; // fix
	constexpr uint64_t CBumpMineProjectile_m_nParentBoneIndex = 0x2a78adebbf2132fb; // fix
	constexpr uint64_t CBumpMineProjectile_m_vecParentBonePos = 0x778fbc6b50bb3e26; // fix
	constexpr uint64_t CC4_m_bBombPlacedAnimation = 0xe715f1f4cac5b375; // fix
	constexpr uint64_t CC4_m_bIsPlantingViaUse = 0x7f6f8f3db2b00d8; // fix
	constexpr uint64_t CC4_m_bShowC4LED = 0x6cf5203090ef03b2; // fix
	constexpr uint64_t CC4_m_bStartedArming = 0xcda5a9caf361815; // fix
	constexpr uint64_t CC4_m_fArmedTime = 0x108d390371756e03; // fix
	constexpr uint64_t CCSGameRulesProxy_m_GGProgressiveWeaponKillUpgradeOrderCT = 0x923bb9031277d22; // fix
	constexpr uint64_t CCSGameRulesProxy_m_GGProgressiveWeaponKillUpgradeOrderT = 0xb403dd1b61f4079; // fix
	constexpr uint64_t CCSGameRulesProxy_m_GGProgressiveWeaponOrderCT = 0xd40bc9610121b6de; // fix
	constexpr uint64_t CCSGameRulesProxy_m_GGProgressiveWeaponOrderT = 0xac4b0334029611e4; // fix
	constexpr uint64_t CCSGameRulesProxy_m_MatchDevice = 0x2acf8feae03c3701; // fix
	constexpr uint64_t CCSGameRulesProxy_m_RetakeRules = 0x77e5d4a7b7b63c59; // fix
	constexpr uint64_t CCSGameRulesProxy_m_SpawnTileState = 0xdd3100aa592afead; // fix
	constexpr uint64_t CCSGameRulesProxy_m_SurvivalGameRuleDecisionTypes = 0xf7a865c6937581b2; // fix
	constexpr uint64_t CCSGameRulesProxy_m_SurvivalGameRuleDecisionValues = 0x5c627d3c4fca608e; // fix
	constexpr uint64_t CCSGameRulesProxy_m_SurvivalRules = 0xa0d05ee8cfba1386; // fix
	constexpr uint64_t CCSGameRulesProxy_m_TeamRespawnWaveTimes = 0x1162921f2b6b2f; // fix
	constexpr uint64_t CCSGameRulesProxy_m_arrFeaturedGiftersAccounts = 0xe5f0a512a22e5499; // fix
	constexpr uint64_t CCSGameRulesProxy_m_arrFeaturedGiftersGifts = 0x263c061e9e39ba82; // fix
	constexpr uint64_t CCSGameRulesProxy_m_arrProhibitedItemIndices = 0xf84f641c411bbba9; // fix
	constexpr uint64_t CCSGameRulesProxy_m_arrTournamentActiveCasterAccounts = 0x758ccefdb8f75cf4; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bAnyHostageReached = 0x7a904898f2014dd2; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bBlockersPresent = 0x44779b57cb959c22; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bBombDropped = 0x554364a475023322; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bBombPlanted = 0x54e2dd9f6d4b8053; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bCTCantBuy = 0x865b4f205e71c5db; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bCTTimeOutActive = 0x893da444f4b1b16d; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bDMBonusActive = 0x6d5f8c6bde1ea9fe; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bFreezePeriod = 0x91f022d6ce8d1ed7; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bGameRestart = 0x255ec0d0ef51dd36; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bHasMatchStarted = 0x6ef8cc403f867603; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bIsDroppingItems = 0x9cb02707a6197304; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bIsQuestEligible = 0xe715333b62fe9c50; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bIsQueuedMatchmaking = 0x4e38a55fabb536e0; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bIsValveDS = 0x1ec937aba021202f; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bLogoMap = 0x730c31c0456d517c; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bMapHasBombTarget = 0x1f1c829ee1e37b65; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bMapHasBuyZone = 0x5c645761d9c63f11; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bMapHasRescueZone = 0x698fd3e944d7fbe7; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bMatchWaitingForResume = 0xe39826cd5495e950; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bPlayAllStepSoundsOnServer = 0xebe3080b81e8f4e4; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bRoundInProgress = 0xb8ad83a108785bbe; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bTCantBuy = 0x80c70aabf81d9f5d; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bTechnicalTimeOut = 0xc37e121c6c367ddf; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bTerroristTimeOutActive = 0x8a06c1406dcdf82e; // fix
	constexpr uint64_t CCSGameRulesProxy_m_bWarmupPeriod = 0x7416c15f44526b9f; // fix
	constexpr uint64_t CCSGameRulesProxy_m_eRoundWinReason = 0x9b6e1c322974245e; // fix
	constexpr uint64_t CCSGameRulesProxy_m_fMatchStartTime = 0xa22d75a116d42fa9; // fix
	constexpr uint64_t CCSGameRulesProxy_m_fRoundStartTime = 0x30d89799ce9f402a; // fix
	constexpr uint64_t CCSGameRulesProxy_m_fWarmupPeriodEnd = 0xd42caf44a7f00fc2; // fix
	constexpr uint64_t CCSGameRulesProxy_m_fWarmupPeriodStart = 0xf293b0edb69839d2; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flCMMItemDropRevealEndTime = 0xefc6d89421295a58; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flCMMItemDropRevealStartTime = 0x4c56976af4d449a8; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flCTTimeOutRemaining = 0x5fe6bb3412c64ab; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flDMBonusStartTime = 0x5f2896883507ffaf; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flDMBonusTimeLength = 0x1079fa5be426480a; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flGameStartTime = 0x8cd2d2f2213dcc20; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flGuardianBuyUntilTime = 0xd505e37a261f53de; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flNextRespawnWave = 0x8dc2804fd2789150; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flRestartRoundTime = 0x2181a0a83f7d592b; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flSpawnSelectionTimeEnd = 0x25e13214ad7fce68; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flSpawnSelectionTimeLoadout = 0x53e9219aca0a4bc; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flSpawnSelectionTimeStart = 0x371342558154bbd5; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flSurvivalStartTime = 0xe160bf51d6f1fbac; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flTabletHexOriginX = 0xf3b6edbd71b744cf; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flTabletHexOriginY = 0x7ac94bc99753df56; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flTabletHexSize = 0x9e16f9d51751345; // fix
	constexpr uint64_t CCSGameRulesProxy_m_flTerroristTimeOutRemaining = 0xb0913458a66f7f31; // fix
	constexpr uint64_t CCSGameRulesProxy_m_gamePhase = 0xa291ba7a923788d1; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iActiveAssassinationTargetMissionID = 0x83dcfce96ade5a48; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iBombSite = 0x88ee51dac42bbad1; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iFirstSecondHalfRound = 0xbf8ad427864cc8ea; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iHostagesRemaining = 0x3cd2f6536a825b0d; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iMatchStats_PlayersAlive_CT = 0x30fe67b5fc284277; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iMatchStats_PlayersAlive_T = 0xfdb5899bd5d36b67; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iMatchStats_RoundResults = 0x46c3c5a505e9dc14; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iNumConsecutiveCTLoses = 0xafafcb6e23d46699; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iNumConsecutiveTerroristLoses = 0xca080bc646bab965; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsCT = 0x1fcb56a45dabeea; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsT = 0x75f73693089722ba; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iPlayerSpawnHexIndices = 0xc81004c11704df2b; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iRoundTime = 0xccc89c9326591123; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iRoundWinStatus = 0xf1c6403a4877fa65; // fix
	constexpr uint64_t CCSGameRulesProxy_m_iSpectatorSlotCount = 0xdb2ca60965343576; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nCTTimeOuts = 0xe5bad59e9721da37; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nEndMatchMapGroupVoteOptions = 0x412c019233632696; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nEndMatchMapGroupVoteTypes = 0xcc89f167f4293392; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nEndMatchMapVoteWinner = 0x34b2550fddc88170; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nGuardianModeSpecialKillsRemaining = 0xd988378fa2670f95; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nGuardianModeSpecialWeaponNeeded = 0xcdb4a8be0d21da82; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nGuardianModeWaveNumber = 0xe46d4c00ee5df295; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nHalloweenMaskListSeed = 0xf7b4cae404e21437; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nMatchSeed = 0xef3687701da47f64; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nNextMapInMapgroup = 0x69481f5b4eb22441; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nOvertimePlaying = 0xc75fcbc69ed0c74b; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nQueuedMatchmakingMode = 0xebcd0c25444ddbf3; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nTerroristTimeOuts = 0x769e67fd0bc11e94; // fix
	constexpr uint64_t CCSGameRulesProxy_m_nTournamentPredictionsPct = 0x5f5245ffd5266028; // fix
	constexpr uint64_t CCSGameRulesProxy_m_numBestOfMaps = 0x3f44fdfd0117a988; // fix
	constexpr uint64_t CCSGameRulesProxy_m_numGlobalGifters = 0x8cbcc92b9377afc5; // fix
	constexpr uint64_t CCSGameRulesProxy_m_numGlobalGiftsGiven = 0xd8325cc5531f3c81; // fix
	constexpr uint64_t CCSGameRulesProxy_m_numGlobalGiftsPeriodSeconds = 0x4086d94ca6ed365c; // fix
	constexpr uint64_t CCSGameRulesProxy_m_roundData_playerPositions = 0xbf09ea9a79898dc0; // fix
	constexpr uint64_t CCSGameRulesProxy_m_roundData_playerTeams = 0xde645fbd15179a0b; // fix
	constexpr uint64_t CCSGameRulesProxy_m_roundData_playerXuids = 0x551d72f0fcc45712; // fix
	constexpr uint64_t CCSGameRulesProxy_m_spawnStage = 0x92ff3aa5ffb16c86; // fix
	constexpr uint64_t CCSGameRulesProxy_m_szMatchStatTxt = 0x335b13274492f5f6; // fix
	constexpr uint64_t CCSGameRulesProxy_m_szTournamentEventName = 0x2a08b54bbc404d8b; // fix
	constexpr uint64_t CCSGameRulesProxy_m_szTournamentEventStage = 0xb7715ee78c7d1514; // fix
	constexpr uint64_t CCSGameRulesProxy_m_szTournamentPredictionsTxt = 0x10a8b4c9fa112b19; // fix
	constexpr uint64_t CCSGameRulesProxy_m_timeUntilNextPhaseStarts = 0xef1add771bb82ee5; // fix
	constexpr uint64_t CCSGameRulesProxy_m_totalRoundsPlayed = 0xea1fe48faa560cb4; // fix
	constexpr uint64_t CCSGameRulesProxy_m_unDMBonusWeaponLoadoutSlot = 0x7e62e44665efa1cb; // fix
	constexpr uint64_t CCSGameRulesProxy_m_vecPlayAreaMaxs = 0x72c2e4c33e20ef39; // fix
	constexpr uint64_t CCSGameRulesProxy_m_vecPlayAreaMins = 0x7cb274f52479ba51; // fix
	constexpr uint64_t CCSPlayerResource_m_bControllingBot = 0xe18c8ec0ad4c68ac; // fix
	constexpr uint64_t CCSPlayerResource_m_bEndMatchNextMapAllVoted = 0xbeddd1ca30a76a7c; // fix
	constexpr uint64_t CCSPlayerResource_m_bHasCommunicationAbuseMute = 0xc7c245aad5a06174; // fix
	constexpr uint64_t CCSPlayerResource_m_bHasDefuser = 0x14b077d60e78be90; // fix
	constexpr uint64_t CCSPlayerResource_m_bHasHelmet = 0x86b6c8370389cb34; // fix
	constexpr uint64_t CCSPlayerResource_m_bHostageAlive = 0x2011e1b6eb391a76; // fix
	constexpr uint64_t CCSPlayerResource_m_bombsiteCenterA = 0xbeb8c9525a14af1c; // fix
	constexpr uint64_t CCSPlayerResource_m_bombsiteCenterB = 0x873ad92ee5b803aa; // fix
	constexpr uint64_t CCSPlayerResource_m_hostageRescueX = 0x5e65b8062320c6e1; // fix
	constexpr uint64_t CCSPlayerResource_m_hostageRescueY = 0x35a3730969ff5d83; // fix
	constexpr uint64_t CCSPlayerResource_m_hostageRescueZ = 0x73351bcbe9b4e36; // fix
	constexpr uint64_t CCSPlayerResource_m_iArmor = 0x238fa83913454699; // fix
	constexpr uint64_t CCSPlayerResource_m_iBotDifficulty = 0x15125725e64c3d5c; // fix
	constexpr uint64_t CCSPlayerResource_m_iCashSpentThisRound = 0xe17e8023ac4c2f22; // fix
	constexpr uint64_t CCSPlayerResource_m_iCompTeammateColor = 0xe9d0b99bdfbed58c; // fix
	constexpr uint64_t CCSPlayerResource_m_iCompetitiveRankType = 0xf71c8e647e1096d9; // fix
	constexpr uint64_t CCSPlayerResource_m_iCompetitiveRanking = 0x638f9b3144c8d975; // fix
	constexpr uint64_t CCSPlayerResource_m_iCompetitiveWins = 0x2bb87a6d33930bca; // fix
	constexpr uint64_t CCSPlayerResource_m_iControlledByPlayer = 0x5a9feddcf645e2cf; // fix
	constexpr uint64_t CCSPlayerResource_m_iControlledPlayer = 0xba76ddc1acd22cd; // fix
	constexpr uint64_t CCSPlayerResource_m_iGunGameLevel = 0xbb07b10de80522be; // fix
	constexpr uint64_t CCSPlayerResource_m_iHostageEntityIDs = 0x8d75ea7caf56ab5; // fix
	constexpr uint64_t CCSPlayerResource_m_iLifetimeEnd = 0x7c576451e7b1a02a; // fix
	constexpr uint64_t CCSPlayerResource_m_iLifetimeStart = 0x829f2cb9ff6f874; // fix
	constexpr uint64_t CCSPlayerResource_m_iMVPs = 0xea0012f57d705248; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_3k_Total = 0x3bb20222977388fd; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_4k_Total = 0x3e2c1962a9efce0b; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_5k_Total = 0xa5e4082a14041ee9; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Assists_Total = 0x59498634920ba031; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_CashEarned_Total = 0x1316182f40b17ef0; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Damage_Total = 0x3ad45d857d293259; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Deaths_Total = 0x5f651c374efee12e; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_EnemiesFlashed_Total = 0x842e7218e689af71; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_EquipmentValue_Total = 0x4e18ee0e3fed2a9d; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_HeadShotKills_Total = 0x2f33d518faf390be; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_KillReward_Total = 0xe8fdf0428a6bcdc8; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Kills_Total = 0x6ae24d74bf7f7ff2; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_LiveTime_Total = 0xdeeff90e3fd29616; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_Objective_Total = 0xe00258988124d67c; // fix
	constexpr uint64_t CCSPlayerResource_m_iMatchStats_UtilityDamage_Total = 0x6baf27349f504ea4; // fix
	constexpr uint64_t CCSPlayerResource_m_iPlayerC4 = 0x1ddcb1a50fc6fd0c; // fix
	constexpr uint64_t CCSPlayerResource_m_iPlayerVIP = 0x1d70694cab758613; // fix
	constexpr uint64_t CCSPlayerResource_m_iScore = 0x88fa70926043128b; // fix
	constexpr uint64_t CCSPlayerResource_m_iTotalCashSpent = 0x4cfacf4f59ba4166; // fix
	constexpr uint64_t CCSPlayerResource_m_isHostageFollowingSomeone = 0x3c1db4c30a935e04; // fix
	constexpr uint64_t CCSPlayerResource_m_nActiveCoinRank = 0x72df80f8ade94187; // fix
	constexpr uint64_t CCSPlayerResource_m_nCharacterDefIndex = 0x4a76894c0add77ef; // fix
	constexpr uint64_t CCSPlayerResource_m_nEndMatchNextMapVotes = 0x1c4c9cec3b0f4ce8; // fix
	constexpr uint64_t CCSPlayerResource_m_nMusicID = 0x6dd2bc1082fd7841; // fix
	constexpr uint64_t CCSPlayerResource_m_nPersonaDataPublicCommendsFriendly = 0xada45e900715cfde; // fix
	constexpr uint64_t CCSPlayerResource_m_nPersonaDataPublicCommendsLeader = 0xc41e8bf3705d196b; // fix
	constexpr uint64_t CCSPlayerResource_m_nPersonaDataPublicCommendsTeacher = 0x43b21169264974a3; // fix
	constexpr uint64_t CCSPlayerResource_m_nPersonaDataPublicLevel = 0x383430937dcfdab2; // fix
	constexpr uint64_t CCSPlayerResource_m_szClan = 0xdaf903af0abb0594; // fix
	constexpr uint64_t CCSPlayerResource_m_szCrosshairCodes = 0x11bf80d0d2006ce2; // fix
	constexpr uint64_t CCSPlayer_m_ArmorValue = 0xfe6bebbceda3cbb3; // fix
	constexpr uint64_t CCSPlayer_m_EquippedLoadoutItemDefIndices = 0x233b64f2d0e63d10; // fix
	constexpr uint64_t CCSPlayer_m_RetakesMVPBoostExtraUtility = 0x14bd8d142884db2; // fix
	constexpr uint64_t CCSPlayer_m_angEyeAngles = 0xdbbdfd1b64b39502; // fix
	constexpr uint64_t CCSPlayer_m_angEyeAngles_0_ = 0xb56d5f3acd8fafbe; // fix
	constexpr uint64_t CCSPlayer_m_angEyeAngles_1_ = 0x95ede5bbbd93ba6a; // fix
	constexpr uint64_t CCSPlayer_m_bCanControlObservedBot = 0x201f70bc74392a0; // fix
	constexpr uint64_t CCSPlayer_m_bCanMoveDuringFreezePeriod = 0x67c4a2676c36e406; // fix
	constexpr uint64_t CCSPlayer_m_bDuckOverride = 0x796810d82f123ad1; // fix
	constexpr uint64_t CCSPlayer_m_bGunGameImmunity = 0x207381e078d3636c; // fix
	constexpr uint64_t CCSPlayer_m_bHasControlledBotThisRound = 0x1f8fa8d6ea3b5fde; // fix
	constexpr uint64_t CCSPlayer_m_bHasDefuser = 0x2f6bdf8912c17440; // fix
	constexpr uint64_t CCSPlayer_m_bHasHeavyArmor = 0xd95ee6ed9c52b515; // fix
	constexpr uint64_t CCSPlayer_m_bHasHelmet = 0xf41c154f47a74cde; // fix
	constexpr uint64_t CCSPlayer_m_bHasMovedSinceSpawn = 0xfe28afeeccb28f26; // fix
	constexpr uint64_t CCSPlayer_m_bHasNightVision = 0x1ec79e4853a8cd5f; // fix
	constexpr uint64_t CCSPlayer_m_bHasParachute = 0x6978a81d800fd0b9; // fix
	constexpr uint64_t CCSPlayer_m_bHideTargetID = 0xc9f3e40a5ac739b4; // fix
	constexpr uint64_t CCSPlayer_m_bHud_MiniScoreHidden = 0xf6b722acb91e61df; // fix
	constexpr uint64_t CCSPlayer_m_bHud_RadarHidden = 0xae8ec0a72af4c0a6; // fix
	constexpr uint64_t CCSPlayer_m_bInBombZone = 0xe13b4341d762eb62; // fix
	constexpr uint64_t CCSPlayer_m_bInBuyZone = 0xd27c172a0f330a97; // fix
	constexpr uint64_t CCSPlayer_m_bInHostageRescueZone = 0x77392a3fb31feaae; // fix
	constexpr uint64_t CCSPlayer_m_bInNoDefuseArea = 0x86e3369b8e2367dc; // fix
	constexpr uint64_t CCSPlayer_m_bIsAssassinationTarget = 0xba6c5af1746e2c3; // fix
	constexpr uint64_t CCSPlayer_m_bIsControllingBot = 0xd5687a521f8a279b; // fix
	constexpr uint64_t CCSPlayer_m_bIsDefusing = 0x659f6d009fa3f459; // fix
	constexpr uint64_t CCSPlayer_m_bIsGrabbingHostage = 0x85c1919e5e2f2879; // fix
	constexpr uint64_t CCSPlayer_m_bIsHoldingLookAtWeapon = 0xee2c0362ec495646; // fix
	constexpr uint64_t CCSPlayer_m_bIsLookingAtWeapon = 0x4df5c17d4758a6b0; // fix
	constexpr uint64_t CCSPlayer_m_bIsPlayerGhost = 0xefde25cbf33d06aa; // fix
	constexpr uint64_t CCSPlayer_m_bIsRescuing = 0x547ad23080c7755e; // fix
	constexpr uint64_t CCSPlayer_m_bIsRespawningForDMBonus = 0x28fdd055e26eae52; // fix
	constexpr uint64_t CCSPlayer_m_bIsScoped = 0x47c50812d01d6e96; // fix
	constexpr uint64_t CCSPlayer_m_bIsSpawnRappelling = 0x1d9c9e0c446c6c2c; // fix
	constexpr uint64_t CCSPlayer_m_bIsWalking = 0xa99302c43a012b5; // fix
	constexpr uint64_t CCSPlayer_m_bKilledByTaser = 0x18c5946c0f3fd310; // fix
	constexpr uint64_t CCSPlayer_m_bMadeFinalGunGameProgressiveKill = 0x6ddfdb2d8370e2cc; // fix
	constexpr uint64_t CCSPlayer_m_bNightVisionOn = 0x98c97bf04fc1e878; // fix
	constexpr uint64_t CCSPlayer_m_bPlayerDominated = 0x75a9d3c1b8521135; // fix
	constexpr uint64_t CCSPlayer_m_bPlayerDominatingMe = 0xe958a18cd200e7a5; // fix
	constexpr uint64_t CCSPlayer_m_bResumeZoom = 0xa88e7d06203bd741; // fix
	constexpr uint64_t CCSPlayer_m_bRetakesHasDefuseKit = 0x97916087a89c9545; // fix
	constexpr uint64_t CCSPlayer_m_bRetakesMVPLastRound = 0x530f5d4b882c9313; // fix
	constexpr uint64_t CCSPlayer_m_bStrafing = 0x3fed8a4a3d2a10d0; // fix
	constexpr uint64_t CCSPlayer_m_bWaitForNoAttack = 0x70edbda12d2b631; // fix
	constexpr uint64_t CCSPlayer_m_cycleLatch = 0x1524435d924676de; // fix
	constexpr uint64_t CCSPlayer_m_fImmuneToGunGameDamageTime = 0xfc45aa219d755815; // fix
	constexpr uint64_t CCSPlayer_m_fMolotovDamageTime = 0x26c8ac3bd749784d; // fix
	constexpr uint64_t CCSPlayer_m_fMolotovUseTime = 0xd6deccbadc277945; // fix
	constexpr uint64_t CCSPlayer_m_flAutoMoveStartTime = 0xa6b14666f1ec6eab; // fix
	constexpr uint64_t CCSPlayer_m_flAutoMoveTargetTime = 0xc441ef9b5add5932; // fix
	constexpr uint64_t CCSPlayer_m_flDetectedByEnemySensorTime = 0x2478b5b0a86903a2; // fix
	constexpr uint64_t CCSPlayer_m_flFlashDuration = 0x82e37eab0fc3f0fc; // fix
	constexpr uint64_t CCSPlayer_m_flFlashMaxAlpha = 0x331ac96a90104002; // fix
	constexpr uint64_t CCSPlayer_m_flGroundAccelLinearFracLastTime = 0xae1906d340f122aa; // fix
	constexpr uint64_t CCSPlayer_m_flGuardianTooFarDistFrac = 0xafd3999de22e49e9; // fix
	constexpr uint64_t CCSPlayer_m_flHealthShotBoostExpirationTime = 0xb4ac66fe425588fd; // fix
	constexpr uint64_t CCSPlayer_m_flLastExoJumpTime = 0x26cd6400c89c136d; // fix
	constexpr uint64_t CCSPlayer_m_flLowerBodyYawTarget = 0x30b741a187422adf; // fix
	constexpr uint64_t CCSPlayer_m_flProgressBarStartTime = 0x97700b5c19d765fa; // fix
	constexpr uint64_t CCSPlayer_m_flStamina = 0x2e26fe4c706ed0e0; // fix
	constexpr uint64_t CCSPlayer_m_flThirdpersonRecoil = 0x6dc2bb74cfe9b07; // fix
	constexpr uint64_t CCSPlayer_m_flVelocityModifier = 0x3e65f235915b750f; // fix
	constexpr uint64_t CCSPlayer_m_hCarriedHostage = 0xea189eea4924; // fix
	constexpr uint64_t CCSPlayer_m_hCarriedHostageProp = 0xec68ee586e1c3cdb; // fix
	constexpr uint64_t CCSPlayer_m_hPlayerPing = 0x1b4f60137b48a228; // fix
	constexpr uint64_t CCSPlayer_m_hRagdoll = 0xf5c51e49a9decc1; // fix
	constexpr uint64_t CCSPlayer_m_hSurvivalAssassinationTarget = 0x8a9f781cf6607f6e; // fix
	constexpr uint64_t CCSPlayer_m_iAccount = 0x4dd38de97b052785; // fix
	constexpr uint64_t CCSPlayer_m_iAddonBits = 0x5041a2aac087a3da; // fix
	constexpr uint64_t CCSPlayer_m_iBlockingUseActionInProgress = 0xf40d7b79fb23f749; // fix
	constexpr uint64_t CCSPlayer_m_iClass = 0x2fa25b500656c517; // fix
	constexpr uint64_t CCSPlayer_m_iControlledBotEntIndex = 0x8ff2d9e6e7611318; // fix
	constexpr uint64_t CCSPlayer_m_iDirection = 0x8fab24791d8cf025; // fix
	constexpr uint64_t CCSPlayer_m_iGunGameProgressiveWeaponIndex = 0x8cb1e8bc0d6572f4; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_Assists = 0xdc6a93d3cb68be8f; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_CashEarned = 0x18b0eb7a1a467a2; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_Damage = 0xcbcd6c9bde529d28; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_Deaths = 0xe497d5a5c8abbcab; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_EnemiesFlashed = 0x72b63de0b0a73200; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_EquipmentValue = 0xc3a262a7db92dca5; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_HeadShotKills = 0x543aaea16f87175d; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_KillReward = 0xdaa6c813b88bf38; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_Kills = 0x5a320a9edb4fc5f6; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_LiveTime = 0x6b6c2742114aae42; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_MoneySaved = 0xb110c0a6bf45b433; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_Objective = 0x51bbbf8ff260591; // fix
	constexpr uint64_t CCSPlayer_m_iMatchStats_UtilityDamage = 0x6b61e93f907e4925; // fix
	constexpr uint64_t CCSPlayer_m_iMoveState = 0x4b0f6ee9cb537df0; // fix
	constexpr uint64_t CCSPlayer_m_iNumGunGameKillsWithCurrentWeapon = 0xaa6c48767ca5d5dd; // fix
	constexpr uint64_t CCSPlayer_m_iNumGunGameTRKillPoints = 0xb975143aba0187ae; // fix
	constexpr uint64_t CCSPlayer_m_iNumRoundKills = 0xe53c7b7cacd9fe56; // fix
	constexpr uint64_t CCSPlayer_m_iNumRoundKillsHeadshots = 0x7e558d9f6766c4ff; // fix
	constexpr uint64_t CCSPlayer_m_iPlayerState = 0x8b57c8e941e84160; // fix
	constexpr uint64_t CCSPlayer_m_iPrimaryAddon = 0xa83c8078f4449921; // fix
	constexpr uint64_t CCSPlayer_m_iProgressBarDuration = 0x84db5ea187d9cca5; // fix
	constexpr uint64_t CCSPlayer_m_iRetakesMVPBoostItem = 0xc4ae84c68dcb83fc; // fix
	constexpr uint64_t CCSPlayer_m_iRetakesOffering = 0xc4a9152b672ae199; // fix
	constexpr uint64_t CCSPlayer_m_iRetakesOfferingCard = 0xea7b12c06af6946a; // fix
	constexpr uint64_t CCSPlayer_m_iSecondaryAddon = 0xa27cebcbd5ec23f9; // fix
	constexpr uint64_t CCSPlayer_m_iShotsFired = 0x86b0584bcde8cb73; // fix
	constexpr uint64_t CCSPlayer_m_iStartAccount = 0xedb1aa1c8d7cd88a; // fix
	constexpr uint64_t CCSPlayer_m_iThrowGrenadeCounter = 0x8cfadbab6c9777c3; // fix
	constexpr uint64_t CCSPlayer_m_iWeaponPurchasesThisMatch = 0xb8df04b2c14d3e94; // fix
	constexpr uint64_t CCSPlayer_m_iWeaponPurchasesThisRound = 0xee2ebfbee0b37b6; // fix
	constexpr uint64_t CCSPlayer_m_isCurrentGunGameLeader = 0x9d0e26da33b7adc5; // fix
	constexpr uint64_t CCSPlayer_m_isCurrentGunGameTeamLeader = 0xf815875fd6af53f4; // fix
	constexpr uint64_t CCSPlayer_m_nDeathCamMusic = 0x74359ae69639c6aa; // fix
	constexpr uint64_t CCSPlayer_m_nHeavyAssaultSuitCooldownRemaining = 0xfd12c0bac3dcd082; // fix
	constexpr uint64_t CCSPlayer_m_nIsAutoMounting = 0xee0fbae951d66d04; // fix
	constexpr uint64_t CCSPlayer_m_nLastConcurrentKilled = 0x8ef29d539ca2ff67; // fix
	constexpr uint64_t CCSPlayer_m_nLastKillerIndex = 0xabd6b7afd929ef3b; // fix
	constexpr uint64_t CCSPlayer_m_nNumFastDucks = 0xc3ad45b0c689f8c5; // fix
	constexpr uint64_t CCSPlayer_m_nQuestProgressReason = 0x5ffb2c0c1decc0fe; // fix
	constexpr uint64_t CCSPlayer_m_nSurvivalTeam = 0x713d554d3c4551b3; // fix
	constexpr uint64_t CCSPlayer_m_passiveItems = 0x987dde0faf6da654; // fix
	constexpr uint64_t CCSPlayer_m_rank = 0xcb8960b0275e5c6; // fix
	constexpr uint64_t CCSPlayer_m_szArmsModel = 0x9bc7301cce2f7424; // fix
	constexpr uint64_t CCSPlayer_m_totalHitsOnServer = 0xe036208d2cdfb384; // fix
	constexpr uint64_t CCSPlayer_m_unActiveQuestId = 0x8e9a2e3038728e3f; // fix
	constexpr uint64_t CCSPlayer_m_unCurrentEquipmentValue = 0x2fba76cca01d97e9; // fix
	constexpr uint64_t CCSPlayer_m_unFreezetimeEndEquipmentValue = 0xac289cea38a7b623; // fix
	constexpr uint64_t CCSPlayer_m_unMusicID = 0xab6a0ca8057c9d8b; // fix
	constexpr uint64_t CCSPlayer_m_unPlayerTvControlFlags = 0x3266a9b1a523fcdb; // fix
	constexpr uint64_t CCSPlayer_m_unRoundStartEquipmentValue = 0xdd7da3d4bd0cf36d; // fix
	constexpr uint64_t CCSPlayer_m_unTotalRoundDamageDealt = 0x34fea20a9996a68; // fix
	constexpr uint64_t CCSPlayer_m_vecAutomoveTargetEnd = 0x9df742145ee93d76; // fix
	constexpr uint64_t CCSPlayer_m_vecOrigin = 0x103177dd78fc6578; // fix
	constexpr uint64_t CCSPlayer_m_vecOrigin_2_ = 0xb99206f7605a0e23; // fix
	constexpr uint64_t CCSPlayer_m_vecPlayerPatchEconIndices = 0xad956766668dbdc3; // fix
	constexpr uint64_t CCSPlayer_m_vecSpawnRappellingRopeOrigin = 0x51742a1af6734f4c; // fix
	constexpr uint64_t CCSRagdoll_m_bClientSideAnimation = 0x606344aa3e12f0; // fix
	constexpr uint64_t CCSRagdoll_m_bDiedAirborne = 0xa25f0bcec99f11eb; // fix
	constexpr uint64_t CCSRagdoll_m_flAbsYaw = 0x20f53d389735447d; // fix
	constexpr uint64_t CCSRagdoll_m_flDeathYaw = 0xa14801fad4b76028; // fix
	constexpr uint64_t CCSRagdoll_m_hPlayer = 0x2f6d5b065ee18589; // fix
	constexpr uint64_t CCSRagdoll_m_iDeathFrame = 0x6191160ef87fe70f; // fix
	constexpr uint64_t CCSRagdoll_m_iDeathPose = 0x9df475fa731876ca; // fix
	constexpr uint64_t CCSRagdoll_m_iTeamNum = 0x81746369b799624b; // fix
	constexpr uint64_t CCSRagdoll_m_nForceBone = 0x2d2e26f76d2c22b5; // fix
	constexpr uint64_t CCSRagdoll_m_nModelIndex = 0x30a3cf18318b8dc1; // fix
	constexpr uint64_t CCSRagdoll_m_vecForce = 0x52e75f07e25a898a; // fix
	constexpr uint64_t CCSRagdoll_m_vecOrigin = 0xb8eb8990d706fd80; // fix
	constexpr uint64_t CCSRagdoll_m_vecRagdollOrigin = 0x22c9b42119c4a871; // fix
	constexpr uint64_t CCSRagdoll_m_vecRagdollVelocity = 0xb983c167897e2748; // fix
	constexpr uint64_t CCascadeLight_m_LightColor = 0xfc51850169d8a7b3; // fix
	constexpr uint64_t CCascadeLight_m_LightColorScale = 0x9534a515858b8826; // fix
	constexpr uint64_t CCascadeLight_m_bEnabled = 0x2c6541cd95fb942d; // fix
	constexpr uint64_t CCascadeLight_m_bUseLightEnvAngles = 0xd66084c335f1e6b2; // fix
	constexpr uint64_t CCascadeLight_m_envLightShadowDirection = 0x7f4cba061e7efe0d; // fix
	constexpr uint64_t CCascadeLight_m_flMaxShadowDist = 0x3a259472c25e6d52; // fix
	constexpr uint64_t CCascadeLight_m_shadowDirection = 0x8d16992d1fba8a19; // fix
	constexpr uint64_t CChicken_m_jumpedThisFrame = 0x13f47ffa6deee6ed; // fix
	constexpr uint64_t CChicken_m_leader = 0xda1824385b15b689; // fix
	constexpr uint64_t CColorCorrectionVolume_m_FadeDuration = 0x10552899ff5cfe23; // fix
	constexpr uint64_t CColorCorrectionVolume_m_MaxWeight = 0x56dc2c78561e6aeb; // fix
	constexpr uint64_t CColorCorrectionVolume_m_Weight = 0xf4871c58dfc4e115; // fix
	constexpr uint64_t CColorCorrectionVolume_m_bEnabled = 0xeb393f3d91b1239; // fix
	constexpr uint64_t CColorCorrectionVolume_m_lookupFilename = 0xfa38a2b35676e59e; // fix
	constexpr uint64_t CColorCorrection_m_bClientSide = 0x79d2a9b94cb2d6b3; // fix
	constexpr uint64_t CColorCorrection_m_bEnabled = 0xdb09effb2826bf5a; // fix
	constexpr uint64_t CColorCorrection_m_bExclusive = 0x61401adce63e171f; // fix
	constexpr uint64_t CColorCorrection_m_bMaster = 0x6e13c82758e5bd2c; // fix
	constexpr uint64_t CColorCorrection_m_flCurWeight = 0x28636d7174bb3792; // fix
	constexpr uint64_t CColorCorrection_m_flFadeInDuration = 0x80364c6e08b98fe1; // fix
	constexpr uint64_t CColorCorrection_m_flFadeOutDuration = 0xb31554dc16a02a42; // fix
	constexpr uint64_t CColorCorrection_m_flMaxWeight = 0xfea4916eef35245; // fix
	constexpr uint64_t CColorCorrection_m_maxFalloff = 0x7c747a7096516197; // fix
	constexpr uint64_t CColorCorrection_m_minFalloff = 0x7060159ddd0df8ec; // fix
	constexpr uint64_t CColorCorrection_m_netLookupFilename = 0xe644da6462f16e4e; // fix
	constexpr uint64_t CColorCorrection_m_vecOrigin = 0x4abe96a031926d87; // fix
	constexpr uint64_t CDangerZoneController_m_DangerZones = 0x3972f85d5c86c278; // fix
	constexpr uint64_t CDangerZoneController_m_bDangerZoneControllerEnabled = 0x9b07403f251821ce; // fix
	constexpr uint64_t CDangerZoneController_m_bMissionControlledExplosions = 0x36ae38a47e16405; // fix
	constexpr uint64_t CDangerZoneController_m_flFinalExpansionTime = 0xeb90288e4f24b0d; // fix
	constexpr uint64_t CDangerZoneController_m_flStartTime = 0x9526ab21d5b6d07; // fix
	constexpr uint64_t CDangerZoneController_m_flWaveEndTimes = 0x200fdf1298714736; // fix
	constexpr uint64_t CDangerZoneController_m_hTheFinalZone = 0x750379c69665c8df; // fix
	constexpr uint64_t CDangerZoneController_m_vecEndGameCircleEnd = 0xb2144e84dd71e9c4; // fix
	constexpr uint64_t CDangerZoneController_m_vecEndGameCircleStart = 0xa2b7954ddf3d3ae; // fix
	constexpr uint64_t CDangerZone_m_flBombLaunchTime = 0x4b9d795d9d1ac89d; // fix
	constexpr uint64_t CDangerZone_m_flExtraRadius = 0x6ef267ab19ac7113; // fix
	constexpr uint64_t CDangerZone_m_flExtraRadiusStartTime = 0xb02db0d2045ff92d; // fix
	constexpr uint64_t CDangerZone_m_flExtraRadiusTotalLerpTime = 0x8cce496aeb5c13ba; // fix
	constexpr uint64_t CDangerZone_m_iWave = 0xdbc6627cc5cae494; // fix
	constexpr uint64_t CDangerZone_m_nDropOrder = 0xaa84421ee8a8a588; // fix
	constexpr uint64_t CDangerZone_m_vecDangerZoneOriginStartedAt = 0xb2f4dbff7cac4d49; // fix
	constexpr uint64_t CDrone_m_bPilotTakeoverAllowed = 0x78f3b077903a3c1f; // fix
	constexpr uint64_t CDrone_m_hCurrentPilot = 0x3267c5d1aab180d1; // fix
	constexpr uint64_t CDrone_m_hDeliveryCargo = 0xec8093ca39628a3b; // fix
	constexpr uint64_t CDrone_m_hMoveToThisEntity = 0x9310fd5d74d4925; // fix
	constexpr uint64_t CDrone_m_hPotentialCargo = 0x55f8d2cf9a244562; // fix
	constexpr uint64_t CDrone_m_vecTagIncrements_0_ = 0xf767a77137e1483e; // fix
	constexpr uint64_t CDrone_m_vecTagPositions_0_ = 0x4addcd9e566d1614; // fix
	constexpr uint64_t CDronegun_m_bHasTarget = 0x8fc328fef60e10; // fix
	constexpr uint64_t CDronegun_m_iHealth = 0x6a032ebaaed4011c; // fix
	constexpr uint64_t CDronegun_m_vecAttentionTarget = 0x2c4cb51e560fa7a9; // fix
	constexpr uint64_t CDronegun_m_vecTargetOffset = 0x6fd714a7391ab04b; // fix
	constexpr uint64_t CDynamicLight_m_Exponent = 0x1beb20a94d41ad58; // fix
	constexpr uint64_t CDynamicLight_m_Flags = 0x879686e8ae4684a6; // fix
	constexpr uint64_t CDynamicLight_m_InnerAngle = 0x5cccc21a4fdbfdfd; // fix
	constexpr uint64_t CDynamicLight_m_LightStyle = 0x68637f133d8c85fa; // fix
	constexpr uint64_t CDynamicLight_m_OuterAngle = 0x57b7571bf78e16e5; // fix
	constexpr uint64_t CDynamicLight_m_Radius = 0x827ac22812ec1838; // fix
	constexpr uint64_t CDynamicLight_m_SpotRadius = 0x7ad5aea439b5ce70; // fix
	constexpr uint64_t CDynamicProp_m_bShouldGlow = 0x2815feb0a57b6113; // fix
	constexpr uint64_t CDynamicProp_m_bUseHitboxesForRenderBox = 0x9cc83ad2ba59baa6; // fix
	constexpr uint64_t CDynamicProp_m_clrGlow = 0x9dba3a4244fbe6; // fix
	constexpr uint64_t CDynamicProp_m_flGlowMaxDist = 0x35283387b9c88eb2; // fix
	constexpr uint64_t CDynamicProp_m_nGlowStyle = 0xf362d9f167d126f3; // fix
	constexpr uint64_t CEconEntity_m_AttributeManager = 0x562d736f26e9ff34; // fix
	constexpr uint64_t CEconEntity_m_Attributes = 0xf8b208129a0b1bf5; // fix
	constexpr uint64_t CEconEntity_m_Item = 0xc811d1867dc29b8a; // fix
	constexpr uint64_t CEconEntity_m_NetworkedDynamicAttributesForDemos = 0xdd028f4892d3dd8f; // fix
	constexpr uint64_t CEconEntity_m_OriginalOwnerXuidHigh = 0x37f51160bd14487d; // fix
	constexpr uint64_t CEconEntity_m_OriginalOwnerXuidLow = 0xee33c2c7440d841c; // fix
	constexpr uint64_t CEconEntity_m_ProviderType = 0xc96fca27ba592e5b; // fix
	constexpr uint64_t CEconEntity_m_bInitialized = 0x536fd12f1329531f; // fix
	constexpr uint64_t CEconEntity_m_flFallbackWear = 0xb03ce676a01b1bca; // fix
	constexpr uint64_t CEconEntity_m_hOuter = 0x76332d791012c4a2; // fix
	constexpr uint64_t CEconEntity_m_iAccountID = 0xeedb0d813b6952e4; // fix
	constexpr uint64_t CEconEntity_m_iEntityLevel = 0xfdc0e54774085196; // fix
	constexpr uint64_t CEconEntity_m_iEntityQuality = 0x1f858d98ec7fab3; // fix
	constexpr uint64_t CEconEntity_m_iItemDefinitionIndex = 0x64662ee0fbcb9d6a; // fix
	constexpr uint64_t CEconEntity_m_iItemIDHigh = 0x5fb02e9fef9392e1; // fix
	constexpr uint64_t CEconEntity_m_iItemIDLow = 0x6f233a0f09da2ddd; // fix
	constexpr uint64_t CEconEntity_m_iReapplyProvisionParity = 0x297c7b0d992cdce5; // fix
	constexpr uint64_t CEconEntity_m_nFallbackPaintKit = 0xc8fdc5c51d13bf89; // fix
	constexpr uint64_t CEconEntity_m_nFallbackSeed = 0x69709c5217a88bdc; // fix
	constexpr uint64_t CEconEntity_m_nFallbackStatTrak = 0xb838efe0714ab6ff; // fix
	constexpr uint64_t CEconEntity_m_szCustomName = 0x13fb3b8495657917; // fix
	constexpr uint64_t CEmbers_m_bEmit = 0x1b0f9edc2689e7a5; // fix
	constexpr uint64_t CEmbers_m_nDensity = 0xa4a0ee6878b9d24f; // fix
	constexpr uint64_t CEmbers_m_nLifetime = 0xb7d9d633b954a49a; // fix
	constexpr uint64_t CEmbers_m_nSpeed = 0x34ec2a8c8e2aa3b5; // fix
	constexpr uint64_t CEntityDissolve_m_flFadeInLength = 0x1a05f60e647a2ba; // fix
	constexpr uint64_t CEntityDissolve_m_flFadeInStart = 0xa050b83b959d52a6; // fix
	constexpr uint64_t CEntityDissolve_m_flFadeOutLength = 0x457e629d79b006a4; // fix
	constexpr uint64_t CEntityDissolve_m_flFadeOutModelLength = 0x43d0311923b96e2c; // fix
	constexpr uint64_t CEntityDissolve_m_flFadeOutModelStart = 0x886a3b2678c79dcf; // fix
	constexpr uint64_t CEntityDissolve_m_flFadeOutStart = 0x64da96dda440406; // fix
	constexpr uint64_t CEntityDissolve_m_flStartTime = 0xd264d63b943f3e97; // fix
	constexpr uint64_t CEntityDissolve_m_nDissolveType = 0xd323976bff5d68c4; // fix
	constexpr uint64_t CEntityDissolve_m_nMagnitude = 0x1e12363f863aa769; // fix
	constexpr uint64_t CEntityDissolve_m_vDissolverOrigin = 0x3dcf76266804336c; // fix
	constexpr uint64_t CEntityFlame_m_bCheapEffect = 0x1d63083afd4a3b09; // fix
	constexpr uint64_t CEntityFlame_m_hEntAttached = 0xb0ec0a557aa4c9cb; // fix
	constexpr uint64_t CEntityFreezing_m_bFinishFreezing = 0xea3b115a6a57110d; // fix
	constexpr uint64_t CEntityFreezing_m_flFrozen = 0x396012bc88391a0f; // fix
	constexpr uint64_t CEntityFreezing_m_flFrozenPerHitbox = 0xa1e6a215c2461559; // fix
	constexpr uint64_t CEntityFreezing_m_vFreezingOrigin = 0x1179f885b7c80f1e; // fix
	constexpr uint64_t CEntityParticleTrail_m_Info = 0x479fc717f9885cba; // fix
	constexpr uint64_t CEntityParticleTrail_m_flEndSize = 0xb452049a4aefae6; // fix
	constexpr uint64_t CEntityParticleTrail_m_flLifetime = 0xf4963cda3c44dbe1; // fix
	constexpr uint64_t CEntityParticleTrail_m_flStartSize = 0xe767e5da0de86f49; // fix
	constexpr uint64_t CEntityParticleTrail_m_hConstraintEntity = 0xab9814baa003a3ef; // fix
	constexpr uint64_t CEntityParticleTrail_m_iMaterialName = 0x8a8f52253c2e2be8; // fix
	constexpr uint64_t CEnvAmbientLight_m_vecColor = 0x709b9b73cb6c28ac; // fix
	constexpr uint64_t CEnvDOFController_m_bDOFEnabled = 0xd605ee12adc89b96; // fix
	constexpr uint64_t CEnvDOFController_m_flFarBlurDepth = 0x53dd9675ac57126d; // fix
	constexpr uint64_t CEnvDOFController_m_flFarBlurRadius = 0xdc50b161930401c8; // fix
	constexpr uint64_t CEnvDOFController_m_flFarFocusDepth = 0x8e923b17db6159df; // fix
	constexpr uint64_t CEnvDOFController_m_flNearBlurDepth = 0xf0a2508cfd0803f9; // fix
	constexpr uint64_t CEnvDOFController_m_flNearBlurRadius = 0xfff688d709b776ee; // fix
	constexpr uint64_t CEnvDOFController_m_flNearFocusDepth = 0xf6266739e843d23b; // fix
	constexpr uint64_t CEnvDetailController_m_flFadeEndDist = 0xbd644940455dbb3c; // fix
	constexpr uint64_t CEnvDetailController_m_flFadeStartDist = 0x5997aa39d6f37f02; // fix
	constexpr uint64_t CEnvGasCanister_m_bDoImpactEffects = 0x54ba4722087cd811; // fix
	constexpr uint64_t CEnvGasCanister_m_bInSkybox = 0x20fa5429f3584b9; // fix
	constexpr uint64_t CEnvGasCanister_m_bLanded = 0xf22f00125da58e8a; // fix
	constexpr uint64_t CEnvGasCanister_m_bLaunchedFromWithinWorld = 0x109c8838d5c17163; // fix
	constexpr uint64_t CEnvGasCanister_m_flFlightSpeed = 0xced38d31f51260c9; // fix
	constexpr uint64_t CEnvGasCanister_m_flFlightTime = 0xdf3997a9c4b61cb3; // fix
	constexpr uint64_t CEnvGasCanister_m_flHorizSpeed = 0x636326001aec07c7; // fix
	constexpr uint64_t CEnvGasCanister_m_flInitialZSpeed = 0xa294f40570e3d166; // fix
	constexpr uint64_t CEnvGasCanister_m_flLaunchTime = 0x3e49133ef8ac7633; // fix
	constexpr uint64_t CEnvGasCanister_m_flSkyboxScale = 0xe6faeb30c6203bff; // fix
	constexpr uint64_t CEnvGasCanister_m_flWorldEnterTime = 0xb6c285692cc21ae1; // fix
	constexpr uint64_t CEnvGasCanister_m_flZAcceleration = 0xf159f2ddb20a31; // fix
	constexpr uint64_t CEnvGasCanister_m_hSkyboxCopy = 0x30fb65eabb701bbc; // fix
	constexpr uint64_t CEnvGasCanister_m_nMyZoneIndex = 0xd6c2f96d8b2c9344; // fix
	constexpr uint64_t CEnvGasCanister_m_vecDirection = 0x1c58e8c6996eafc2; // fix
	constexpr uint64_t CEnvGasCanister_m_vecEnterWorldPosition = 0x6c894ad9543d5ff3; // fix
	constexpr uint64_t CEnvGasCanister_m_vecImpactPosition = 0xd97c7d3729a3e7c6; // fix
	constexpr uint64_t CEnvGasCanister_m_vecOrigin = 0xf399034ea4a5ec2d; // fix
	constexpr uint64_t CEnvGasCanister_m_vecOrigin_2_ = 0x439c9e493a16fd96; // fix
	constexpr uint64_t CEnvGasCanister_m_vecParabolaDirection = 0xb1bae97ccad8a118; // fix
	constexpr uint64_t CEnvGasCanister_m_vecSkyboxOrigin = 0x94795e54671a7e2d; // fix
	constexpr uint64_t CEnvGasCanister_m_vecStartAngles = 0x8688bee27da0bdd; // fix
	constexpr uint64_t CEnvGasCanister_m_vecStartPosition = 0x15f1a7f81b38c63d; // fix
	constexpr uint64_t CEnvParticleScript_m_flSequenceScale = 0x29c0676eded8ce93; // fix
	constexpr uint64_t CEnvProjectedTexture_m_LightColor = 0xbe476ce6941af0c0; // fix
	constexpr uint64_t CEnvProjectedTexture_m_SpotlightTextureName = 0xe8c063c013392892; // fix
	constexpr uint64_t CEnvProjectedTexture_m_bAlwaysUpdate = 0xe778854259ee55a2; // fix
	constexpr uint64_t CEnvProjectedTexture_m_bCameraSpace = 0xf184c23c8bd9ad68; // fix
	constexpr uint64_t CEnvProjectedTexture_m_bEnableShadows = 0x166fe40266757f3b; // fix
	constexpr uint64_t CEnvProjectedTexture_m_bLightOnlyTarget = 0x3c963ff3c382f2f9; // fix
	constexpr uint64_t CEnvProjectedTexture_m_bLightWorld = 0xd47c9b5f5fc22578; // fix
	constexpr uint64_t CEnvProjectedTexture_m_bSimpleProjection = 0x26d8c009e9b74115; // fix
	constexpr uint64_t CEnvProjectedTexture_m_bState = 0x2e471ecb13ba12c2; // fix
	constexpr uint64_t CEnvProjectedTexture_m_flAmbient = 0xfc1084d23a67b66b; // fix
	constexpr uint64_t CEnvProjectedTexture_m_flBrightnessScale = 0x917afb7c3ef74583; // fix
	constexpr uint64_t CEnvProjectedTexture_m_flColorTransitionTime = 0x448b8845ae7e22db; // fix
	constexpr uint64_t CEnvProjectedTexture_m_flFarZ = 0x7ab47e91886c9f38; // fix
	constexpr uint64_t CEnvProjectedTexture_m_flLightFOV = 0x755d1a005dde3841; // fix
	constexpr uint64_t CEnvProjectedTexture_m_flNearZ = 0x416ffe9869d4d717; // fix
	constexpr uint64_t CEnvProjectedTexture_m_flProjectionSize = 0xc4cbb210d4f8dc94; // fix
	constexpr uint64_t CEnvProjectedTexture_m_flRotation = 0x53ec849b6aec55ec; // fix
	constexpr uint64_t CEnvProjectedTexture_m_hTargetEntity = 0xaa19c58ee456169e; // fix
	constexpr uint64_t CEnvProjectedTexture_m_iStyle = 0x8c8e499205bb259b; // fix
	constexpr uint64_t CEnvProjectedTexture_m_nShadowQuality = 0x6ab17803531e5159; // fix
	constexpr uint64_t CEnvProjectedTexture_m_nSpotlightTextureFrame = 0xc73d39f0c303379f; // fix
	constexpr uint64_t CEnvQuadraticBeam_m_controlPosition = 0x25930b16130eacf7; // fix
	constexpr uint64_t CEnvQuadraticBeam_m_flWidth = 0x4d742eccbc81af25; // fix
	constexpr uint64_t CEnvQuadraticBeam_m_scrollRate = 0x1aac7328324a68c; // fix
	constexpr uint64_t CEnvQuadraticBeam_m_targetPosition = 0xf79b3cf26c713705; // fix
	constexpr uint64_t CEnvScreenEffect_m_flDuration = 0x56fd2d6787f43396; // fix
	constexpr uint64_t CEnvScreenEffect_m_nType = 0x1daa23c7bbcc0d98; // fix
	constexpr uint64_t CEnvScreenOverlay_m_bIsActive = 0x3d2492567e7b9264; // fix
	constexpr uint64_t CEnvScreenOverlay_m_flOverlayTimes_0_ = 0xcc1ae2217ca21ec6; // fix
	constexpr uint64_t CEnvScreenOverlay_m_flStartTime = 0xe6a47e1d81f2d7ba; // fix
	constexpr uint64_t CEnvScreenOverlay_m_iDesiredOverlay = 0x123cd8d81cc208b7; // fix
	constexpr uint64_t CEnvScreenOverlay_m_iszOverlayNames_0_ = 0x6f5ac55550a2d21f; // fix
	constexpr uint64_t CEnvTonemapController_m_bUseCustomAutoExposureMax = 0x79c05c3fa7a441d8; // fix
	constexpr uint64_t CEnvTonemapController_m_bUseCustomAutoExposureMin = 0x2b8c699138932347; // fix
	constexpr uint64_t CEnvTonemapController_m_bUseCustomBloomScale = 0xc92c383c933de87; // fix
	constexpr uint64_t CEnvTonemapController_m_flBloomExponent = 0xa146c3850be453c4; // fix
	constexpr uint64_t CEnvTonemapController_m_flBloomSaturation = 0x43cb3c527f4d119; // fix
	constexpr uint64_t CEnvTonemapController_m_flCustomAutoExposureMax = 0xcb93ca009b63f940; // fix
	constexpr uint64_t CEnvTonemapController_m_flCustomAutoExposureMin = 0xab87ce33e48805fb; // fix
	constexpr uint64_t CEnvTonemapController_m_flCustomBloomScale = 0x4993839982dc8db1; // fix
	constexpr uint64_t CEnvTonemapController_m_flCustomBloomScaleMinimum = 0xc2f015caf7b1ff60; // fix
	constexpr uint64_t CEnvTonemapController_m_flTonemapMinAvgLum = 0xf40a78cd11ac4787; // fix
	constexpr uint64_t CEnvTonemapController_m_flTonemapPercentBrightPixels = 0x33c3ab28d53ad934; // fix
	constexpr uint64_t CEnvTonemapController_m_flTonemapPercentTarget = 0xf0a0d4752154a318; // fix
	constexpr uint64_t CEnvTonemapController_m_flTonemapRate = 0xfc21baa7b461953f; // fix
	constexpr uint64_t CEnvWind_m_EnvWindShared = 0xbc1693a87f0447ff; // fix
	constexpr uint64_t CEnvWind_m_flGustDuration = 0x8a0d5ed0d1c3745d; // fix
	constexpr uint64_t CEnvWind_m_flInitialWindSpeed = 0x5939775fb18e9e9e; // fix
	constexpr uint64_t CEnvWind_m_flMaxGustDelay = 0xdff181103e988269; // fix
	constexpr uint64_t CEnvWind_m_flMinGustDelay = 0xcffc49ca13874f8f; // fix
	constexpr uint64_t CEnvWind_m_flStartTime = 0xe8da7d8cbf793f89; // fix
	constexpr uint64_t CEnvWind_m_iGustDirChange = 0x5f4d1f439f30eecc; // fix
	constexpr uint64_t CEnvWind_m_iInitialWindDir = 0x884e4dc6d7ceebfd; // fix
	constexpr uint64_t CEnvWind_m_iMaxGust = 0x48048c9c8801e1c5; // fix
	constexpr uint64_t CEnvWind_m_iMaxWind = 0x67913e2525d5e411; // fix
	constexpr uint64_t CEnvWind_m_iMinGust = 0x81ed26f562e52d7c; // fix
	constexpr uint64_t CEnvWind_m_iMinWind = 0x367a53a32522b346; // fix
	constexpr uint64_t CEnvWind_m_iWindSeed = 0x9de66c33a1ea5e3f; // fix
	constexpr uint64_t CFEPlayerDecal_m_flCreationTime = 0x12447019f10fe1ef; // fix
	constexpr uint64_t CFEPlayerDecal_m_nEntity = 0xea7f7959f0cd4ab4; // fix
	constexpr uint64_t CFEPlayerDecal_m_nHitbox = 0x5c0eeac4ab72a8ea; // fix
	constexpr uint64_t CFEPlayerDecal_m_nPlayer = 0x58089ce60f894135; // fix
	constexpr uint64_t CFEPlayerDecal_m_nTintID = 0x7f7aed1eafd29df8; // fix
	constexpr uint64_t CFEPlayerDecal_m_nUniqueID = 0xc0807cd8dc4e929c; // fix
	constexpr uint64_t CFEPlayerDecal_m_nVersion = 0xd41fac5ec382f7ba; // fix
	constexpr uint64_t CFEPlayerDecal_m_rtGcTime = 0x7c819a3052db94e9; // fix
	constexpr uint64_t CFEPlayerDecal_m_ubSignature = 0xf60dfd288aff6308; // fix
	constexpr uint64_t CFEPlayerDecal_m_unAccountID = 0x986c5e28dc83ae70; // fix
	constexpr uint64_t CFEPlayerDecal_m_unTraceID = 0x66a15004075b8e99; // fix
	constexpr uint64_t CFEPlayerDecal_m_vecEndPos = 0xcb818e5751453c7e; // fix
	constexpr uint64_t CFEPlayerDecal_m_vecNormal = 0xabdb46ed51e2cbdb; // fix
	constexpr uint64_t CFEPlayerDecal_m_vecRight = 0x3d034adb4e7c7fef; // fix
	constexpr uint64_t CFEPlayerDecal_m_vecStart = 0x1c0e94acfa8666ec; // fix
	constexpr uint64_t CFireSmoke_m_flScale = 0xd8f099482fdf8ce; // fix
	constexpr uint64_t CFireSmoke_m_flScaleTime = 0xff707af45c31053e; // fix
	constexpr uint64_t CFireSmoke_m_flStartScale = 0x8c69030f70b4a5b7; // fix
	constexpr uint64_t CFireSmoke_m_nFlags = 0x56aa80ad39e52a58; // fix
	constexpr uint64_t CFireSmoke_m_nFlameFromAboveModelIndex = 0xede57c511e653d8f; // fix
	constexpr uint64_t CFireSmoke_m_nFlameModelIndex = 0xb179c3909799f06a; // fix
	constexpr uint64_t CFireTrail_m_flLifetime = 0x987a90853cfb987b; // fix
	constexpr uint64_t CFireTrail_m_nAttachment = 0x6881a66a591533c1; // fix
	constexpr uint64_t CFish_m_angle = 0xd1f873432459b3fb; // fix
	constexpr uint64_t CFish_m_lifeState = 0xa94cf7bd3e64e32b; // fix
	constexpr uint64_t CFish_m_nModelIndex = 0x1c18b32c172c0da1; // fix
	constexpr uint64_t CFish_m_poolOrigin = 0xe8210ca6a23a3d47; // fix
	constexpr uint64_t CFish_m_waterLevel = 0x391ff21a02675e2; // fix
	constexpr uint64_t CFish_m_x = 0xbe0dae58dff6d09c; // fix
	constexpr uint64_t CFish_m_y = 0x366c12dc59f32b05; // fix
	constexpr uint64_t CFish_m_z = 0x1db701a2ae54b110; // fix
	constexpr uint64_t CFists_m_bPlayingUninterruptableAct = 0x887e9bcf087242b9; // fix
	constexpr uint64_t CFogController_m_fog_HDRColorScale = 0x703faf8bbdaf0d7f; // fix
	constexpr uint64_t CFogController_m_fog_ZoomFogScale = 0x6f834a18d82e207a; // fix
	constexpr uint64_t CFogController_m_fog_blend = 0x3bcd00b3bfc8acc0; // fix
	constexpr uint64_t CFogController_m_fog_colorPrimary = 0x29fda88c9090e38b; // fix
	constexpr uint64_t CFogController_m_fog_colorPrimaryLerpTo = 0xe192ff763578e841; // fix
	constexpr uint64_t CFogController_m_fog_colorSecondary = 0x59b8b7230f83b625; // fix
	constexpr uint64_t CFogController_m_fog_colorSecondaryLerpTo = 0xf00c8075194c038a; // fix
	constexpr uint64_t CFogController_m_fog_dirPrimary = 0x59f752d53ee6b2db; // fix
	constexpr uint64_t CFogController_m_fog_duration = 0x21746703ec425a5d; // fix
	constexpr uint64_t CFogController_m_fog_enable = 0x92361fb92241d9d9; // fix
	constexpr uint64_t CFogController_m_fog_end = 0x27c4d80d833a2ee5; // fix
	constexpr uint64_t CFogController_m_fog_endLerpTo = 0xc1f0a50cc05ffe6b; // fix
	constexpr uint64_t CFogController_m_fog_farz = 0xc600c489faebc21d; // fix
	constexpr uint64_t CFogController_m_fog_lerptime = 0xb498d71c27dc971; // fix
	constexpr uint64_t CFogController_m_fog_maxdensity = 0xb8201d6e59861e25; // fix
	constexpr uint64_t CFogController_m_fog_maxdensityLerpTo = 0xa295fdc619deff0; // fix
	constexpr uint64_t CFogController_m_fog_start = 0x2d94ea95b1c7ff76; // fix
	constexpr uint64_t CFogController_m_fog_startLerpTo = 0xe6a64bc559e93677; // fix
	constexpr uint64_t CFootstepControl_m_destination = 0x2c5209c882410e33; // fix
	constexpr uint64_t CFootstepControl_m_source = 0x9ad1c7e66bf831c1; // fix
	constexpr uint64_t CFuncAreaPortalWindow_m_flFadeDist = 0xdf036180902eabdf; // fix
	constexpr uint64_t CFuncAreaPortalWindow_m_flFadeStartDist = 0xbccc9116a87a9570; // fix
	constexpr uint64_t CFuncAreaPortalWindow_m_flTranslucencyLimit = 0x2ec738d0dd63f530; // fix
	constexpr uint64_t CFuncAreaPortalWindow_m_iBackgroundModelIndex = 0x680eabb1dfc6f7b7; // fix
	constexpr uint64_t CFuncConveyor_m_flConveyorSpeed = 0x5b47eb9bc8369639; // fix
	constexpr uint64_t CFuncLadder_m_bFakeLadder = 0x1d2966f485908388; // fix
	constexpr uint64_t CFuncLadder_m_vecLadderDir = 0xa3be732176800431; // fix
	constexpr uint64_t CFuncLadder_m_vecPlayerMountPositionBottom = 0x2b1e2adf23032b8b; // fix
	constexpr uint64_t CFuncLadder_m_vecPlayerMountPositionTop = 0xcc3215963407ca32; // fix
	constexpr uint64_t CFuncMoveLinear_m_fFlags = 0x36bf5f817d845d50; // fix
	constexpr uint64_t CFuncMoveLinear_m_vecVelocity = 0xba394315840511c; // fix
	constexpr uint64_t CFuncOccluder_m_bActive = 0xdcd2f3db4dc241a4; // fix
	constexpr uint64_t CFuncOccluder_m_nOccluderIndex = 0x705b0ba8cce66641; // fix
	constexpr uint64_t CFuncRotating_m_angRotation_0_ = 0x6f0c13c050be8d57; // fix
	constexpr uint64_t CFuncRotating_m_angRotation_1_ = 0x4106f652e3433e33; // fix
	constexpr uint64_t CFuncRotating_m_angRotation_2_ = 0x3cb9b30399bee41c; // fix
	constexpr uint64_t CFuncRotating_m_flSimulationTime = 0xb6d05c00d1bc0911; // fix
	constexpr uint64_t CFuncRotating_m_vecOrigin = 0x883f2eea53adf67f; // fix
	constexpr uint64_t CFuncSmokeVolume_m_Collision = 0x675219f79769b501; // fix
	constexpr uint64_t CFuncSmokeVolume_m_Color1 = 0x4451bb4c660b6ef1; // fix
	constexpr uint64_t CFuncSmokeVolume_m_Color2 = 0x56d2e012f578a8f9; // fix
	constexpr uint64_t CFuncSmokeVolume_m_Density = 0x19b9abca4674dedf; // fix
	constexpr uint64_t CFuncSmokeVolume_m_DensityRampSpeed = 0xc14f76b9328a719d; // fix
	constexpr uint64_t CFuncSmokeVolume_m_MaterialName = 0xcd867fa65b3e1314; // fix
	constexpr uint64_t CFuncSmokeVolume_m_MovementSpeed = 0x27625aecc7f7bcc7; // fix
	constexpr uint64_t CFuncSmokeVolume_m_ParticleDrawWidth = 0x7b4cfb92d176d179; // fix
	constexpr uint64_t CFuncSmokeVolume_m_ParticleSpacingDistance = 0x3b2248d4510d8c5a; // fix
	constexpr uint64_t CFuncSmokeVolume_m_RotationSpeed = 0x5643640686df1247; // fix
	constexpr uint64_t CFuncSmokeVolume_m_maxDrawDistance = 0xd20cf4528bda24d3; // fix
	constexpr uint64_t CFuncSmokeVolume_m_nSolidType = 0xb242e4d61e9e169b; // fix
	constexpr uint64_t CFuncSmokeVolume_m_nSurroundType = 0xb3153560a6a46645; // fix
	constexpr uint64_t CFuncSmokeVolume_m_spawnflags = 0x60e78ee99f905683; // fix
	constexpr uint64_t CFuncSmokeVolume_m_triggerBloat = 0xc703020bc6c3cd2d; // fix
	constexpr uint64_t CFuncSmokeVolume_m_usSolidFlags = 0x61a0064477781e5a; // fix
	constexpr uint64_t CFuncSmokeVolume_m_vecMaxs = 0x4e3a220feac34c3; // fix
	constexpr uint64_t CFuncSmokeVolume_m_vecMins = 0x9ddb2bec98d9eaae; // fix
	constexpr uint64_t CFuncSmokeVolume_m_vecSpecifiedSurroundingMaxs = 0x7059937920fd0ceb; // fix
	constexpr uint64_t CFuncSmokeVolume_m_vecSpecifiedSurroundingMins = 0xf7cb5cc4f1c9ae3a; // fix
	constexpr uint64_t CFunc_Dust_m_Collision = 0xe1882e6cc380cee8; // fix
	constexpr uint64_t CFunc_Dust_m_Color = 0x126ba8fb50c28deb; // fix
	constexpr uint64_t CFunc_Dust_m_DistMax = 0xe5a61a76af1e859d; // fix
	constexpr uint64_t CFunc_Dust_m_DustFlags = 0xcb12ae02ec42262c; // fix
	constexpr uint64_t CFunc_Dust_m_FallSpeed = 0xd421d09b1310faec; // fix
	constexpr uint64_t CFunc_Dust_m_LifetimeMax = 0x93fa79a621360a85; // fix
	constexpr uint64_t CFunc_Dust_m_LifetimeMin = 0x983a19bdc82139f1; // fix
	constexpr uint64_t CFunc_Dust_m_SpawnRate = 0x84e6fe943e6a0e4; // fix
	constexpr uint64_t CFunc_Dust_m_SpeedMax = 0xaacbce0c0fd232c9; // fix
	constexpr uint64_t CFunc_Dust_m_bAffectedByWind = 0xd46dcf2bec212c81; // fix
	constexpr uint64_t CFunc_Dust_m_flSizeMax = 0x6c067de6caba053b; // fix
	constexpr uint64_t CFunc_Dust_m_flSizeMin = 0xd608a56d7e7cdb0d; // fix
	constexpr uint64_t CFunc_Dust_m_nModelIndex = 0x68943cf02a6a2e7c; // fix
	constexpr uint64_t CFunc_Dust_m_nSolidType = 0x89d14f8871fdda75; // fix
	constexpr uint64_t CFunc_Dust_m_nSurroundType = 0xd8a9fa88e9c59791; // fix
	constexpr uint64_t CFunc_Dust_m_triggerBloat = 0xbdc5055177c6c1c0; // fix
	constexpr uint64_t CFunc_Dust_m_usSolidFlags = 0xf6fe532f9a1eab14; // fix
	constexpr uint64_t CFunc_Dust_m_vecMaxs = 0xe1051c0654e5ed6a; // fix
	constexpr uint64_t CFunc_Dust_m_vecMins = 0x7058a191c658dbf2; // fix
	constexpr uint64_t CFunc_Dust_m_vecSpecifiedSurroundingMaxs = 0x38b74f2c64758a98; // fix
	constexpr uint64_t CFunc_Dust_m_vecSpecifiedSurroundingMins = 0x9cf795df92b08cac; // fix
	constexpr uint64_t CFunc_LOD_m_nDisappearMaxDist = 0x5e861c6f50c14ab1; // fix
	constexpr uint64_t CFunc_LOD_m_nDisappearMinDist = 0x3ea2e96e8ca367ee; // fix
	constexpr uint64_t CGrassBurn_m_flGrassBurnClearTime = 0xa33b8a643d9355ab; // fix
	constexpr uint64_t CHandleTest_m_Handle = 0xe207302943631634; // fix
	constexpr uint64_t CHandleTest_m_bSendHandle = 0xf561f6399edf480e; // fix
	constexpr uint64_t CHostage_m_fFlags = 0xa7480e85963e0b8c; // fix
	constexpr uint64_t CHostage_m_flDropStartTime = 0xd4f9756a8098c42a; // fix
	constexpr uint64_t CHostage_m_flGrabSuccessTime = 0x939a0d05fb9ce7ef; // fix
	constexpr uint64_t CHostage_m_flRescueStartTime = 0x484458d3b4bf33ab; // fix
	constexpr uint64_t CHostage_m_iHealth = 0x2145101448bba2fa; // fix
	constexpr uint64_t CHostage_m_iMaxHealth = 0xaf2f9ebc6b701da6; // fix
	constexpr uint64_t CHostage_m_isRescued = 0x1bd8a30013e1e0be; // fix
	constexpr uint64_t CHostage_m_jumpedThisFrame = 0x82d1b2d1cd1dd3c0; // fix
	constexpr uint64_t CHostage_m_leader = 0xc9b7e68169253ea3; // fix
	constexpr uint64_t CHostage_m_lifeState = 0x2fd16c320a8decd0; // fix
	constexpr uint64_t CHostage_m_nHostageState = 0xa99974335b38c6a7; // fix
	constexpr uint64_t CHostage_m_vel = 0xc45b4bee9e5baf87; // fix
	constexpr uint64_t CInferno_m_bFireIsBurning = 0x12a6e8be7eaba2bf; // fix
	constexpr uint64_t CInferno_m_fireCount = 0x2a80b2ece4ac96a0; // fix
	constexpr uint64_t CInferno_m_fireXDelta = 0xfba3ba2ae92b49ff; // fix
	constexpr uint64_t CInferno_m_fireYDelta = 0xd9e750d2f02fc1e3; // fix
	constexpr uint64_t CInferno_m_fireZDelta = 0x7f98e5034afa50b4; // fix
	constexpr uint64_t CInferno_m_nFireEffectTickBegin = 0xf9c30ed0d96d841b; // fix
	constexpr uint64_t CInfoMapRegion_m_flRadius = 0x94d4036eb591b037; // fix
	constexpr uint64_t CInfoMapRegion_m_szLocToken = 0xcb686dc8c52b7b16; // fix
	constexpr uint64_t CInfoOverlayAccessor_m_iOverlayID = 0x4594dc29a2941e19; // fix
	constexpr uint64_t CInfoOverlayAccessor_m_iTextureFrameIndex = 0xaa8e7abfe519f918; // fix
	constexpr uint64_t CItemAssaultSuitUseable_m_bIsHeavyAssaultSuit = 0x18a1a84e53ed1834; // fix
	constexpr uint64_t CItemAssaultSuitUseable_m_nArmorValue = 0x55293a744feee756; // fix
	constexpr uint64_t CItemDogtags_m_KillingPlayer = 0x5f2fad99f1a37663; // fix
	constexpr uint64_t CItemDogtags_m_OwningPlayer = 0xa6a1daa531508c09; // fix
	constexpr uint64_t CItem_m_bShouldGlow = 0x9807f03890992fcd; // fix
	constexpr uint64_t CLightGlow_m_angRotation = 0x42898648ceb03b87; // fix
	constexpr uint64_t CLightGlow_m_clrRender = 0x13bda46b49050602; // fix
	constexpr uint64_t CLightGlow_m_flGlowProxySize = 0x98abaf18ab6dc7c1; // fix
	constexpr uint64_t CLightGlow_m_nHorizontalSize = 0xcc221962373b24ab; // fix
	constexpr uint64_t CLightGlow_m_nMaxDist = 0x5e72a2a11d05e1e5; // fix
	constexpr uint64_t CLightGlow_m_nMinDist = 0xa695ef7e217a29cf; // fix
	constexpr uint64_t CLightGlow_m_nOuterMaxDist = 0x93bb190793691461; // fix
	constexpr uint64_t CLightGlow_m_nVerticalSize = 0x784ecf323dba2fa2; // fix
	constexpr uint64_t CLightGlow_m_spawnflags = 0x8ec9182612325a85; // fix
	constexpr uint64_t CLightGlow_m_vecOrigin = 0x12687195fab937bc; // fix
	constexpr uint64_t CLightGlow_moveparent = 0xf4b3b7b797bb9ac6; // fix
	constexpr uint64_t CMapVetoPickController_m_nAccountIDs = 0x11c4098590e183b0; // fix
	constexpr uint64_t CMapVetoPickController_m_nCurrentPhase = 0x897ed7cb0123da96; // fix
	constexpr uint64_t CMapVetoPickController_m_nDraftType = 0x36b2e0909359f62a; // fix
	constexpr uint64_t CMapVetoPickController_m_nMapId0 = 0x8176db41b490d830; // fix
	constexpr uint64_t CMapVetoPickController_m_nMapId1 = 0xc759fd1c225521b; // fix
	constexpr uint64_t CMapVetoPickController_m_nMapId2 = 0xa29d2210ca309519; // fix
	constexpr uint64_t CMapVetoPickController_m_nMapId3 = 0xf18498ad5f4445fe; // fix
	constexpr uint64_t CMapVetoPickController_m_nMapId4 = 0x9d28dd0934592f6b; // fix
	constexpr uint64_t CMapVetoPickController_m_nMapId5 = 0x1ea38ca0efec3c85; // fix
	constexpr uint64_t CMapVetoPickController_m_nPhaseDurationTicks = 0x699e46fb63e13d30; // fix
	constexpr uint64_t CMapVetoPickController_m_nPhaseStartTick = 0xfd87f83288f9e43f; // fix
	constexpr uint64_t CMapVetoPickController_m_nStartingSide0 = 0x410bcd41909a3f53; // fix
	constexpr uint64_t CMapVetoPickController_m_nTeamWinningCoinToss = 0x2140b2f13f477d24; // fix
	constexpr uint64_t CMapVetoPickController_m_nTeamWithFirstChoice = 0x709a2ed0fd2f1ab7; // fix
	constexpr uint64_t CMapVetoPickController_m_nVoteMapIdsList = 0x7f7231357a15215f; // fix
	constexpr uint64_t CMaterialModifyControl_m_bFloatLerpWrap = 0xe8a394322363a413; // fix
	constexpr uint64_t CMaterialModifyControl_m_bNewAnimCommandsSemaphore = 0xc96eeb209c7ef5b6; // fix
	constexpr uint64_t CMaterialModifyControl_m_bWrap = 0xc487d2a3b042f99e; // fix
	constexpr uint64_t CMaterialModifyControl_m_flFloatLerpEndValue = 0x5094a51f58dd7790; // fix
	constexpr uint64_t CMaterialModifyControl_m_flFloatLerpStartValue = 0x87be91a51d5268ca; // fix
	constexpr uint64_t CMaterialModifyControl_m_flFloatLerpTransitionTime = 0x293cba2b9dda2d5f; // fix
	constexpr uint64_t CMaterialModifyControl_m_flFramerate = 0x73265f96ee43614f; // fix
	constexpr uint64_t CMaterialModifyControl_m_iFrameEnd = 0x874cdb78d1902e3f; // fix
	constexpr uint64_t CMaterialModifyControl_m_iFrameStart = 0x72c6e59d34a9c824; // fix
	constexpr uint64_t CMaterialModifyControl_m_nModifyMode = 0x70d65420468c1fc; // fix
	constexpr uint64_t CMaterialModifyControl_m_szMaterialName = 0xf2d530cfd71127d9; // fix
	constexpr uint64_t CMaterialModifyControl_m_szMaterialVar = 0x311c320964b78db3; // fix
	constexpr uint64_t CMaterialModifyControl_m_szMaterialVarValue = 0x23ad7c21ed70e94; // fix
	constexpr uint64_t CMelee_m_flThrowAt = 0x8de28266371e24ad; // fix
	constexpr uint64_t CMolotovProjectile_m_bIsIncGrenade = 0xf57f0922b56f9e1d; // fix
	constexpr uint64_t CMovieDisplay_m_bEnabled = 0xd1d412082c1179de; // fix
	constexpr uint64_t CMovieDisplay_m_bForcedSlave = 0x9b2c3eb7b1d3a1b3; // fix
	constexpr uint64_t CMovieDisplay_m_bLooping = 0xc8c18865bebc03d8; // fix
	constexpr uint64_t CMovieDisplay_m_bStretchToFill = 0x2faa9967459a303d; // fix
	constexpr uint64_t CMovieDisplay_m_bUseCustomUVs = 0x7652fdc47bbb975b; // fix
	constexpr uint64_t CMovieDisplay_m_flUMax = 0x2dbc6c92d2b70de6; // fix
	constexpr uint64_t CMovieDisplay_m_flUMin = 0x2f6b3e1f2f435076; // fix
	constexpr uint64_t CMovieDisplay_m_flVMax = 0xd185a0216c09d311; // fix
	constexpr uint64_t CMovieDisplay_m_flVMin = 0x3a7bf8394e41d441; // fix
	constexpr uint64_t CMovieDisplay_m_szGroupName = 0x6e6142fc20719f5b; // fix
	constexpr uint64_t CMovieDisplay_m_szMovieFilename = 0xa35e5385cdf62d1f; // fix
	constexpr uint64_t CParadropChopper_m_hCallingPlayer = 0x13cfe58697d6a842; // fix
	constexpr uint64_t CParadropChopper_m_vecOrigin = 0x882c0a59d9d1e89b; // fix
	constexpr uint64_t CParadropChopper_m_vecOrigin_2_ = 0xf7f8e844bf3f7a81; // fix
	constexpr uint64_t CParticleFire_m_vDirection = 0xb68f4a607a8b33ff; // fix
	constexpr uint64_t CParticleFire_m_vOrigin = 0x88985d9c57f0f0e5; // fix
	constexpr uint64_t CParticlePerformanceMonitor_m_bDisplayPerf = 0x392318d2c4022948; // fix
	constexpr uint64_t CParticlePerformanceMonitor_m_bMeasurePerf = 0x1ed4811fd21410d2; // fix
	constexpr uint64_t CParticleSystem_m_angRotation = 0x36f087332e9aafad; // fix
	constexpr uint64_t CParticleSystem_m_bActive = 0xc3743586e7f7462f; // fix
	constexpr uint64_t CParticleSystem_m_fEffects = 0x11a914f32cf8bdc1; // fix
	constexpr uint64_t CParticleSystem_m_flStartTime = 0x944abd9f46689469; // fix
	constexpr uint64_t CParticleSystem_m_hControlPointEnts = 0x135c6eb427331a5c; // fix
	constexpr uint64_t CParticleSystem_m_hOwnerEntity = 0xcb7c1f9d975e7afc; // fix
	constexpr uint64_t CParticleSystem_m_iControlPointParents = 0xb6d958f38c01233c; // fix
	constexpr uint64_t CParticleSystem_m_iEffectIndex = 0xa7fb895a15d45c3e; // fix
	constexpr uint64_t CParticleSystem_m_iParentAttachment = 0xf697e36a978123a2; // fix
	constexpr uint64_t CParticleSystem_m_iServerControlPointAssignments = 0x54df283e4611d7d2; // fix
	constexpr uint64_t CParticleSystem_m_nStopType = 0x353c8d8370dead8c; // fix
	constexpr uint64_t CParticleSystem_m_szSnapshotFileName = 0x257a34508e3cbccd; // fix
	constexpr uint64_t CParticleSystem_m_vServerControlPoints = 0xd28105a2e0876ec3; // fix
	constexpr uint64_t CParticleSystem_m_vecOrigin = 0x8eab67a7267f7090; // fix
	constexpr uint64_t CParticleSystem_moveparent = 0xe074d2a8cd464435; // fix
	constexpr uint64_t CPhysBoxMultiplayer_m_fMass = 0xed434e02bcadc52e; // fix
	constexpr uint64_t CPhysBoxMultiplayer_m_iPhysicsMode = 0x3f94bf23e0a27c46; // fix
	constexpr uint64_t CPhysBox_m_mass = 0xc3c00c817f35511; // fix
	constexpr uint64_t CPhysPropLootCrate_m_bRenderInPSPM = 0xa338d6ea9595866e; // fix
	constexpr uint64_t CPhysPropLootCrate_m_bRenderInTablet = 0xb47a1e0d31f51666; // fix
	constexpr uint64_t CPhysPropLootCrate_m_iHealth = 0x3312d6bd82090c2d; // fix
	constexpr uint64_t CPhysPropLootCrate_m_iMaxHealth = 0xa393df0b6c0d464b; // fix
	constexpr uint64_t CPhysicsPropMultiplayer_m_collisionMaxs = 0x385dfe2763d436ae; // fix
	constexpr uint64_t CPhysicsPropMultiplayer_m_collisionMins = 0xde00c2f913c689ca; // fix
	constexpr uint64_t CPhysicsPropMultiplayer_m_fMass = 0xd82dafd97095e614; // fix
	constexpr uint64_t CPhysicsPropMultiplayer_m_iPhysicsMode = 0x7c74aa3d2a9514d0; // fix
	constexpr uint64_t CPhysicsProp_m_bAwake = 0xb7069e697460a145; // fix
	constexpr uint64_t CPhysicsProp_m_spawnflags = 0xaf0eba6ac673d3b2; // fix
	constexpr uint64_t CPlantedC4_m_bBombDefused = 0xb9df21babce1ec0d; // fix
	constexpr uint64_t CPlantedC4_m_bBombTicking = 0x83d9240d9c54f5e3; // fix
	constexpr uint64_t CPlantedC4_m_flC4Blow = 0x444082d3206fdf51; // fix
	constexpr uint64_t CPlantedC4_m_flDefuseCountDown = 0x78083747fe12f69e; // fix
	constexpr uint64_t CPlantedC4_m_flDefuseLength = 0xfb582689c386b77e; // fix
	constexpr uint64_t CPlantedC4_m_flTimerLength = 0xe6a6f00176586474; // fix
	constexpr uint64_t CPlantedC4_m_hBombDefuser = 0xf75c503ac051b91c; // fix
	constexpr uint64_t CPlantedC4_m_nBombSite = 0xffa5be47ed82bd05; // fix
	constexpr uint64_t CPlasma_m_flScale = 0xd0db4b58467d6c5f; // fix
	constexpr uint64_t CPlasma_m_flScaleTime = 0xfcb19e31b1cf0d0f; // fix
	constexpr uint64_t CPlasma_m_flStartScale = 0x35eac3bc5242feda; // fix
	constexpr uint64_t CPlasma_m_nFlags = 0x78618c8cb7880841; // fix
	constexpr uint64_t CPlasma_m_nGlowModelIndex = 0x5b9bf8188b4dc6b9; // fix
	constexpr uint64_t CPlasma_m_nPlasmaModelIndex = 0x9a528d98da763c9; // fix
	constexpr uint64_t CPlasma_m_nPlasmaModelIndex2 = 0x127183a7527211bf; // fix
	constexpr uint64_t CPlayerPing_m_bUrgent = 0xe2c3e6558a096b12; // fix
	constexpr uint64_t CPlayerPing_m_hPingedEntity = 0xed9f3c378fa798f0; // fix
	constexpr uint64_t CPlayerPing_m_hPlayer = 0x1a05c1f114b26f5d; // fix
	constexpr uint64_t CPlayerPing_m_iType = 0x21e0c2db15e6c312; // fix
	constexpr uint64_t CPlayerPing_m_szPlaceName = 0xbf8aa0e5b6ee469c; // fix
	constexpr uint64_t CPlayerResource_m_bAlive = 0x77798aab5d75eb86; // fix
	constexpr uint64_t CPlayerResource_m_bConnected = 0x9ed808214da6ca85; // fix
	constexpr uint64_t CPlayerResource_m_iAssists = 0x45bcf821a0a3c83b; // fix
	constexpr uint64_t CPlayerResource_m_iCoachingTeam = 0xd135f72040f5ca9f; // fix
	constexpr uint64_t CPlayerResource_m_iDeaths = 0x3eefca39dc39e947; // fix
	constexpr uint64_t CPlayerResource_m_iHealth = 0xc3ac89bc97dc2bfe; // fix
	constexpr uint64_t CPlayerResource_m_iKills = 0xe8ab41f58ca25e1; // fix
	constexpr uint64_t CPlayerResource_m_iPendingTeam = 0xc09fece4846d2f7a; // fix
	constexpr uint64_t CPlayerResource_m_iPing = 0x6f4bc696d20b9414; // fix
	constexpr uint64_t CPlayerResource_m_iTeam = 0x506b72a6a9422f0f; // fix
	constexpr uint64_t CPointCamera_m_FOV = 0x57fa778acfc4a43d; // fix
	constexpr uint64_t CPointCamera_m_FogColor = 0xe0d46a004ecd60a3; // fix
	constexpr uint64_t CPointCamera_m_Resolution = 0xd9354ffe4bc245b3; // fix
	constexpr uint64_t CPointCamera_m_bActive = 0xd4506190e24184d2; // fix
	constexpr uint64_t CPointCamera_m_bFogEnable = 0xe4596a944e4e89c7; // fix
	constexpr uint64_t CPointCamera_m_bUseScreenAspectRatio = 0xe12f9e22fd2ee6db; // fix
	constexpr uint64_t CPointCamera_m_flFogEnd = 0x77242aa6714f4686; // fix
	constexpr uint64_t CPointCamera_m_flFogMaxDensity = 0x67402ebb8b6af488; // fix
	constexpr uint64_t CPointCamera_m_flFogStart = 0x8e196a0d895f5f59; // fix
	constexpr uint64_t CPointCommentaryNode_m_bActive = 0x78ffe6fa446129e8; // fix
	constexpr uint64_t CPointCommentaryNode_m_flStartTime = 0x119c811b40714d7c; // fix
	constexpr uint64_t CPointCommentaryNode_m_hViewPosition = 0x85131d3a864b40b8; // fix
	constexpr uint64_t CPointCommentaryNode_m_iNodeNumber = 0x8746f3102cb9e4c2; // fix
	constexpr uint64_t CPointCommentaryNode_m_iNodeNumberMax = 0x7cf7af85d2b5630d; // fix
	constexpr uint64_t CPointCommentaryNode_m_iszCommentaryFile = 0x20c64fcddcc662f3; // fix
	constexpr uint64_t CPointCommentaryNode_m_iszCommentaryFileNoHDR = 0xec821cfbfd139a1; // fix
	constexpr uint64_t CPointCommentaryNode_m_iszSpeakers = 0x867bf9e8bd62b63e; // fix
	constexpr uint64_t CPointWorldText_m_flTextSize = 0x67ba6b60faa140c; // fix
	constexpr uint64_t CPointWorldText_m_szText = 0x5b88a2b850a51a8a; // fix
	constexpr uint64_t CPointWorldText_m_textColor = 0x7d3b87ee67459586; // fix
	constexpr uint64_t CPoseController_m_bInterpolationWrap = 0xf26739cf03be763; // fix
	constexpr uint64_t CPoseController_m_bPoseValueParity = 0xaee835f657f321c1; // fix
	constexpr uint64_t CPoseController_m_chPoseIndex = 0x8b8e1db1de1a71c4; // fix
	constexpr uint64_t CPoseController_m_fCycleFrequency = 0x3c1d4ffc6b0d6478; // fix
	constexpr uint64_t CPoseController_m_fFModAmplitude = 0x84b0893205995d48; // fix
	constexpr uint64_t CPoseController_m_fFModRate = 0x38157367cd01c781; // fix
	constexpr uint64_t CPoseController_m_fFModTimeOffset = 0x32b48367a6d56879; // fix
	constexpr uint64_t CPoseController_m_fInterpolationTime = 0xd40e3b3596355459; // fix
	constexpr uint64_t CPoseController_m_fPoseValue = 0x1c314b51e0f7da0e; // fix
	constexpr uint64_t CPoseController_m_hProps = 0xa668e5efdda53abe; // fix
	constexpr uint64_t CPoseController_m_nFModType = 0x831d022d7727b3f5; // fix
	constexpr uint64_t CPostProcessController_m_bMaster = 0x1e9e8efbb1aff941; // fix
	constexpr uint64_t CPostProcessController_m_flPostProcessParameters = 0x68a0c2b069863669; // fix
	constexpr uint64_t CPrecipitation_m_nPrecipType = 0x8cc6c9ff5791b1a0; // fix
	constexpr uint64_t CPropCounter_m_flDisplayValue = 0xb553cce17fe2fb2d; // fix
	constexpr uint64_t CPropJeep_m_bHeadlightIsOn = 0x34cb48f7da055b03; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_bEnterAnimOn = 0xeb440dec44e7995f; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_bExitAnimOn = 0xeeffba6fb59d66da; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_bForceEyesToAttachment = 0x722115576d47a284; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_hPlayer = 0x500c255d4ee74976; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vecEyeExitEndpoint = 0x180cc4f9679fb50e; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_bClampEyeAngles = 0xaed55690b0e3ba51; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flFOV = 0x47ab3ff3874788c5; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveLinear = 0x7fd4f97cc10216e2; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveZero = 0x8996080f9228102e; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flPitchMax = 0x7805a22409761643; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flPitchMin = 0x6b2bc1e8144f2524; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveLinear = 0x18122c22f8e7ef86; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveZero = 0x85b3648c31e62aca; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flYawMax = 0x394099a975549410; // fix
	constexpr uint64_t CPropVehicleChoreoGeneric_m_vehicleView_flYawMin = 0xd853df216bc3fb53; // fix
	constexpr uint64_t CPropVehicleDriveable_m_bEnterAnimOn = 0x33ed9cc3a50e062; // fix
	constexpr uint64_t CPropVehicleDriveable_m_bExitAnimOn = 0x417096f12d40d82f; // fix
	constexpr uint64_t CPropVehicleDriveable_m_bHasGun = 0x9fae514287a41168; // fix
	constexpr uint64_t CPropVehicleDriveable_m_bUnableToFire = 0x96b48d84360d305c; // fix
	constexpr uint64_t CPropVehicleDriveable_m_flThrottle = 0x8926fe78c23e8e3e; // fix
	constexpr uint64_t CPropVehicleDriveable_m_hPlayer = 0x7414334f59036678; // fix
	constexpr uint64_t CPropVehicleDriveable_m_nBoostTimeLeft = 0xf8f6f265953f9478; // fix
	constexpr uint64_t CPropVehicleDriveable_m_nHasBoost = 0xaaf9d8af88aca162; // fix
	constexpr uint64_t CPropVehicleDriveable_m_nRPM = 0x6b17892628e2efad; // fix
	constexpr uint64_t CPropVehicleDriveable_m_nScannerDisabledVehicle = 0xd09507adb7f5afa3; // fix
	constexpr uint64_t CPropVehicleDriveable_m_nScannerDisabledWeapons = 0xc11cec608c8dde45; // fix
	constexpr uint64_t CPropVehicleDriveable_m_nSpeed = 0x4d23d804b4e82910; // fix
	constexpr uint64_t CPropVehicleDriveable_m_vecEyeExitEndpoint = 0x64727b900b4e0deb; // fix
	constexpr uint64_t CPropVehicleDriveable_m_vecGunCrosshair = 0x36b9716248b1cdcc; // fix
	constexpr uint64_t CProp_Hallucination_m_bEnabled = 0x29d84e435f2ea4ef; // fix
	constexpr uint64_t CProp_Hallucination_m_fRechargeTime = 0x522c87f5e9710a19; // fix
	constexpr uint64_t CProp_Hallucination_m_fVisibleTime = 0x83f02405b86306b7; // fix
	constexpr uint64_t CRagdollManager_m_iCurrentMaxRagdollCount = 0x8485a92c5e9067e3; // fix
	constexpr uint64_t CRagdollPropAttached_m_attachmentPointBoneSpace = 0x6ff1cc9521ed005b; // fix
	constexpr uint64_t CRagdollPropAttached_m_attachmentPointRagdollSpace = 0x2e020f5bfc1f1cd0; // fix
	constexpr uint64_t CRagdollPropAttached_m_boneIndexAttached = 0x4b88fd8ada2a8878; // fix
	constexpr uint64_t CRagdollPropAttached_m_ragdollAttachedObjectIndex = 0xba3b86915241560; // fix
	constexpr uint64_t CRagdollProp_m_flBlendWeight = 0xb6f49b1969daf19b; // fix
	constexpr uint64_t CRagdollProp_m_hUnragdoll = 0xc9636feae3039812; // fix
	constexpr uint64_t CRagdollProp_m_nOverlaySequence = 0x8afd7f8a6a07573; // fix
	constexpr uint64_t CRagdollProp_m_ragAngles_0_ = 0xdf06b42a4f08dcef; // fix
	constexpr uint64_t CRagdollProp_m_ragPos_0_ = 0x75bec7ff547fbed4; // fix
	constexpr uint64_t CRopeKeyframe_m_RopeFlags = 0x806d448d0a052bae; // fix
	constexpr uint64_t CRopeKeyframe_m_RopeLength = 0xb1b5a987b9b8e4d7; // fix
	constexpr uint64_t CRopeKeyframe_m_Slack = 0xb34cbaf05ce864b7; // fix
	constexpr uint64_t CRopeKeyframe_m_Subdiv = 0x48a4bbd559e317dd; // fix
	constexpr uint64_t CRopeKeyframe_m_TextureScale = 0xdba83b1a06083da4; // fix
	constexpr uint64_t CRopeKeyframe_m_Width = 0x7f06a3f0dce6ec9a; // fix
	constexpr uint64_t CRopeKeyframe_m_bConstrainBetweenEndpoints = 0x2b9f802181906d01; // fix
	constexpr uint64_t CRopeKeyframe_m_fLockedPoints = 0xbc5c13f870221d0e; // fix
	constexpr uint64_t CRopeKeyframe_m_flScrollSpeed = 0xc3b481c36f510885; // fix
	constexpr uint64_t CRopeKeyframe_m_hEndPoint = 0x12cfde64dcc5a7a1; // fix
	constexpr uint64_t CRopeKeyframe_m_hStartPoint = 0x99b09db7e71a2dd4; // fix
	constexpr uint64_t CRopeKeyframe_m_iDefaultRopeMaterialModelIndex = 0xd2f94fd51c962786; // fix
	constexpr uint64_t CRopeKeyframe_m_iEndAttachment = 0x32670689cb6c5cfe; // fix
	constexpr uint64_t CRopeKeyframe_m_iParentAttachment = 0xf7b20e08bc3b1f39; // fix
	constexpr uint64_t CRopeKeyframe_m_iRopeMaterialModelIndex = 0x2e4141f542cc9f4c; // fix
	constexpr uint64_t CRopeKeyframe_m_iStartAttachment = 0x825a64a42bde8e3c; // fix
	constexpr uint64_t CRopeKeyframe_m_nChangeCount = 0x2ab101cf5d047e83; // fix
	constexpr uint64_t CRopeKeyframe_m_nMaxCPULevel = 0xc8e448260b2788a9; // fix
	constexpr uint64_t CRopeKeyframe_m_nMaxGPULevel = 0xa56ad50e0b65911e; // fix
	constexpr uint64_t CRopeKeyframe_m_nMinCPULevel = 0x355b7e7f2a26f62f; // fix
	constexpr uint64_t CRopeKeyframe_m_nMinGPULevel = 0xa32eb304495c7c78; // fix
	constexpr uint64_t CRopeKeyframe_m_nSegments = 0x1e09ad1002f8087a; // fix
	constexpr uint64_t CRopeKeyframe_m_vecOrigin = 0xd97c4eda6d27680d; // fix
	constexpr uint64_t CRopeKeyframe_moveparent = 0x5b6c7337b1d007af; // fix
	constexpr uint64_t CSceneEntity_m_bIsPlayingBack = 0x12892609a52e44e0; // fix
	constexpr uint64_t CSceneEntity_m_bMultiplayer = 0xcf10c47777e886e1; // fix
	constexpr uint64_t CSceneEntity_m_bPaused = 0x2927b9f22992512e; // fix
	constexpr uint64_t CSceneEntity_m_flForceClientTime = 0xfff7a4d241afc6c1; // fix
	constexpr uint64_t CSceneEntity_m_nSceneStringIndex = 0x1b64802d7c395c7f; // fix
	constexpr uint64_t CShadowControl_m_bDisableShadows = 0x1b1d846854c6f45; // fix
	constexpr uint64_t CShadowControl_m_bEnableLocalLightShadows = 0x595c082a6b1c4fea; // fix
	constexpr uint64_t CShadowControl_m_flShadowMaxDist = 0xb024f69de96e4667; // fix
	constexpr uint64_t CShadowControl_m_shadowColor = 0xebcbc13217bebcd5; // fix
	constexpr uint64_t CShadowControl_m_shadowDirection = 0xc07269b48aed9f35; // fix
	constexpr uint64_t CSlideshowDisplay_m_bEnabled = 0xa3db179365e8b11b; // fix
	constexpr uint64_t CSlideshowDisplay_m_bNoListRepeats = 0xed494613e7be3bba; // fix
	constexpr uint64_t CSlideshowDisplay_m_chCurrentSlideLists = 0x499e1dfa0f2ee77c; // fix
	constexpr uint64_t CSlideshowDisplay_m_fMaxSlideTime = 0xbcae45cbc1cc6026; // fix
	constexpr uint64_t CSlideshowDisplay_m_fMinSlideTime = 0xa091f4587f9f1d8d; // fix
	constexpr uint64_t CSlideshowDisplay_m_iCycleType = 0xda00d919ba7fad62; // fix
	constexpr uint64_t CSlideshowDisplay_m_szDisplayText = 0xdb256aad22136648; // fix
	constexpr uint64_t CSlideshowDisplay_m_szSlideshowDirectory = 0x7dbfbeae531cf17; // fix
	constexpr uint64_t CSmokeGrenadeProjectile_m_bDidSmokeEffect = 0x176d487b176c82af; // fix
	constexpr uint64_t CSmokeGrenadeProjectile_m_nSmokeEffectTickBegin = 0x7e3859f722ebb5fe; // fix
	constexpr uint64_t CSmokeStack_m_AmbientLight_m_flIntensity = 0x9b035112eba1587b; // fix
	constexpr uint64_t CSmokeStack_m_AmbientLight_m_vColor = 0xf4d703b27fffc2a6; // fix
	constexpr uint64_t CSmokeStack_m_AmbientLight_m_vPos = 0x9a396fc4fec1196b; // fix
	constexpr uint64_t CSmokeStack_m_DirLight_m_flIntensity = 0xa20123e081a992b7; // fix
	constexpr uint64_t CSmokeStack_m_DirLight_m_vColor = 0x4f51f3758025372; // fix
	constexpr uint64_t CSmokeStack_m_DirLight_m_vPos = 0x259ba63a81599878; // fix
	constexpr uint64_t CSmokeStack_m_EndSize = 0x90cd19f41a3d2900; // fix
	constexpr uint64_t CSmokeStack_m_JetLength = 0x7c54f89a7b59dc05; // fix
	constexpr uint64_t CSmokeStack_m_Rate = 0x75ed8941b4f34a51; // fix
	constexpr uint64_t CSmokeStack_m_Speed = 0x553b65e844acf15f; // fix
	constexpr uint64_t CSmokeStack_m_SpreadSpeed = 0xd7b8c2a615c98960; // fix
	constexpr uint64_t CSmokeStack_m_StartSize = 0xf36305aa15625c3a; // fix
	constexpr uint64_t CSmokeStack_m_bEmit = 0x98717459f8dc911d; // fix
	constexpr uint64_t CSmokeStack_m_flBaseSpread = 0x2c61277730f3ca0f; // fix
	constexpr uint64_t CSmokeStack_m_flRollSpeed = 0x9b321e6c73aef7ec; // fix
	constexpr uint64_t CSmokeStack_m_flTwist = 0x303b18bc00a4d32f; // fix
	constexpr uint64_t CSmokeStack_m_iMaterialModel = 0x87625bd331ee3375; // fix
	constexpr uint64_t CSmokeStack_m_vWind = 0xbd9b23122a854133; // fix
	constexpr uint64_t CSpatialEntity_m_bEnabled = 0xf2f1ee6ec5c27ed5; // fix
	constexpr uint64_t CSpatialEntity_m_flCurWeight = 0x7f4f9c183cf7c0b; // fix
	constexpr uint64_t CSpatialEntity_m_maxFalloff = 0x588b7dca8ff97c83; // fix
	constexpr uint64_t CSpatialEntity_m_minFalloff = 0x8439d027ff4e254c; // fix
	constexpr uint64_t CSpatialEntity_m_vecOrigin = 0xab385a05d31f1a6f; // fix
	constexpr uint64_t CSpotlightEnd_m_Radius = 0x4422c86d5d578e8a; // fix
	constexpr uint64_t CSpotlightEnd_m_flLightScale = 0x50ef21f05e61464c; // fix
	constexpr uint64_t CSpriteTrail_m_flEndWidth = 0xa1bc7858c7c162cf; // fix
	constexpr uint64_t CSpriteTrail_m_flLifeTime = 0xf419304ee3c9976c; // fix
	constexpr uint64_t CSpriteTrail_m_flMinFadeLength = 0x510f0e27cd4c3b8d; // fix
	constexpr uint64_t CSpriteTrail_m_flSkyboxScale = 0x193d7a91fe3551b4; // fix
	constexpr uint64_t CSpriteTrail_m_flStartWidth = 0x65964ba5de96afa5; // fix
	constexpr uint64_t CSpriteTrail_m_flStartWidthVariance = 0x20a4d537edd5919b; // fix
	constexpr uint64_t CSpriteTrail_m_flTextureRes = 0x79d4577c2cb09be5; // fix
	constexpr uint64_t CSpriteTrail_m_vecSkyboxOrigin = 0x64f367a73dca311d; // fix
	constexpr uint64_t CSprite_m_bWorldSpaceScale = 0xd551154bba4a29a0; // fix
	constexpr uint64_t CSprite_m_flBrightnessTime = 0x81bf5471ef52371; // fix
	constexpr uint64_t CSprite_m_flFrame = 0x4a595be4cc0b8c03; // fix
	constexpr uint64_t CSprite_m_flGlowProxySize = 0xba1a9f3a71fa01df; // fix
	constexpr uint64_t CSprite_m_flHDRColorScale = 0x3bf8906cd4998170; // fix
	constexpr uint64_t CSprite_m_flScaleTime = 0x14d51a405135b796; // fix
	constexpr uint64_t CSprite_m_flSpriteFramerate = 0x3b9682deb0da53ac; // fix
	constexpr uint64_t CSprite_m_flSpriteScale = 0x178c8372c4ed38ca; // fix
	constexpr uint64_t CSprite_m_hAttachedToEntity = 0x315cf0143aff132e; // fix
	constexpr uint64_t CSprite_m_nAttachment = 0xb5bd9f52bb57d457; // fix
	constexpr uint64_t CSprite_m_nBrightness = 0xa744471593877f28; // fix
	constexpr uint64_t CStatueProp_m_bShatter = 0xfb7c7a60c93bcea0; // fix
	constexpr uint64_t CStatueProp_m_hInitBaseAnimating = 0xf4047c51748fe204; // fix
	constexpr uint64_t CStatueProp_m_nShatterFlags = 0xa7e4963510476fd3; // fix
	constexpr uint64_t CStatueProp_m_vShatterForce = 0xeafc6c6329fe5525; // fix
	constexpr uint64_t CStatueProp_m_vShatterPosition = 0x92bc28b233ee3c41; // fix
	constexpr uint64_t CSteamJet_m_EndSize = 0x3f25466f317d7f08; // fix
	constexpr uint64_t CSteamJet_m_JetLength = 0x3804dd9db28bbcaa; // fix
	constexpr uint64_t CSteamJet_m_Rate = 0x220523bfacd2fe1f; // fix
	constexpr uint64_t CSteamJet_m_Speed = 0x546c752df7bff40e; // fix
	constexpr uint64_t CSteamJet_m_SpreadSpeed = 0xc63d2ddf47700be0; // fix
	constexpr uint64_t CSteamJet_m_StartSize = 0x2bd7b4f6abb41a26; // fix
	constexpr uint64_t CSteamJet_m_bEmit = 0x70a4a972f846c03e; // fix
	constexpr uint64_t CSteamJet_m_bFaceLeft = 0x6100e9f2bae51b72; // fix
	constexpr uint64_t CSteamJet_m_flRollSpeed = 0x17a5c376b631869c; // fix
	constexpr uint64_t CSteamJet_m_nType = 0x1a96148551105d90; // fix
	constexpr uint64_t CSteamJet_m_spawnflags = 0x953cf5149d22f300; // fix
	constexpr uint64_t CSun_m_bOn = 0xb63a59b191cd7fac; // fix
	constexpr uint64_t CSun_m_clrOverlay = 0xb95bcf2b0e3e08ed; // fix
	constexpr uint64_t CSun_m_clrRender = 0xba0fb02dc92627ba; // fix
	constexpr uint64_t CSun_m_nMaterial = 0x5a7babd2c242d9d0; // fix
	constexpr uint64_t CSun_m_nOverlayMaterial = 0xd449292908540844; // fix
	constexpr uint64_t CSun_m_nOverlaySize = 0x985f2193786ff70a; // fix
	constexpr uint64_t CSun_m_nSize = 0x5737c074fcec773f; // fix
	constexpr uint64_t CSun_m_vDirection = 0xab5686d78b39444f; // fix
	constexpr uint64_t CSunlightShadowControl_m_LightColor = 0x5f89bea64cb0be18; // fix
	constexpr uint64_t CSunlightShadowControl_m_TextureName = 0x9773a588cf80a39d; // fix
	constexpr uint64_t CSunlightShadowControl_m_bEnableShadows = 0xefb23ea6edab4775; // fix
	constexpr uint64_t CSunlightShadowControl_m_bEnabled = 0xa5a11d01a9c1aba6; // fix
	constexpr uint64_t CSunlightShadowControl_m_flColorTransitionTime = 0xf3482ebf4ab3d16e; // fix
	constexpr uint64_t CSunlightShadowControl_m_flFOV = 0xf6db4757d298bc61; // fix
	constexpr uint64_t CSunlightShadowControl_m_flNearZ = 0x5429c9aae2b8ebf1; // fix
	constexpr uint64_t CSunlightShadowControl_m_flNorthOffset = 0xc179a31f803c567d; // fix
	constexpr uint64_t CSunlightShadowControl_m_flSunDistance = 0x230e0562ac588fd; // fix
	constexpr uint64_t CSunlightShadowControl_m_shadowDirection = 0x9be848c453b62213; // fix
	constexpr uint64_t CSurvivalSpawnChopper_m_vecOrigin = 0x265a169b25784b87; // fix
	constexpr uint64_t CSurvivalSpawnChopper_m_vecOrigin_2_ = 0x5c0a901836151c1; // fix
	constexpr uint64_t CTEBSPDecal_m_nEntity = 0xe75ac1f08faeca98; // fix
	constexpr uint64_t CTEBSPDecal_m_nIndex = 0xb1d42511e9352f4d; // fix
	constexpr uint64_t CTEBSPDecal_m_vecOrigin = 0x2e3fdba98f38f43e; // fix
	constexpr uint64_t CTEBaseBeam_a = 0x803b117ffa44a358; // fix
	constexpr uint64_t CTEBaseBeam_b = 0xe82eb88c22ba03f5; // fix
	constexpr uint64_t CTEBaseBeam_g = 0xa25a30ff3806d267; // fix
	constexpr uint64_t CTEBaseBeam_m_fAmplitude = 0x3ea01faef8e78134; // fix
	constexpr uint64_t CTEBaseBeam_m_fEndWidth = 0x3c4b29d42b61a361; // fix
	constexpr uint64_t CTEBaseBeam_m_fLife = 0xbd00a2246e4a59b2; // fix
	constexpr uint64_t CTEBaseBeam_m_fWidth = 0x7297a8e920642cb4; // fix
	constexpr uint64_t CTEBaseBeam_m_nFadeLength = 0x257ce002dbc9b86d; // fix
	constexpr uint64_t CTEBaseBeam_m_nFlags = 0x57c3409059814592; // fix
	constexpr uint64_t CTEBaseBeam_m_nFrameRate = 0x1e8aa9cfd608a2ab; // fix
	constexpr uint64_t CTEBaseBeam_m_nHaloIndex = 0xb9ae585644f9a9de; // fix
	constexpr uint64_t CTEBaseBeam_m_nModelIndex = 0x7109ea1bd2b4726; // fix
	constexpr uint64_t CTEBaseBeam_m_nSpeed = 0x95620cf3fdd9ef2d; // fix
	constexpr uint64_t CTEBaseBeam_m_nStartFrame = 0x85e15e5a0afe7b13; // fix
	constexpr uint64_t CTEBaseBeam_r = 0xed2f917ee0ffde71; // fix
	constexpr uint64_t CTEBeamEntPoint_m_nEndEntity = 0x78ee1532d1d887aa; // fix
	constexpr uint64_t CTEBeamEntPoint_m_nStartEntity = 0x4a54c1bc20527c2c; // fix
	constexpr uint64_t CTEBeamEntPoint_m_vecEndPoint = 0xcfc159a3af504b07; // fix
	constexpr uint64_t CTEBeamEntPoint_m_vecStartPoint = 0x52bc4b6d07d56f69; // fix
	constexpr uint64_t CTEBeamEnts_m_nEndEntity = 0xb0032b34afefbc10; // fix
	constexpr uint64_t CTEBeamEnts_m_nStartEntity = 0x31956b16df8a88a9; // fix
	constexpr uint64_t CTEBeamFollow_m_iEntIndex = 0x438076526166c469; // fix
	constexpr uint64_t CTEBeamLaser_m_nEndEntity = 0x8f1e784ba8bcb326; // fix
	constexpr uint64_t CTEBeamLaser_m_nStartEntity = 0x13899a75293a56a; // fix
	constexpr uint64_t CTEBeamPoints_m_vecEndPoint = 0xef3f4467fc60493b; // fix
	constexpr uint64_t CTEBeamPoints_m_vecStartPoint = 0xce1c5e22c813be73; // fix
	constexpr uint64_t CTEBeamRingPoint_m_flEndRadius = 0x191548a9549a51d8; // fix
	constexpr uint64_t CTEBeamRingPoint_m_flStartRadius = 0xc3396e76f58bfd41; // fix
	constexpr uint64_t CTEBeamRingPoint_m_vecCenter = 0xd74788738aef463e; // fix
	constexpr uint64_t CTEBeamRing_m_nEndEntity = 0xbf2dffa77750733c; // fix
	constexpr uint64_t CTEBeamRing_m_nStartEntity = 0xb86427f815291042; // fix
	constexpr uint64_t CTEBeamSpline_m_nPoints = 0x72620b59daf6aac0; // fix
	constexpr uint64_t CTEBeamSpline_m_vecPoints_0_ = 0x94de1a93aede3fc6; // fix
	constexpr uint64_t CTEBloodSprite_a = 0x6f93df58c5c38627; // fix
	constexpr uint64_t CTEBloodSprite_b = 0x4da3a57271404e94; // fix
	constexpr uint64_t CTEBloodSprite_g = 0x2c38de7ca5bc9234; // fix
	constexpr uint64_t CTEBloodSprite_m_nDropModel = 0xc87f205c4c0f73f0; // fix
	constexpr uint64_t CTEBloodSprite_m_nSize = 0xfc632b09ca8cfd0c; // fix
	constexpr uint64_t CTEBloodSprite_m_nSprayModel = 0x2c01338de8312a5b; // fix
	constexpr uint64_t CTEBloodSprite_m_vecDirection = 0x17b125085f756d2a; // fix
	constexpr uint64_t CTEBloodSprite_m_vecOrigin = 0x20494727f4214bac; // fix
	constexpr uint64_t CTEBloodSprite_r = 0x8830d3fffd2d085a; // fix
	constexpr uint64_t CTEBloodStream_a = 0xa3feda611875cccd; // fix
	constexpr uint64_t CTEBloodStream_b = 0xc838fb8750fb22d1; // fix
	constexpr uint64_t CTEBloodStream_g = 0x59e48859407a1a2; // fix
	constexpr uint64_t CTEBloodStream_m_nAmount = 0xa52599042ec826a0; // fix
	constexpr uint64_t CTEBloodStream_m_vecDirection = 0xec0fc385976524c7; // fix
	constexpr uint64_t CTEBloodStream_r = 0xa4f778638d645b63; // fix
	constexpr uint64_t CTEBreakModel_m_angRotation_0_ = 0x3a8b6572a646e12b; // fix
	constexpr uint64_t CTEBreakModel_m_angRotation_1_ = 0xd932f42604e5332e; // fix
	constexpr uint64_t CTEBreakModel_m_angRotation_2_ = 0x4e67452cecf67be0; // fix
	constexpr uint64_t CTEBreakModel_m_fTime = 0xdb6c09e59a04b8f1; // fix
	constexpr uint64_t CTEBreakModel_m_nCount = 0xfc5c9c1b5ddd972c; // fix
	constexpr uint64_t CTEBreakModel_m_nFlags = 0x8b04f957e2d561c4; // fix
	constexpr uint64_t CTEBreakModel_m_nModelIndex = 0x2139e645bbd2142b; // fix
	constexpr uint64_t CTEBreakModel_m_nRandomization = 0xb73f0aebf4cb057b; // fix
	constexpr uint64_t CTEBreakModel_m_vecOrigin = 0x18dcba677639efb7; // fix
	constexpr uint64_t CTEBreakModel_m_vecSize = 0xcf9efc8b7f615ae9; // fix
	constexpr uint64_t CTEBreakModel_m_vecVelocity = 0xbf62aa9fde9c937; // fix
	constexpr uint64_t CTEBubbleTrail_m_fSpeed = 0xf6dfbcd67e1c0691; // fix
	constexpr uint64_t CTEBubbleTrail_m_flWaterZ = 0xecdf962725e1b9a8; // fix
	constexpr uint64_t CTEBubbleTrail_m_nCount = 0xbb83c24240b6f34f; // fix
	constexpr uint64_t CTEBubbleTrail_m_nModelIndex = 0xf2d924738f61444e; // fix
	constexpr uint64_t CTEBubbleTrail_m_vecMaxs = 0x249b4224e4ecd72d; // fix
	constexpr uint64_t CTEBubbleTrail_m_vecMins = 0x29453a1f0d409063; // fix
	constexpr uint64_t CTEBubbles_m_fHeight = 0xd1f8e74dd37fafba; // fix
	constexpr uint64_t CTEBubbles_m_fSpeed = 0x64d9f1c0c8468ad4; // fix
	constexpr uint64_t CTEBubbles_m_nCount = 0xbac6a886a539bca7; // fix
	constexpr uint64_t CTEBubbles_m_nModelIndex = 0x28e6fc8af2da37eb; // fix
	constexpr uint64_t CTEBubbles_m_vecMaxs = 0x30f0bce43f3dd298; // fix
	constexpr uint64_t CTEBubbles_m_vecMins = 0x9d0eeb21192b4cbd; // fix
	constexpr uint64_t CTEClientProjectile_m_hOwner = 0xf9a7d8f6d03d13b6; // fix
	constexpr uint64_t CTEClientProjectile_m_nLifeTime = 0xed22dbb7199caca2; // fix
	constexpr uint64_t CTEClientProjectile_m_nModelIndex = 0x2a071755c543d96c; // fix
	constexpr uint64_t CTEClientProjectile_m_vecOrigin = 0x3149913fdf53c1c0; // fix
	constexpr uint64_t CTEClientProjectile_m_vecVelocity = 0x93c80c786b2f8290; // fix
	constexpr uint64_t CTEDecal_m_nEntity = 0x883db723cb066d9f; // fix
	constexpr uint64_t CTEDecal_m_nHitbox = 0x8fd2bc7cb6eb57b8; // fix
	constexpr uint64_t CTEDecal_m_nIndex = 0xc6629c4997770861; // fix
	constexpr uint64_t CTEDecal_m_vecOrigin = 0x8763036fc2a511ad; // fix
	constexpr uint64_t CTEDecal_m_vecStart = 0xcb88ba91dba7bfce; // fix
	constexpr uint64_t CTEDust_m_flSize = 0x725ae4d5ceba0fdf; // fix
	constexpr uint64_t CTEDust_m_flSpeed = 0xf2303062a7d00fec; // fix
	constexpr uint64_t CTEDust_m_vecDirection = 0xe1478341e00d4635; // fix
	constexpr uint64_t CTEDynamicLight_b = 0x58557ce83373fee5; // fix
	constexpr uint64_t CTEDynamicLight_exponent = 0xb2a4e5deebb34b5f; // fix
	constexpr uint64_t CTEDynamicLight_g = 0x6315b8f4e30eab3f; // fix
	constexpr uint64_t CTEDynamicLight_m_fDecay = 0x96edd688a74783e2; // fix
	constexpr uint64_t CTEDynamicLight_m_fRadius = 0xe15073258423d713; // fix
	constexpr uint64_t CTEDynamicLight_m_fTime = 0x1b3805f3e997352b; // fix
	constexpr uint64_t CTEDynamicLight_m_vecOrigin = 0x42a80de5fd6412fb; // fix
	constexpr uint64_t CTEDynamicLight_r = 0xd99b048edcbad4a9; // fix
	constexpr uint64_t CTEEffectDispatch_entindex = 0x792b93e51b7394bf; // fix
	constexpr uint64_t CTEEffectDispatch_m_EffectData = 0x1245cc79d35a8fa6; // fix
	constexpr uint64_t CTEEffectDispatch_m_bPositionsAreRelativeToEntity = 0x9b27cff6803d6aa9; // fix
	constexpr uint64_t CTEEffectDispatch_m_fFlags = 0x3a7828a93c72457; // fix
	constexpr uint64_t CTEEffectDispatch_m_flMagnitude = 0xdda4694cc3ca679c; // fix
	constexpr uint64_t CTEEffectDispatch_m_flRadius = 0xe235331ffc9f83f1; // fix
	constexpr uint64_t CTEEffectDispatch_m_flScale = 0x656776e67f712789; // fix
	constexpr uint64_t CTEEffectDispatch_m_iEffectName = 0x9428ffa1d9cd76fa; // fix
	constexpr uint64_t CTEEffectDispatch_m_nAttachmentIndex = 0xa666852c7fd70783; // fix
	constexpr uint64_t CTEEffectDispatch_m_nColor = 0x2bcd0c16006c5079; // fix
	constexpr uint64_t CTEEffectDispatch_m_nDamageType = 0x1e7a3d2e7a563103; // fix
	constexpr uint64_t CTEEffectDispatch_m_nHitBox = 0xb5309a53c5d94677; // fix
	constexpr uint64_t CTEEffectDispatch_m_nMaterial = 0xade4d3c3f1bd9650; // fix
	constexpr uint64_t CTEEffectDispatch_m_nOtherEntIndex = 0x4277434ea304ae1e; // fix
	constexpr uint64_t CTEEffectDispatch_m_nSurfaceProp = 0xbebee4f7265b0dcc; // fix
	constexpr uint64_t CTEEffectDispatch_m_vAngles = 0x8b5158f42cc6f113; // fix
	constexpr uint64_t CTEEffectDispatch_m_vNormal = 0x398311442adc22b5; // fix
	constexpr uint64_t CTEEffectDispatch_m_vOrigin_x = 0xeb96fd9bdadc5d10; // fix
	constexpr uint64_t CTEEffectDispatch_m_vOrigin_y = 0x65eaafeef7edcb9; // fix
	constexpr uint64_t CTEEffectDispatch_m_vOrigin_z = 0x24a218c725473a0d; // fix
	constexpr uint64_t CTEEffectDispatch_m_vStart_x = 0xb62b63938f71f4ea; // fix
	constexpr uint64_t CTEEffectDispatch_m_vStart_y = 0xb27984db9b5659cc; // fix
	constexpr uint64_t CTEEffectDispatch_m_vStart_z = 0xeee3d23a71b9eeeb; // fix
	constexpr uint64_t CTEEnergySplash_m_bExplosive = 0x69e470aee4479c55; // fix
	constexpr uint64_t CTEEnergySplash_m_vecDir = 0x4f48de4ec7a18caa; // fix
	constexpr uint64_t CTEEnergySplash_m_vecPos = 0xc8b6e54ff214388f; // fix
	constexpr uint64_t CTEExplosion_m_chMaterialType = 0x22170e46af71f6b9; // fix
	constexpr uint64_t CTEExplosion_m_fScale = 0x7b98bc95de82c8d7; // fix
	constexpr uint64_t CTEExplosion_m_nFlags = 0xdd9a9f87a015b9ee; // fix
	constexpr uint64_t CTEExplosion_m_nFrameRate = 0x6d06f6b870417fed; // fix
	constexpr uint64_t CTEExplosion_m_nMagnitude = 0xdf5f360e5e86f254; // fix
	constexpr uint64_t CTEExplosion_m_nModelIndex = 0xecf2d92ef0c2add6; // fix
	constexpr uint64_t CTEExplosion_m_nRadius = 0x68bfee7a45712ab7; // fix
	constexpr uint64_t CTEExplosion_m_vecNormal = 0xefb56f7e0de2164d; // fix
	constexpr uint64_t CTEFireBullets_m_fInaccuracy = 0x5cf59013d0a3fead; // fix
	constexpr uint64_t CTEFireBullets_m_fSpread = 0x5fa19c2d730630c2; // fix
	constexpr uint64_t CTEFireBullets_m_flRecoilIndex = 0x400e1f48134b3a96; // fix
	constexpr uint64_t CTEFireBullets_m_iMode = 0x57f4afde4524cc57; // fix
	constexpr uint64_t CTEFireBullets_m_iPlayer = 0xca03f21a610e532e; // fix
	constexpr uint64_t CTEFireBullets_m_iSeed = 0x577e2cd09f40983c; // fix
	constexpr uint64_t CTEFireBullets_m_iSoundType = 0x30ca744ea2a0c309; // fix
	constexpr uint64_t CTEFireBullets_m_iWeaponID = 0x6c7eb862a7f6294a; // fix
	constexpr uint64_t CTEFireBullets_m_nItemDefIndex = 0xfb15b3344f5c3ab3; // fix
	constexpr uint64_t CTEFireBullets_m_vecAngles_0_ = 0x13dfd73bb96fcd27; // fix
	constexpr uint64_t CTEFireBullets_m_vecAngles_1_ = 0x6e39b234a0b357fc; // fix
	constexpr uint64_t CTEFireBullets_m_vecOrigin = 0x991c59d84ae522c1; // fix
	constexpr uint64_t CTEFireBullets_m_weapon = 0x830059f7aedd8caa; // fix
	constexpr uint64_t CTEFizz_m_nCurrent = 0x173d8ba50630cdb7; // fix
	constexpr uint64_t CTEFizz_m_nDensity = 0xa95cdcaa0ad48c1a; // fix
	constexpr uint64_t CTEFizz_m_nEntity = 0xa431ffe3e703fe9; // fix
	constexpr uint64_t CTEFizz_m_nModelIndex = 0xbfebb7da6ef9e14f; // fix
	constexpr uint64_t CTEFootprintDecal_m_chMaterialType = 0xb1679c7ba2a755ed; // fix
	constexpr uint64_t CTEFootprintDecal_m_nEntity = 0xf246dda691d41ac2; // fix
	constexpr uint64_t CTEFootprintDecal_m_nIndex = 0x3c2b48696d439bb4; // fix
	constexpr uint64_t CTEFootprintDecal_m_vecDirection = 0x8ccf55820cb665d9; // fix
	constexpr uint64_t CTEFootprintDecal_m_vecOrigin = 0xfbfb3125e83e6298; // fix
	constexpr uint64_t CTEFoundryHelpers_m_iEntity = 0xadb5296e7f0254e0; // fix
	constexpr uint64_t CTEGaussExplosion_m_nType = 0x3c9d079963d5e553; // fix
	constexpr uint64_t CTEGaussExplosion_m_vecDirection = 0x645d1014ade9dde3; // fix
	constexpr uint64_t CTEGlowSprite_m_fLife = 0x3d777d54d26bf66; // fix
	constexpr uint64_t CTEGlowSprite_m_fScale = 0x6926256ae1305cd1; // fix
	constexpr uint64_t CTEGlowSprite_m_nBrightness = 0x1e31973e7702359a; // fix
	constexpr uint64_t CTEGlowSprite_m_nModelIndex = 0x4671c6b4e5afdf1b; // fix
	constexpr uint64_t CTEGlowSprite_m_vecOrigin = 0x6989879b38b2a561; // fix
	constexpr uint64_t CTEImpact_m_iType = 0x9cba74b168be09ae; // fix
	constexpr uint64_t CTEImpact_m_ucFlags = 0x2da6d65438a4556f; // fix
	constexpr uint64_t CTEImpact_m_vecNormal = 0x19df801bfbf2282e; // fix
	constexpr uint64_t CTEImpact_m_vecOrigin = 0x9952ef19d2bbaab7; // fix
	constexpr uint64_t CTEKillPlayerAttachments_m_nPlayer = 0x6a20120ce2c6f719; // fix
	constexpr uint64_t CTELargeFunnel_m_nModelIndex = 0x9a5f52cedd22c8b5; // fix
	constexpr uint64_t CTELargeFunnel_m_nReversed = 0xac67614a2393e12; // fix
	constexpr uint64_t CTEMetalSparks_m_vecDir = 0x1398483634056709; // fix
	constexpr uint64_t CTEMetalSparks_m_vecPos = 0xc8f7ee75edea4ea3; // fix
	constexpr uint64_t CTEMuzzleFlash_m_flScale = 0x4eee1042ca2df3c4; // fix
	constexpr uint64_t CTEMuzzleFlash_m_nType = 0x1b771205309939a7; // fix
	constexpr uint64_t CTEMuzzleFlash_m_vecAngles = 0x361ab9044929489; // fix
	constexpr uint64_t CTEMuzzleFlash_m_vecOrigin = 0x5362cb619e490644; // fix
	constexpr uint64_t CTEParticleSystem_m_vecOrigin_0_ = 0xc8e3db890998d9b7; // fix
	constexpr uint64_t CTEParticleSystem_m_vecOrigin_1_ = 0x486dbc68e8201451; // fix
	constexpr uint64_t CTEParticleSystem_m_vecOrigin_2_ = 0xe7e8752ba9b4d45f; // fix
	constexpr uint64_t CTEPhysicsProp_m_angRotation_0_ = 0x7cbf019444122714; // fix
	constexpr uint64_t CTEPhysicsProp_m_angRotation_1_ = 0xdfda73a3ffdb2d1d; // fix
	constexpr uint64_t CTEPhysicsProp_m_angRotation_2_ = 0x23048c6598213d00; // fix
	constexpr uint64_t CTEPhysicsProp_m_clrRender = 0xb6fc7c2171ee5c42; // fix
	constexpr uint64_t CTEPhysicsProp_m_nEffects = 0x1389db53a0f4cd7a; // fix
	constexpr uint64_t CTEPhysicsProp_m_nFlags = 0xccab4b3f2de81a67; // fix
	constexpr uint64_t CTEPhysicsProp_m_nModelIndex = 0xb2ee0db344224137; // fix
	constexpr uint64_t CTEPhysicsProp_m_nSkin = 0x3efe6c91248816e6; // fix
	constexpr uint64_t CTEPhysicsProp_m_vecOrigin = 0x863586113cdf5ed6; // fix
	constexpr uint64_t CTEPhysicsProp_m_vecVelocity = 0xc757609dde5f7626; // fix
	constexpr uint64_t CTEPlantBomb_m_iPlayer = 0xb0eb1ed649c0776c; // fix
	constexpr uint64_t CTEPlantBomb_m_option = 0x9a4dbe1a630bc54e; // fix
	constexpr uint64_t CTEPlantBomb_m_vecOrigin = 0x55a14e1b82a3afc4; // fix
	constexpr uint64_t CTEPlayerAnimEvent_m_hPlayer = 0xfa930786b6c3341b; // fix
	constexpr uint64_t CTEPlayerAnimEvent_m_iEvent = 0x51bc2750d622692; // fix
	constexpr uint64_t CTEPlayerAnimEvent_m_nData = 0x9bd152e8f2d49e97; // fix
	constexpr uint64_t CTEPlayerDecal_m_nEntity = 0x22dbbf1584f6c7e9; // fix
	constexpr uint64_t CTEPlayerDecal_m_nHitbox = 0xbf9485b1ff69f4e2; // fix
	constexpr uint64_t CTEPlayerDecal_m_nPlayer = 0x524504372b202f2; // fix
	constexpr uint64_t CTEPlayerDecal_m_vecOrigin = 0x5431b0401f6d094c; // fix
	constexpr uint64_t CTEPlayerDecal_m_vecRight = 0x18e72e70dd65421; // fix
	constexpr uint64_t CTEPlayerDecal_m_vecStart = 0x70fe39239799e289; // fix
	constexpr uint64_t CTEProjectedDecal_m_angRotation = 0x4f50b93807aa692d; // fix
	constexpr uint64_t CTEProjectedDecal_m_flDistance = 0xaf18bc20df77ed35; // fix
	constexpr uint64_t CTEProjectedDecal_m_nIndex = 0xa3f3d62bf3bb036a; // fix
	constexpr uint64_t CTEProjectedDecal_m_vecOrigin = 0x69cebbcd9f1b81f2; // fix
	constexpr uint64_t CTERadioIcon_m_iAttachToClient = 0x13d90f5e7d339b74; // fix
	constexpr uint64_t CTEShatterSurface_m_flHeight = 0x2f774aa67d50a329; // fix
	constexpr uint64_t CTEShatterSurface_m_flShardSize = 0x69a0124ae4729ee9; // fix
	constexpr uint64_t CTEShatterSurface_m_flWidth = 0xb22ebbd2d71d6bee; // fix
	constexpr uint64_t CTEShatterSurface_m_nSurfaceType = 0x9b6a4d3c45f6795c; // fix
	constexpr uint64_t CTEShatterSurface_m_uchBackColor_0_ = 0x3d32ec2c3365e94; // fix
	constexpr uint64_t CTEShatterSurface_m_uchBackColor_1_ = 0xb1206d2c5b34c5e9; // fix
	constexpr uint64_t CTEShatterSurface_m_uchBackColor_2_ = 0x174b7611056039e3; // fix
	constexpr uint64_t CTEShatterSurface_m_uchFrontColor_0_ = 0xc08f45ee76508c91; // fix
	constexpr uint64_t CTEShatterSurface_m_uchFrontColor_1_ = 0xbe3cdaaf59ec7e4c; // fix
	constexpr uint64_t CTEShatterSurface_m_uchFrontColor_2_ = 0x59484a2fe0ac3af3; // fix
	constexpr uint64_t CTEShatterSurface_m_vecAngles = 0x24f083185196cea5; // fix
	constexpr uint64_t CTEShatterSurface_m_vecForce = 0xe1827e470ac74fb9; // fix
	constexpr uint64_t CTEShatterSurface_m_vecForcePos = 0x5607ac0db1fccef6; // fix
	constexpr uint64_t CTEShatterSurface_m_vecOrigin = 0x3416604c2b6727f; // fix
	constexpr uint64_t CTEShowLine_m_vecEnd = 0x85a732dc0863c2f8; // fix
	constexpr uint64_t CTESmoke_m_fScale = 0xaecf31875b915fff; // fix
	constexpr uint64_t CTESmoke_m_nFrameRate = 0x967d9da35ee1a255; // fix
	constexpr uint64_t CTESmoke_m_nModelIndex = 0xeded1412e8e37f8f; // fix
	constexpr uint64_t CTESmoke_m_vecOrigin = 0x62b70e1820172157; // fix
	constexpr uint64_t CTESparks_m_nMagnitude = 0x194b1e2bed4bef4f; // fix
	constexpr uint64_t CTESparks_m_nTrailLength = 0x3589c67d51b24885; // fix
	constexpr uint64_t CTESparks_m_vecDir = 0x98bb0425e9a7d2e; // fix
	constexpr uint64_t CTESpriteSpray_m_fNoise = 0x487faefd6df87d2d; // fix
	constexpr uint64_t CTESpriteSpray_m_nCount = 0x9e47a58772837a0; // fix
	constexpr uint64_t CTESpriteSpray_m_nModelIndex = 0x393f94d86fa64278; // fix
	constexpr uint64_t CTESpriteSpray_m_nSpeed = 0x41d8b73e1eef5bd2; // fix
	constexpr uint64_t CTESpriteSpray_m_vecDirection = 0xd2327d34546152cd; // fix
	constexpr uint64_t CTESpriteSpray_m_vecOrigin = 0x850665f9fe55120d; // fix
	constexpr uint64_t CTESprite_m_fScale = 0x2cd04089278a90c4; // fix
	constexpr uint64_t CTESprite_m_nBrightness = 0xa11b1f3e2d04e162; // fix
	constexpr uint64_t CTESprite_m_nModelIndex = 0x2487d1e5c648f0f4; // fix
	constexpr uint64_t CTESprite_m_vecOrigin = 0xeb51726ef59be563; // fix
	constexpr uint64_t CTEWorldDecal_m_nIndex = 0x4a78095bc5cccb4a; // fix
	constexpr uint64_t CTEWorldDecal_m_vecOrigin = 0xf658bd98fd3f4785; // fix
	constexpr uint64_t CTablet_m_bTabletReceptionIsBlocked = 0x2461808ebc1ffd43; // fix
	constexpr uint64_t CTablet_m_flBootTime = 0xb1badc9cd5268a08; // fix
	constexpr uint64_t CTablet_m_flScanProgress = 0x69b068e5c1bb32c5; // fix
	constexpr uint64_t CTablet_m_flShowMapTime = 0x3452fa0cd2ba354c; // fix
	constexpr uint64_t CTablet_m_flUpgradeExpirationTime_0_ = 0x7bfad48996441fd7; // fix
	constexpr uint64_t CTablet_m_nContractKillGridHighResIndex = 0x35635fd98143d68d; // fix
	constexpr uint64_t CTablet_m_nContractKillGridIndex = 0xb95cafca165f89f8; // fix
	constexpr uint64_t CTablet_m_nLastPurchaseIndex = 0x33ce730796a47f3c; // fix
	constexpr uint64_t CTablet_m_vecLocalHexFlags_0_ = 0x6c56b65446d9f39e; // fix
	constexpr uint64_t CTablet_m_vecNearestMetalCratePos = 0x59a1ecddcbde2db3; // fix
	constexpr uint64_t CTablet_m_vecNotificationIds_0_ = 0x6905288726cf9f0e; // fix
	constexpr uint64_t CTablet_m_vecNotificationTimestamps_0_ = 0xbcaef5eb840fabff; // fix
	constexpr uint64_t CTablet_m_vecPlayerPositionHistory_0_ = 0x18857281c5175c29; // fix
	constexpr uint64_t CTeam_m_bSurrendered = 0x361088b59eff92ba; // fix
	constexpr uint64_t CTeam_m_iClanID = 0x20cefd0fe399f747; // fix
	constexpr uint64_t CTeam_m_iTeamNum = 0x598f2fa98873c1fd; // fix
	constexpr uint64_t CTeam_m_nGGLeaderEntIndex_CT = 0xed47eff5feb6161d; // fix
	constexpr uint64_t CTeam_m_nGGLeaderEntIndex_T = 0xe5de7362d76a5a8c; // fix
	constexpr uint64_t CTeam_m_numMapVictories = 0x2db841fd71671b80; // fix
	constexpr uint64_t CTeam_m_scoreFirstHalf = 0x8e6bf4cdfd155fbb; // fix
	constexpr uint64_t CTeam_m_scoreOvertime = 0xfe19fe8c45a50b1b; // fix
	constexpr uint64_t CTeam_m_scoreSecondHalf = 0xfa8c2a20ee91600b; // fix
	constexpr uint64_t CTeam_m_scoreTotal = 0x34113faf7f1891e; // fix
	constexpr uint64_t CTeam_m_szClanTeamname = 0xd902b180cf3ed8ed; // fix
	constexpr uint64_t CTeam_m_szTeamFlagImage = 0x24ab93631137f02d; // fix
	constexpr uint64_t CTeam_m_szTeamLogoImage = 0xf22b1bf540ed67b2; // fix
	constexpr uint64_t CTeam_m_szTeamMatchStat = 0x83c9797bd7662d09; // fix
	constexpr uint64_t CTeam_m_szTeamname = 0x1b5ac04a17d666b8; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_TeamRespawnWaveTimes = 0xfe2f0a256b7f403; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_bAwaitingReadyRestart = 0xd8e3914284b93668; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_bInOvertime = 0x6606622c1346298c; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_bInSetup = 0x401a31b9cba72b9; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_bInWaitingForPlayers = 0x695162621300694; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_bStopWatch = 0x1f889cbe935f1294; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_bSwitchedTeamsThisRound = 0x2bb964f8b0c30a70; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_bTeamReady = 0xb518e9855a9d8214; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_flMapResetTime = 0x74c54b674f13c5b8; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_flNextRespawnWave = 0x6e0558a60500f883; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_flRestartRoundTime = 0x3039ab0576173e53; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_iRoundState = 0x8257aec35875ba58; // fix
	constexpr uint64_t CTeamplayRoundBasedRulesProxy_m_iWinningTeam = 0x315e0245148099fb; // fix
	constexpr uint64_t CTesla_m_SoundName = 0xa5b9cc765149249; // fix
	constexpr uint64_t CTesla_m_iszSpriteName = 0x2ada6c0aad621e86; // fix
	constexpr uint64_t CTestTraceline_m_angRotation_0_ = 0x776117d7e7c76dee; // fix
	constexpr uint64_t CTestTraceline_m_angRotation_1_ = 0x43f146dc7b61ac0e; // fix
	constexpr uint64_t CTestTraceline_m_angRotation_2_ = 0x5b12862500c45667; // fix
	constexpr uint64_t CTestTraceline_m_clrRender = 0xefe8ecc61954095c; // fix
	constexpr uint64_t CTestTraceline_m_vecOrigin = 0x5d232f10d84e1200; // fix
	constexpr uint64_t CTestTraceline_moveparent = 0x657d331b4663c179; // fix
	constexpr uint64_t CTest_ProxyToggle_Networkable_m_WithProxy = 0xaec4a34b9753bdbb; // fix
	constexpr uint64_t CTriggerSoundOperator_m_nSoundOperator = 0xfe9527383dd5a05b; // fix
	constexpr uint64_t CVGuiScreen_m_fScreenFlags = 0x55f09eac4927e8a5; // fix
	constexpr uint64_t CVGuiScreen_m_flHeight = 0x4d52189404055fd6; // fix
	constexpr uint64_t CVGuiScreen_m_flWidth = 0xc854a47acc4fc2b7; // fix
	constexpr uint64_t CVGuiScreen_m_hPlayerOwner = 0xa47c44d38aca67e8; // fix
	constexpr uint64_t CVGuiScreen_m_nAttachmentIndex = 0xac1c1cdcc62b851e; // fix
	constexpr uint64_t CVGuiScreen_m_nOverlayMaterial = 0x3db61004e2c204e3; // fix
	constexpr uint64_t CVGuiScreen_m_nPanelName = 0x5300947ee304234; // fix
	constexpr uint64_t CVoteController_m_bIsYesNoVote = 0x2a9ab7ec4ab0be7b; // fix
	constexpr uint64_t CVoteController_m_iActiveIssueIndex = 0xb35a6ca2b84b94bb; // fix
	constexpr uint64_t CVoteController_m_iOnlyTeamToVote = 0x7305d8a395aa43dc; // fix
	constexpr uint64_t CVoteController_m_nPotentialVotes = 0xff808f4732e403d4; // fix
	constexpr uint64_t CVoteController_m_nVoteOptionCount = 0xc14db084b915b3d5; // fix
	constexpr uint64_t CWaterLODControl_m_flCheapWaterEndDistance = 0xf941f58080deec47; // fix
	constexpr uint64_t CWaterLODControl_m_flCheapWaterStartDistance = 0x627b1fe14f98d811; // fix
	constexpr uint64_t CWeaponBaseItem_m_bRedraw = 0x300dca9dfb4c48ef; // fix
	constexpr uint64_t CWeaponCSBaseGun_m_iBurstShotsRemaining = 0x334ba8aef98ad181; // fix
	constexpr uint64_t CWeaponCSBaseGun_m_zoomLevel = 0xa5a361f838bd387; // fix
	constexpr uint64_t CWeaponCSBase_m_bBurstMode = 0x8869271aa12c3b8b; // fix
	constexpr uint64_t CWeaponCSBase_m_bReloadVisuallyComplete = 0xc2ca19380c61909d; // fix
	constexpr uint64_t CWeaponCSBase_m_bSilencerOn = 0x2c2470647662e8ae; // fix
	constexpr uint64_t CWeaponCSBase_m_fAccuracyPenalty = 0xe59404b77ee1c895; // fix
	constexpr uint64_t CWeaponCSBase_m_fLastShotTime = 0x5b7cf4b7eeb718a4; // fix
	constexpr uint64_t CWeaponCSBase_m_flDoneSwitchingSilencer = 0xbd750a9ab1fb3b0d; // fix
	constexpr uint64_t CWeaponCSBase_m_flPostponeFireReadyTime = 0xccba599fb9af41a5; // fix
	constexpr uint64_t CWeaponCSBase_m_flRecoilIndex = 0x198cc4352019f21e; // fix
	constexpr uint64_t CWeaponCSBase_m_hPrevOwner = 0xeac4691e9387b4c3; // fix
	constexpr uint64_t CWeaponCSBase_m_iIronSightMode = 0x6458f8405e9dafb6; // fix
	constexpr uint64_t CWeaponCSBase_m_iOriginalTeamNumber = 0x164ccadd9a07f895; // fix
	constexpr uint64_t CWeaponCSBase_m_iRecoilIndex = 0x19de3187a1f803a8; // fix
	constexpr uint64_t CWeaponCSBase_m_weaponMode = 0x15993d7a92281c4a; // fix
	constexpr uint64_t CWeaponM3_m_reloadState = 0x8744ea8070081398; // fix
	constexpr uint64_t CWeaponNOVA_m_reloadState = 0xeae6b71ac8215e1f; // fix
	constexpr uint64_t CWeaponSawedoff_m_reloadState = 0x5d099ff124a866f9; // fix
	constexpr uint64_t CWeaponShield_m_flDisplayHealth = 0x32fc032022a15cff; // fix
	constexpr uint64_t CWeaponTaser_m_fFireTime = 0x934d1d1d58030c06; // fix
	constexpr uint64_t CWeaponXM1014_m_reloadState = 0xa88e1a4e22d177b8; // fix
	constexpr uint64_t CWorldVguiText_m_bEnabled = 0x44e31155f3a48de8; // fix
	constexpr uint64_t CWorldVguiText_m_clrText = 0xb59d47568ab2b50b; // fix
	constexpr uint64_t CWorldVguiText_m_iTextPanelWidth = 0xbb1411950b745dd6; // fix
	constexpr uint64_t CWorldVguiText_m_szDisplayText = 0x13b4a8a9588afc37; // fix
	constexpr uint64_t CWorldVguiText_m_szDisplayTextOption = 0xe64fb6056f2b0316; // fix
	constexpr uint64_t CWorldVguiText_m_szFont = 0xd0b7563dc443cffa; // fix
	constexpr uint64_t CWorld_m_WorldMaxs = 0xe60477fb98de91da; // fix
	constexpr uint64_t CWorld_m_WorldMins = 0xf405bdf34c58c270; // fix
	constexpr uint64_t CWorld_m_bColdWorld = 0xf5ff9d81bf60db82; // fix
	constexpr uint64_t CWorld_m_bStartDark = 0x516276f62d10227a; // fix
	constexpr uint64_t CWorld_m_flMaxOccludeeArea = 0xc57aaa15040bb4a8; // fix
	constexpr uint64_t CWorld_m_flMaxPropScreenSpaceWidth = 0x5c30910a2550b237; // fix
	constexpr uint64_t CWorld_m_flMinOccluderArea = 0x1a0d43c5cb600e46; // fix
	constexpr uint64_t CWorld_m_flMinPropScreenSpaceWidth = 0xec6f8f0428db5fcc; // fix
	constexpr uint64_t CWorld_m_flWaveHeight = 0x3b91dc90c3f0af28; // fix
	constexpr uint64_t CWorld_m_iTimeOfDay = 0x30b48946bb92af; // fix
	constexpr uint64_t CWorld_m_iszDetailSpriteMaterial = 0x126e512e33d935; // fix
	constexpr uint64_t DustTrail_m_Color = 0x9dc662f413b95ec9; // fix
	constexpr uint64_t DustTrail_m_EndSize = 0x4d1be2125177e290; // fix
	constexpr uint64_t DustTrail_m_MaxDirectedSpeed = 0xad58d91f83a27034; // fix
	constexpr uint64_t DustTrail_m_MaxSpeed = 0x822cd9aa0e1fec76; // fix
	constexpr uint64_t DustTrail_m_MinDirectedSpeed = 0x49021b300cf11ed3; // fix
	constexpr uint64_t DustTrail_m_MinSpeed = 0x17664c1503088052; // fix
	constexpr uint64_t DustTrail_m_Opacity = 0xcd691890bc1acc08; // fix
	constexpr uint64_t DustTrail_m_ParticleLifetime = 0x252bff6160545af8; // fix
	constexpr uint64_t DustTrail_m_SpawnRadius = 0xea2b160bfb3891d2; // fix
	constexpr uint64_t DustTrail_m_SpawnRate = 0xce795cd00323f6da; // fix
	constexpr uint64_t DustTrail_m_StartSize = 0xce44ebb5b8baae4; // fix
	constexpr uint64_t DustTrail_m_StopEmitTime = 0xb5cf9d539c1690ef; // fix
	constexpr uint64_t DustTrail_m_bEmit = 0x207facf06b8b20ec; // fix
	constexpr uint64_t ParticleSmokeGrenade_m_CurrentStage = 0xd42b1abbb518ed9a; // fix
	constexpr uint64_t ParticleSmokeGrenade_m_FadeEndTime = 0x1c31dcb5b66b939a; // fix
	constexpr uint64_t ParticleSmokeGrenade_m_FadeStartTime = 0x7bd100ca18e3e539; // fix
	constexpr uint64_t ParticleSmokeGrenade_m_MaxColor = 0x3ca9123ade7cabd3; // fix
	constexpr uint64_t ParticleSmokeGrenade_m_MinColor = 0xa56503e0ba19f7ab; // fix
	constexpr uint64_t ParticleSmokeGrenade_m_flSpawnTime = 0x354fd912ad2a737d; // fix
	constexpr uint64_t RocketTrail_m_EndColor = 0xbef9a0e76ec5d463; // fix
	constexpr uint64_t RocketTrail_m_EndSize = 0x63cd46259662f768; // fix
	constexpr uint64_t RocketTrail_m_MaxSpeed = 0xdc1efda9748e9e60; // fix
	constexpr uint64_t RocketTrail_m_MinSpeed = 0x1facae03bb02c20e; // fix
	constexpr uint64_t RocketTrail_m_Opacity = 0xe69769b010346970; // fix
	constexpr uint64_t RocketTrail_m_ParticleLifetime = 0xea648e4d63ed3a6; // fix
	constexpr uint64_t RocketTrail_m_SpawnRadius = 0x76ac530febe447f; // fix
	constexpr uint64_t RocketTrail_m_SpawnRate = 0x9668b057a90ebc65; // fix
	constexpr uint64_t RocketTrail_m_StartColor = 0xbdb3f99e3a9b6b37; // fix
	constexpr uint64_t RocketTrail_m_StartSize = 0xfb3d503e07e9bcb3; // fix
	constexpr uint64_t RocketTrail_m_StopEmitTime = 0x1af383be5912b2e0; // fix
	constexpr uint64_t RocketTrail_m_bDamaged = 0xe3454e0ecc57da0f; // fix
	constexpr uint64_t RocketTrail_m_bEmit = 0x408d97a9177659c1; // fix
	constexpr uint64_t RocketTrail_m_flFlareScale = 0xb25d13ab40a1eefa; // fix
	constexpr uint64_t RocketTrail_m_nAttachment = 0x1982481684853bbb; // fix
	constexpr uint64_t SmokeTrail_m_EndColor = 0x73f22472780e9bde; // fix
	constexpr uint64_t SmokeTrail_m_EndSize = 0x1146422c186c6db9; // fix
	constexpr uint64_t SmokeTrail_m_MaxDirectedSpeed = 0x1a2fda9af45a31f3; // fix
	constexpr uint64_t SmokeTrail_m_MaxSpeed = 0xa278d95ec8d10aa5; // fix
	constexpr uint64_t SmokeTrail_m_MinDirectedSpeed = 0x189e183ccf03c56c; // fix
	constexpr uint64_t SmokeTrail_m_MinSpeed = 0xc49d968153a67dd7; // fix
	constexpr uint64_t SmokeTrail_m_Opacity = 0xdbd5889fe80c43f7; // fix
	constexpr uint64_t SmokeTrail_m_ParticleLifetime = 0x4084819e48778497; // fix
	constexpr uint64_t SmokeTrail_m_SpawnRadius = 0x218630731832e52d; // fix
	constexpr uint64_t SmokeTrail_m_SpawnRate = 0xc05a9c60122b013f; // fix
	constexpr uint64_t SmokeTrail_m_StartColor = 0xcf0b8144984ace95; // fix
	constexpr uint64_t SmokeTrail_m_StartSize = 0x7bfbf11fe7a86056; // fix
	constexpr uint64_t SmokeTrail_m_StopEmitTime = 0xc1860a08b012456; // fix
	constexpr uint64_t SmokeTrail_m_bEmit = 0x57fe6818ecef215e; // fix
	constexpr uint64_t SmokeTrail_m_nAttachment = 0x7f50c6d8658dea5b; // fix
	constexpr uint64_t SporeExplosion_m_bDontRemove = 0x19d8aa53a0ce5241; // fix
	constexpr uint64_t SporeExplosion_m_bEmit = 0x58e82619b407d4f3; // fix
	constexpr uint64_t SporeExplosion_m_flEndSize = 0xaa3d930fad5dfe13; // fix
	constexpr uint64_t SporeExplosion_m_flParticleLifetime = 0xe0ff7f502f732f11; // fix
	constexpr uint64_t SporeExplosion_m_flSpawnRadius = 0x46d0c3b07753525f; // fix
	constexpr uint64_t SporeExplosion_m_flSpawnRate = 0x3e3f47f9bb221c47; // fix
	constexpr uint64_t SporeExplosion_m_flStartSize = 0xf6b3333a1256bf61; // fix
	constexpr uint64_t SporeTrail_m_bEmit = 0x1794221dbd2ceba2; // fix
	constexpr uint64_t SporeTrail_m_flEndSize = 0x640a43a39f892bee; // fix
	constexpr uint64_t SporeTrail_m_flParticleLifetime = 0xed4df61520b49891; // fix
	constexpr uint64_t SporeTrail_m_flSpawnRadius = 0xec58d7c0b8086076; // fix
	constexpr uint64_t SporeTrail_m_flSpawnRate = 0xd2dc6af7689a62bc; // fix
	constexpr uint64_t SporeTrail_m_flStartSize = 0xe37e4ee12a358763; // fix
	constexpr uint64_t SporeTrail_m_vecEndColor = 0x4482e3d5b1226d76; // fix
	constexpr uint64_t string_CCSPlayer_m_bWaitForNoAttack = 0xda8116162cded828; // fix
	constexpr uint64_t string_CCSPlayer_m_iMoveState = 0x180ea4418b56add3; // fix
	constexpr uint64_t string_CCSPlayer_m_bStrafing = 0xee1abc1f24181c24; // fix
	constexpr uint64_t string_CCSPlayer_m_flVelocityModifier = 0x2d42d42c3dd915d2; // fix
	constexpr uint64_t string_CCSPlayer_m_flThirdpersonRecoil = 0xc9cad95330e73ec8; // fix
	constexpr uint64_t string_CBaseCSGrenade_m_fThrowTime = 0x3edefe45037cc076; // fix
	constexpr uint64_t string_CBaseCSGrenade_m_bIsHeldByPlayer = 0xcdf1ebdb459e659e; // fix

	enum class as_enum
	{
		INVALID, // fix
		interface_client, // fix
		interface_entity_list, // fix
		interface_engine, // fix
		interface_prediction, // fix
		interface_move_helper, // fix
		interface_game_movement, // fix
		interface_globals, // fix
		interface_model_info, // fix
		interface_model_render, // fix
		interface_material_system, // fix
		interface_render_view, // fix
		interface_cvar, // fix
		interface_view_render, // fix
		interface_view_render_beams, // fix
		interface_game_event_manager, // fix
		interface_input, // fix
		interface_surface_props, // fix
		interface_engine_trace, // fix
		interface_client_state, // fix
		interface_surface, // fix
		interface_memalloc, // fix
		interface_debug_overlay, // fix
		interface_glow_object_manager, // fix
		interface_panel, // fix
		interface_engine_sound, // fix
		interface_game_rules_proxy, // fix
		interface_weapon_system, // fix
		interface_inventory_manager, // fix
		interface_localize, // fix
		interface_hud, // fix
		interface_player_resource, // fix
		interface_client_leaf_system, // fix
		interface_effects, // fix
		interface_host_state, // fix
		interface_mdl_cache, // fix
		interface_studio_render, // fix
		interface_hardware_config, // fix
		interface_client_tools, // fix
		interface_string_tables, // fix
		interface_file_system, // fix
		interface_key_values_system, // fix
		interface_panoroama_ui_engine, // fix
		sig_set_abs_angles, // fix
		sig_set_abs_origin, // fix
		sig_update_anim_state, // fix
		sig_ret_to_cam_think, // fix
		sig_ret_to_draw_notify, // fix
		sig_ret_to_console_print, // fix
		sig_ret_to_add_notify, // fix
		sig_ret_to_draw_crosshair, // fix
		sig_standard_blending_rules, // fix
		sig_build_transformations, // fix
		sig_smoke_count, // fix
		sig_get_econ_item_view, // fix
		sig_get_sequence_act, // fix
		sig_invalidate_physics_recursive, // fix
		sig_is_breakable_entity, // fix
		sig_print_dev_console, // fix
		sig_find_element, // fix
		sig_physics_run_think, // fix
		sig_cmbat_get_econ_item_view, // fix
		sig_get_static_data, // fix
		sig_disable_post_processing, // fix
		sig_gc_client_system, // fix
		sig_lookup_bone, // fix
		sig_modifier_table, // fix
		sig_load_named_sky, // fix
		sig_reveal_ranks, // fix
		sig_set_clantag, // fix
		sig_deathnotice_check, // fix
		sig_clear_deathnotices, // fix
		sig_get_checksum, // fix
		sig_equip_glove, // fix
		sig_item_system, // fix
		sig_parse_kits_addr, // fix
		sig_util_traceline, // fix
		sig_cl_send_move_limit, // fix
		sig_is_ready, // fix
		sig_ret_to_setup_velocity, // fix
		sig_ret_to_post_data_update, // fix
		sig_ret_to_enable_inventory, // fix
		sig_interp_clamp, // fix
		sig_ret_to_trace_ray, // fix
		sig_ret_to_scope_arc, // fix
		sig_ret_to_scope_lens, // fix
		sig_post_process_params, // fix
		sig_ret_to_post_network_data_received, // fix
		sig_ret_to_add_viewmodel_stattrak, // fix
		sig_trace_to_studio_csgo_hitgroups_priority, // fix
		sig_should_skip_anim_frame_check, // fix
		sig_somelimit, // fix
		sig_cvar_check, // fix
		sig_cs_player_pred_map, // fix
		sig_base_cs_grenade_pred_map, // fix
		sig_decoy_map, // fix
		sig_he_map, // fix
		sig_molotov_map, // fix
		sig_sensor_map, // fix
		sig_smoke_map, // fix
		sig_flash_map, // fix
		sig_view_matrix, // fix
		sig_get_item_schema, // fix
		sig_econ_item_destructor, // fix
		sig_create_econ_item, // fix
		sig_animstate_reset, // fix
		sig_update_layer_order_preset, // fix
		sig_update_equipped_state, // fix
		sig_set_custom_name, // fix
		sig_set_custom_desc, // fix
		sig_set_dynamic_attribute_value, // fix
		sig_empty_mapping, // fix
		sig_simulation_tick, // fix
		sig_predictable, // fix
		sig_custom_materials, // fix
		sig_custom_material_initialized, // fix
		sig_visual_data_processors, // fix
		sig_spawn_time, // fix
		sig_ragdoll, // fix
		sig_lod_data, // fix
		sig_ik_context, // fix
		sig_snapshot_front, // fix
		sig_snapshot_back, // fix
		sig_blend_tick, // fix
		sig_get_follow_entity, // fix
		sig_last_client_fire_bullet_time, // fix
		sig_final_predicted_tick, // fix
		sig_occlusion_mask, // fix
		sig_anim_state, // fix
		sig_command_context, // fix
		sig_send_matching_sequence, // fix
		sig_sound_channels, // fix
		sig_activity_mapping, // fix
		sig_load_from_buffer, // fix
		sig_modifier_table_find, // fix
		sig_modifier_table_add_string, // fix
		sig_allocate_thread_id, // fix
		sig_game_tonemap_settings, // fix
		sig_length_disasm_game, // fix
		sig_get_active_weapon_pre// fix, // fix
		sig_get_layer_ideal_weight_from_sequence_cycle, // fix
		sig_on_simulation_time_changing, // fix
		sig_get_root_move_parent, // fix
		sig_ik_context_construct, // fix
		sig_ik_context_destruct, // fix
		sig_ik_context_init, // fix
		sig_ik_context_update_targets, // fix
		sig_ik_context_solve_dependencies, // fix
		sig_allocate_and_merge_bones, // fix
		sig_lookup_sequence, // fix
		sig_ammodef_get, // fix
		sig_get_any_sequence_anim_tag, // fix
		sig_accumulate_interleaved_dispatch_layers, // fix
		sig_process_sockets, // fix
		sig_sequence_hash_find_hash, // fix
		sig_activity_mapping_reinitialize, // fix
		sig_find_mapping, // fix
		sig_index_model_sequences, // fix
		sig_get_seq_desc, // fix
		sig_keyvalues_init, // fix
		sig_ret_is_box_visible, // fix
		sig_random_int, // fix
		sig_random_float, // fix
		sig_random_seed, // fix
		sig_var_mapping, // fix
		sig_free_thread_id, // fix
		sig_tls_slots, // fix
		sig_projectile_throwtime, // fix
		sig_init_materials, // fix
		sig_render_box, // fix
		sig_render_triangle, // fix
		sig_vertex_color_ignorez, // fix
		sig_cycle_offset, // fix
		sig_studio_hdr, // fix
		sig_anim_layers, // fix
		sig_is_ragdoll, // fix
		sig_bone_accessor, // fix
		sig_cl_move_rest, // fix
		sig_post_build_transformations, // fix
		sig_ret_to_post_build_transformations, // fix
		sig_collision_viewheight, // fix
		sig_collision_bounds_change_time, // fix
		sig_velocity_patch, // fix
		sig_kv_find_key, // fix
		sig_kv_set_string, // fix
		sig_surface_props, // fix
		sig_animstate_update_setabsagles, // fix
		sig_mdl_create, // fix
		sig_set_merged_mdl, // fix
		sig_setup_bones_attachment_queries, // fix
		sig_disable_render_target_allocation, // fix
		sig_get_sequence_flags, // fix
		sig_get_iron_sight_controller, // fix
		sig_enable_invalidate_bone_cache, // fix
		sig_line_goes_through_smoke, // fix
		sig_keyvalues_from_netsmg, // fix
		sig_model_bone_counter, // fix
		sig_most_recent_model_bone_counter, // fix
		sig_accumulated_bone_mask, // fix
		sig_ret_hitbox_to_world_transforms, // fix
		sig_emit_sound, // fix
		sig_add_to_dirty_kd_tree, // fix
		sig_get_player_viewmodel_arm_config_for_player_model, // fix
		sig_client_side_addons_mask, // fix
		sig_assassination_target_addon, // fix
		sig_update_addon_models, // fix
		sig_msg_voicedata_constructor, // fix
		sig_parse_svg, // fix
		sig_construct_image, // fix
		sig_load_text_file, // fix
		sig_econ_item_system, // fix
		sig_clear_hud_weapon_icon, // fix
		sig_skinchanger_spam_patch, // fix
		sig_cvar_vac_check, // fix
		sig_v8_try_catch_ctor, // fix
		sig_v8_try_catch_dtor, // fix
		sig_v8_handle_scope_ctor, // fix
		sig_v8_handle_scope_dtor, // fix
		sig_v8_handle_scope_create_handle, // fix
		sig_v8_context_enter, // fix
		sig_v8_context_exit, // fix
		sig_v8_isolate_enter, // fix
		sig_v8_isolate_exit, // fix
		sig_v8_array_get, // fix
		sig_v8_array_length, // fix
		sig_v8_object_get, // fix
		sig_v8_object_get_property_names, // fix
		sig_v8_value_is_boolean, // fix
		sig_v8_value_is_boolean_object, // fix
		sig_v8_value_is_number, // fix
		sig_v8_value_is_number_object, // fix
		sig_v8_value_is_string, // fix
		sig_v8_value_is_string_object, // fix
		sig_v8_value_is_object, // fix
		sig_v8_value_is_array, // fix
		sig_v8_value_is_function, // fix
		sig_v8_value_boolean_value, // fix
		sig_v8_value_number_value, // fix
		sig_v8_value_to_object, // fix
		sig_v8_string_utf8_ctor, // fix
		sig_v8_string_utf8_dtor, // fix
		sig_ui_engine_get_panel_context, // fix
		sig_ui_engine_compile, // fix
		sig_ui_engine_run_compiled_script, // fix
		hook_start_sound_immediate, // fix
		hook_set_bodygroup, // fix
		hook_modify_eye_pos, // fix
		hook_wnd_proc, // fix
		hook_create_move, // fix
		hook_cl_move, // fix
		hook_frame_stage_notify, // fix
		hook_on_latch_interp_var, // fix
		hook_draw_model_execute, // fix
		hook_render_view, // fix
		hook_level_init_post_entity, // fix
		hook_level_init_pre_entity, // fix
		hook_get_tonemap_settings_from_env_tonemap_controller, // fix
		hook_draw_3d_debug_overlays, // fix
		hook_shader_api_draw_mesh, // fix
		hook_is_box_visible, // fix
		hook_scene_end, // fix
		hook_calc_renderable_world_space_aabb_bloated, // fix
		hook_add_renderables_to_render_lists, // fix
		hook_do_post_screen_space_effects, // fix
		hook_present, // fix
		hook_reset, // fix
		hook_send_net_msg, // fix
		hook_override_view, // fix
		hook_paint_traverse, // fix
		hook_find_material, // fix
		hook_emit_sound, // fix
		hook_is_connected, // fix
		hook_lock_cursor, // fix
		hook_draw_set_color, // fix
		hook_test_hitboxes, // fix
		hook_setup_bones, // fix
		hook_animating_setup_bones, // fix
		hook_post_data_update, // fix
		hook_maintain_sequence_transitions, // fix
		hook_trace_ray, // fix
		hook_run_command, // fix
		hook_process_movement, // fix
		hook_transfer_data, // fix
		hook_perform_prediction, // fix
		hook_packet_start, // fix
		hook_level_shutdown, // fix
		hook_physics_simulate, // fix
		hook_estimate_abs_velocity, // fix
		hook_interpolate, // fix
		hook_reset_latched, // fix
		hook_send_weapon_anim, // fix
		hook_fire_event, // fix
		hook_do_animation_events, // fix
		hook_deploy, // fix
		hook_get_fov, // fix
		hook_effects, // fix
		hook_sequence, // fix
		hook_weapon_handle, // fix
		hook_simulation_time, // fix
		hook_general_float, // fix
		hook_general_vec, // fix
		hook_general_int, // fix
		hook_general_bool, // fix
		hook_layer_sequence, // fix
		hook_layer_cycle, // fix
		hook_layer_playback_rate, // fix
		hook_layer_weight, // fix
		hook_layer_weight_delta_rate, // fix
		hook_layer_order, // fix
		hook_convar_get_float_engine, // fix
		hook_convar_get_int_engine, // fix
		hook_convar_get_int_client, // fix
		hook_eye_position_and_vectors, // fix
		hook_obb_change_callback, // fix
		hook_server_cmd_key_values, // fix
		hook_calc_view, // fix
		hook_scale_mouse, // fix
		hook_convar_network_change_callback, // fix
		hook_reevauluate_anim_lod, // fix
		hook_start_sound, // fix
		hook_update_clientside_anim, // fix
		hook_do_animation_events_animating, // fix
		hook_get_default_fov, // fix
		hook_ent_info_list_link_before, // fix
		hook_extract_occluded_renderables, // fix
		hook_sv_msg_voicedata, // fix
		hook_hud_reticle_process_input, // fix
		hook_update_interp_vars, // fix
		hook_particle_draw_model, // fix
		CAI_BaseNPC_m_bFadeCorpse, // fix
		CAI_BaseNPC_m_bImportanRagdoll, // fix
		CAI_BaseNPC_m_bIsMoving, // fix
		CAI_BaseNPC_m_bPerformAvoidance, // fix
		CAI_BaseNPC_m_bSpeedModActive, // fix
		CAI_BaseNPC_m_flTimePingEffect, // fix
		CAI_BaseNPC_m_iDeathFrame, // fix
		CAI_BaseNPC_m_iDeathPose, // fix
		CAI_BaseNPC_m_iSpeedModRadius, // fix
		CAI_BaseNPC_m_iSpeedModSpeed, // fix
		CAI_BaseNPC_m_lifeState, // fix
		CBRC4Target_m_bBrokenOpen, // fix
		CBRC4Target_m_flRadius, // fix
		CBaseAnimating_m_ScaleType, // fix
		CBaseAnimating_m_bClientSideAnimation, // fix
		CBaseAnimating_m_bClientSideFrameReset, // fix
		CBaseAnimating_m_bClientSideRagdoll, // fix
		CBaseAnimating_m_bSuppressAnimSounds, // fix
		CBaseAnimating_m_flCycle, // fix
		CBaseAnimating_m_flEncodedController, // fix
		CBaseAnimating_m_flFrozen, // fix
		CBaseAnimating_m_flModelScale, // fix
		CBaseAnimating_m_flPlaybackRate, // fix
		CBaseAnimating_m_flPoseParameter, // fix
		CBaseAnimating_m_hLightingOrigin, // fix
		CBaseAnimating_m_nBody, // fix
		CBaseAnimating_m_nForceBone, // fix
		CBaseAnimating_m_nHighlightColorB, // fix
		CBaseAnimating_m_nHighlightColorG, // fix
		CBaseAnimating_m_nHighlightColorR, // fix
		CBaseAnimating_m_nHitboxSet, // fix
		CBaseAnimating_m_nMuzzleFlashParity, // fix
		CBaseAnimating_m_nNewSequenceParity, // fix
		CBaseAnimating_m_nResetEventsParity, // fix
		CBaseAnimating_m_nSequence, // fix
		CBaseAnimating_m_nSkin, // fix
		CBaseAnimating_m_vecForce, // fix
		CBaseAttributableItem_m_AttributeManager, // fix
		CBaseAttributableItem_m_Attributes, // fix
		CBaseAttributableItem_m_Item, // fix
		CBaseAttributableItem_m_NetworkedDynamicAttributesForDemos, // fix
		CBaseAttributableItem_m_OriginalOwnerXuidHigh, // fix
		CBaseAttributableItem_m_OriginalOwnerXuidLow, // fix
		CBaseAttributableItem_m_ProviderType, // fix
		CBaseAttributableItem_m_bInitialized, // fix
		CBaseAttributableItem_m_flFallbackWear, // fix
		CBaseAttributableItem_m_hOuter, // fix
		CBaseAttributableItem_m_iAccountID, // fix
		CBaseAttributableItem_m_iEntityLevel, // fix
		CBaseAttributableItem_m_iEntityQuality, // fix
		CBaseAttributableItem_m_iItemDefinitionIndex, // fix
		CBaseAttributableItem_m_iItemIDHigh, // fix
		CBaseAttributableItem_m_iItemIDLow, // fix
		CBaseAttributableItem_m_iReapplyProvisionParity, // fix
		CBaseAttributableItem_m_nFallbackPaintKit, // fix
		CBaseAttributableItem_m_nFallbackSeed, // fix
		CBaseAttributableItem_m_nFallbackStatTrak, // fix
		CBaseAttributableItem_m_szCustomName, // fix
		CBaseButton_m_usable, // fix
		CBaseCSGrenadeProjectile_m_nBounces, // fix
		CBaseCSGrenadeProjectile_m_nExplodeEffectIndex, // fix
		CBaseCSGrenadeProjectile_m_nExplodeEffectTickBegin, // fix
		CBaseCSGrenadeProjectile_m_vInitialVelocity, // fix
		CBaseCSGrenadeProjectile_m_vecExplodeEffectOrigin, // fix
		CBaseCSGrenade_m_bIsHeldByPlayer, // fix
		CBaseCSGrenade_m_bLoopingSoundPlaying, // fix
		CBaseCSGrenade_m_bPinPulled, // fix
		CBaseCSGrenade_m_bRedraw, // fix
		CBaseCSGrenade_m_fDropTime, // fix
		CBaseCSGrenade_m_fThrowTime, // fix
		CBaseCSGrenade_m_flThrowStrength, // fix
		CBaseCombatCharacter_m_LastHitGroup, // fix
		CBaseCombatCharacter_m_flNextAttack, // fix
		CBaseCombatCharacter_m_flTimeOfLastInjury, // fix
		CBaseCombatCharacter_m_hActiveWeapon, // fix
		CBaseCombatCharacter_m_hMyWeapons, // fix
		CBaseCombatCharacter_m_hMyWearables, // fix
		CBaseCombatCharacter_m_nRelativeDirectionOfLastInjury, // fix
		CBaseCombatWeapon_m_bFlipViewModel, // fix
		CBaseCombatWeapon_m_flNextPrimaryAttack, // fix
		CBaseCombatWeapon_m_flNextSecondaryAttack, // fix
		CBaseCombatWeapon_m_flTimeWeaponIdle, // fix
		CBaseCombatWeapon_m_hOwner, // fix
		CBaseCombatWeapon_m_hWeaponWorldModel, // fix
		CBaseCombatWeapon_m_iClip1, // fix
		CBaseCombatWeapon_m_iClip2, // fix
		CBaseCombatWeapon_m_iNumEmptyAttacks, // fix
		CBaseCombatWeapon_m_iPrimaryAmmoType, // fix
		CBaseCombatWeapon_m_iPrimaryReserveAmmoCount, // fix
		CBaseCombatWeapon_m_iSecondaryAmmoType, // fix
		CBaseCombatWeapon_m_iSecondaryReserveAmmoCount, // fix
		CBaseCombatWeapon_m_iState, // fix
		CBaseCombatWeapon_m_iViewModelIndex, // fix
		CBaseCombatWeapon_m_iWeaponModule, // fix
		CBaseCombatWeapon_m_iWeaponOrigin, // fix
		CBaseCombatWeapon_m_iWorldDroppedModelIndex, // fix
		CBaseCombatWeapon_m_iWorldModelIndex, // fix
		CBaseCombatWeapon_m_nNextThinkTick, // fix
		CBaseCombatWeapon_m_nViewModelIndex, // fix
		CBaseDoor_m_flWaveHeight, // fix
		CBaseEntity_m_Collision, // fix
		CBaseEntity_m_CollisionGroup, // fix
		CBaseEntity_m_angRotation, // fix
		CBaseEntity_m_bAlternateSorting, // fix
		CBaseEntity_m_bAnimatedEveryTick, // fix
		CBaseEntity_m_bEligibleForScreenHighlight, // fix
		CBaseEntity_m_bIsAutoaimTarget, // fix
		CBaseEntity_m_bSimulatedEveryTick, // fix
		CBaseEntity_m_bSpotted, // fix
		CBaseEntity_m_bSpottedBy, // fix
		CBaseEntity_m_bSpottedByMask, // fix
		CBaseEntity_m_cellX, // fix
		CBaseEntity_m_cellY, // fix
		CBaseEntity_m_cellZ, // fix
		CBaseEntity_m_cellbits, // fix
		CBaseEntity_m_clrRender, // fix
		CBaseEntity_m_fEffects, // fix
		CBaseEntity_m_fadeMaxDist, // fix
		CBaseEntity_m_fadeMinDist, // fix
		CBaseEntity_m_flAnimTime, // fix
		CBaseEntity_m_flElasticity, // fix
		CBaseEntity_m_flFadeScale, // fix
		CBaseEntity_m_flLastMadeNoiseTime, // fix
		CBaseEntity_m_flMaxFallVelocity, // fix
		CBaseEntity_m_flShadowCastDistance, // fix
		CBaseEntity_m_flSimulationTime, // fix
		CBaseEntity_m_flUseLookAtAngle, // fix
		CBaseEntity_m_hEffectEntity, // fix
		CBaseEntity_m_hOwnerEntity, // fix
		CBaseEntity_m_iName, // fix
		CBaseEntity_m_iParentAttachment, // fix
		CBaseEntity_m_iPendingTeamNum, // fix
		CBaseEntity_m_iTeamNum, // fix
		CBaseEntity_m_iTextureFrameIndex, // fix
		CBaseEntity_m_nMaxCPULevel, // fix
		CBaseEntity_m_nMaxGPULevel, // fix
		CBaseEntity_m_nMinCPULevel, // fix
		CBaseEntity_m_nMinGPULevel, // fix
		CBaseEntity_m_nModelIndex, // fix
		CBaseEntity_m_nRenderFX, // fix
		CBaseEntity_m_nRenderMode, // fix
		CBaseEntity_m_nSolidType, // fix
		CBaseEntity_m_nSurroundType, // fix
		CBaseEntity_m_triggerBloat, // fix
		CBaseEntity_m_usSolidFlags, // fix
		CBaseEntity_m_vecMaxs, // fix
		CBaseEntity_m_vecMins, // fix
		CBaseEntity_m_vecOrigin, // fix
		CBaseEntity_m_vecSpecifiedSurroundingMaxs, // fix
		CBaseEntity_m_vecSpecifiedSurroundingMins, // fix
		CBaseEntity_moveparent, // fix
		CBaseFlex_m_blinktoggle, // fix
		CBaseFlex_m_flexWeight, // fix
		CBaseFlex_m_viewtarget, // fix
		CBaseGrenade_m_DmgRadius, // fix
		CBaseGrenade_m_bIsLive, // fix
		CBaseGrenade_m_fFlags, // fix
		CBaseGrenade_m_flDamage, // fix
		CBaseGrenade_m_hThrower, // fix
		CBaseGrenade_m_vecVelocity, // fix
		CBasePlayer_deadflag, // fix
		CBasePlayer_m_Local, // fix
		CBasePlayer_m_PlayerFog_m_hCtrl, // fix
		CBasePlayer_m_afPhysicsFlags, // fix
		CBasePlayer_m_aimPunchAngle, // fix
		CBasePlayer_m_aimPunchAngleVel, // fix
		CBasePlayer_m_audio_entIndex, // fix
		CBasePlayer_m_audio_localBits, // fix
		CBasePlayer_m_audio_localSound_0_, // fix
		CBasePlayer_m_audio_localSound_1_, // fix
		CBasePlayer_m_audio_localSound_2_, // fix
		CBasePlayer_m_audio_localSound_3_, // fix
		CBasePlayer_m_audio_localSound_4_, // fix
		CBasePlayer_m_audio_localSound_5_, // fix
		CBasePlayer_m_audio_localSound_6_, // fix
		CBasePlayer_m_audio_localSound_7_, // fix
		CBasePlayer_m_audio_soundscapeIndex, // fix
		CBasePlayer_m_bActiveCameraMan, // fix
		CBasePlayer_m_bAllowAutoMovement, // fix
		CBasePlayer_m_bCameraManOverview, // fix
		CBasePlayer_m_bCameraManScoreBoard, // fix
		CBasePlayer_m_bCameraManXRay, // fix
		CBasePlayer_m_bConstraintPastRadius, // fix
		CBasePlayer_m_bDrawViewmodel, // fix
		CBasePlayer_m_bDucked, // fix
		CBasePlayer_m_bDucking, // fix
		CBasePlayer_m_bInDuckJump, // fix
		CBasePlayer_m_bPoisoned, // fix
		CBasePlayer_m_bShouldDrawPlayerWhileUsingViewEntity, // fix
		CBasePlayer_m_bWearingSuit, // fix
		CBasePlayer_m_chAreaBits, // fix
		CBasePlayer_m_chAreaPortalBits, // fix
		CBasePlayer_m_fFlags, // fix
		CBasePlayer_m_fForceTeam, // fix
		CBasePlayer_m_fOnTarget, // fix
		CBasePlayer_m_flConstraintRadius, // fix
		CBasePlayer_m_flConstraintSpeedFactor, // fix
		CBasePlayer_m_flConstraintWidth, // fix
		CBasePlayer_m_flDeathTime, // fix
		CBasePlayer_m_flDuckAmount, // fix
		CBasePlayer_m_flDuckSpeed, // fix
		CBasePlayer_m_flFOVRate, // fix
		CBasePlayer_m_flFOVTime, // fix
		CBasePlayer_m_flFallVelocity, // fix
		CBasePlayer_m_flFriction, // fix
		CBasePlayer_m_flLaggedMovementValue, // fix
		CBasePlayer_m_flLastDuckTime, // fix
		CBasePlayer_m_flMaxspeed, // fix
		CBasePlayer_m_flNextDecalTime, // fix
		CBasePlayer_m_flStepSize, // fix
		CBasePlayer_m_hColorCorrectionCtrl, // fix
		CBasePlayer_m_hConstraintEntity, // fix
		CBasePlayer_m_hGroundEntity, // fix
		CBasePlayer_m_hLastWeapon, // fix
		CBasePlayer_m_hObserverTarget, // fix
		CBasePlayer_m_hPostProcessCtrl, // fix
		CBasePlayer_m_hTonemapController, // fix
		CBasePlayer_m_hUseEntity, // fix
		CBasePlayer_m_hVehicle, // fix
		CBasePlayer_m_hViewEntity, // fix
		CBasePlayer_m_hViewModel_0_, // fix
		CBasePlayer_m_hZoomOwner, // fix
		CBasePlayer_m_iAmmo, // fix
		CBasePlayer_m_iBonusChallenge, // fix
		CBasePlayer_m_iBonusProgress, // fix
		CBasePlayer_m_iCoachingTeam, // fix
		CBasePlayer_m_iDeathPostEffect, // fix
		CBasePlayer_m_iDefaultFOV, // fix
		CBasePlayer_m_iFOV, // fix
		CBasePlayer_m_iFOVStart, // fix
		CBasePlayer_m_iHealth, // fix
		CBasePlayer_m_iHideHUD, // fix
		CBasePlayer_m_iObserverMode, // fix
		CBasePlayer_m_ladderSurfaceProps, // fix
		CBasePlayer_m_lifeState, // fix
		CBasePlayer_m_nDuckJumpTimeMsecs, // fix
		CBasePlayer_m_nDuckTimeMsecs, // fix
		CBasePlayer_m_nJumpTimeMsecs, // fix
		CBasePlayer_m_nNextThinkTick, // fix
		CBasePlayer_m_nOldButtons, // fix
		CBasePlayer_m_nTickBase, // fix
		CBasePlayer_m_nWaterLevel, // fix
		CBasePlayer_m_skybox3d_area, // fix
		CBasePlayer_m_skybox3d_fog_HDRColorScale, // fix
		CBasePlayer_m_skybox3d_fog_blend, // fix
		CBasePlayer_m_skybox3d_fog_colorPrimary, // fix
		CBasePlayer_m_skybox3d_fog_colorSecondary, // fix
		CBasePlayer_m_skybox3d_fog_dirPrimary, // fix
		CBasePlayer_m_skybox3d_fog_enable, // fix
		CBasePlayer_m_skybox3d_fog_end, // fix
		CBasePlayer_m_skybox3d_fog_maxdensity, // fix
		CBasePlayer_m_skybox3d_fog_start, // fix
		CBasePlayer_m_skybox3d_origin, // fix
		CBasePlayer_m_skybox3d_scale, // fix
		CBasePlayer_m_szLastPlaceName, // fix
		CBasePlayer_m_uCameraManGraphs, // fix
		CBasePlayer_m_ubEFNoInterpParity, // fix
		CBasePlayer_m_vecBaseVelocity, // fix
		CBasePlayer_m_vecConstraintCenter, // fix
		CBasePlayer_m_vecLadderNormal, // fix
		CBasePlayer_m_vecVelocity_0_, // fix
		CBasePlayer_m_vecVelocity_1_, // fix
		CBasePlayer_m_vecVelocity_2_, // fix
		CBasePlayer_m_vecViewOffset_0_, // fix
		CBasePlayer_m_vecViewOffset_1_, // fix
		CBasePlayer_m_vecViewOffset_2_, // fix
		CBasePlayer_m_viewPunchAngle, // fix
		CBasePlayer_m_vphysicsCollisionState, // fix
		CBasePlayer_pl, // fix
		CBaseTeamObjectiveResource_m_bBlocked, // fix
		CBaseTeamObjectiveResource_m_bCPIsVisible, // fix
		CBaseTeamObjectiveResource_m_bControlPointsReset, // fix
		CBaseTeamObjectiveResource_m_bInMiniRound, // fix
		CBaseTeamObjectiveResource_m_bPlayingMiniRounds, // fix
		CBaseTeamObjectiveResource_m_bTeamCanCap, // fix
		CBaseTeamObjectiveResource_m_flLazyCapPerc, // fix
		CBaseTeamObjectiveResource_m_flPathDistance, // fix
		CBaseTeamObjectiveResource_m_flTeamCapTime, // fix
		CBaseTeamObjectiveResource_m_iBaseControlPoints, // fix
		CBaseTeamObjectiveResource_m_iCappingTeam, // fix
		CBaseTeamObjectiveResource_m_iNumControlPoints, // fix
		CBaseTeamObjectiveResource_m_iNumTeamMembers, // fix
		CBaseTeamObjectiveResource_m_iOwner, // fix
		CBaseTeamObjectiveResource_m_iPreviousPoints, // fix
		CBaseTeamObjectiveResource_m_iStopWatchTimer, // fix
		CBaseTeamObjectiveResource_m_iTeamBaseIcons, // fix
		CBaseTeamObjectiveResource_m_iTeamIcons, // fix
		CBaseTeamObjectiveResource_m_iTeamInZone, // fix
		CBaseTeamObjectiveResource_m_iTeamOverlays, // fix
		CBaseTeamObjectiveResource_m_iTeamReqCappers, // fix
		CBaseTeamObjectiveResource_m_iTimerToShowInHUD, // fix
		CBaseTeamObjectiveResource_m_iUpdateCapHudParity, // fix
		CBaseTeamObjectiveResource_m_iWarnOnCap, // fix
		CBaseTeamObjectiveResource_m_iszWarnSound_0_, // fix
		CBaseTeamObjectiveResource_m_pszCapLayoutInHUD, // fix
		CBaseTeamObjectiveResource_m_vCPPositions_0_, // fix
		CBaseToggle_m_flMoveTargetTime, // fix
		CBaseToggle_m_movementType, // fix
		CBaseToggle_m_vecFinalDest, // fix
		CBaseTrigger_m_bClientSidePredicted, // fix
		CBaseTrigger_m_spawnflags, // fix
		CBaseViewModel_m_bShouldIgnoreOffsetAndAccuracy, // fix
		CBaseViewModel_m_fEffects, // fix
		CBaseViewModel_m_flPlaybackRate, // fix
		CBaseViewModel_m_hOwner, // fix
		CBaseViewModel_m_hWeapon, // fix
		CBaseViewModel_m_nAnimationParity, // fix
		CBaseViewModel_m_nBody, // fix
		CBaseViewModel_m_nModelIndex, // fix
		CBaseViewModel_m_nMuzzleFlashParity, // fix
		CBaseViewModel_m_nNewSequenceParity, // fix
		CBaseViewModel_m_nResetEventsParity, // fix
		CBaseViewModel_m_nSequence, // fix
		CBaseViewModel_m_nSkin, // fix
		CBaseViewModel_m_nViewModelIndex, // fix
		CBaseWeaponWorldModel_m_fEffects, // fix
		CBaseWeaponWorldModel_m_hCombatWeaponParent, // fix
		CBaseWeaponWorldModel_m_nBody, // fix
		CBaseWeaponWorldModel_m_nModelIndex, // fix
		CBaseWeaponWorldModel_moveparent, // fix
		CBeamSpotlight_m_bHasDynamicLight, // fix
		CBeamSpotlight_m_bSpotlightOn, // fix
		CBeamSpotlight_m_flHDRColorScale, // fix
		CBeamSpotlight_m_flRotationSpeed, // fix
		CBeamSpotlight_m_flSpotlightGoalWidth, // fix
		CBeamSpotlight_m_flSpotlightMaxLength, // fix
		CBeamSpotlight_m_nHaloIndex, // fix
		CBeamSpotlight_m_nRotationAxis, // fix
		CBeam_m_clrRender, // fix
		CBeam_m_fAmplitude, // fix
		CBeam_m_fEndWidth, // fix
		CBeam_m_fFadeLength, // fix
		CBeam_m_fHaloScale, // fix
		CBeam_m_fSpeed, // fix
		CBeam_m_fStartFrame, // fix
		CBeam_m_fWidth, // fix
		CBeam_m_flFrame, // fix
		CBeam_m_flFrameRate, // fix
		CBeam_m_flHDRColorScale, // fix
		CBeam_m_hAttachEntity, // fix
		CBeam_m_nAttachIndex, // fix
		CBeam_m_nBeamFlags, // fix
		CBeam_m_nBeamType, // fix
		CBeam_m_nClipStyle, // fix
		CBeam_m_nHaloIndex, // fix
		CBeam_m_nModelIndex, // fix
		CBeam_m_nNumBeamEnts, // fix
		CBeam_m_nRenderFX, // fix
		CBeam_m_nRenderMode, // fix
		CBeam_m_vecEndPos, // fix
		CBeam_m_vecOrigin, // fix
		CBeam_moveparent, // fix
		CBoneFollower_m_modelIndex, // fix
		CBoneFollower_m_solidIndex, // fix
		CBreachChargeProjectile_m_bShouldExplode, // fix
		CBreachChargeProjectile_m_nParentBoneIndex, // fix
		CBreachChargeProjectile_m_vecParentBonePos, // fix
		CBreachChargeProjectile_m_weaponThatThrewMe, // fix
		CBreakableProp_m_bClientPhysics, // fix
		CBreakableProp_m_qPreferredPlayerCarryAngles, // fix
		CBreakableSurface_m_RawPanelBitVec, // fix
		CBreakableSurface_m_bIsBroken, // fix
		CBreakableSurface_m_flPanelHeight, // fix
		CBreakableSurface_m_flPanelWidth, // fix
		CBreakableSurface_m_nNumHigh, // fix
		CBreakableSurface_m_nNumWide, // fix
		CBreakableSurface_m_nSurfaceType, // fix
		CBreakableSurface_m_vCorner, // fix
		CBreakableSurface_m_vNormal, // fix
		CBumpMineProjectile_m_bArmed, // fix
		CBumpMineProjectile_m_nParentBoneIndex, // fix
		CBumpMineProjectile_m_vecParentBonePos, // fix
		CC4_m_bBombPlacedAnimation, // fix
		CC4_m_bIsPlantingViaUse, // fix
		CC4_m_bShowC4LED, // fix
		CC4_m_bStartedArming, // fix
		CC4_m_fArmedTime, // fix
		CCSGameRulesProxy_m_GGProgressiveWeaponKillUpgradeOrderCT, // fix
		CCSGameRulesProxy_m_GGProgressiveWeaponKillUpgradeOrderT, // fix
		CCSGameRulesProxy_m_GGProgressiveWeaponOrderCT, // fix
		CCSGameRulesProxy_m_GGProgressiveWeaponOrderT, // fix
		CCSGameRulesProxy_m_MatchDevice, // fix
		CCSGameRulesProxy_m_RetakeRules, // fix
		CCSGameRulesProxy_m_SpawnTileState, // fix
		CCSGameRulesProxy_m_SurvivalGameRuleDecisionTypes, // fix
		CCSGameRulesProxy_m_SurvivalGameRuleDecisionValues, // fix
		CCSGameRulesProxy_m_SurvivalRules, // fix
		CCSGameRulesProxy_m_TeamRespawnWaveTimes, // fix
		CCSGameRulesProxy_m_arrFeaturedGiftersAccounts, // fix
		CCSGameRulesProxy_m_arrFeaturedGiftersGifts, // fix
		CCSGameRulesProxy_m_arrProhibitedItemIndices, // fix
		CCSGameRulesProxy_m_arrTournamentActiveCasterAccounts, // fix
		CCSGameRulesProxy_m_bAnyHostageReached, // fix
		CCSGameRulesProxy_m_bBlockersPresent, // fix
		CCSGameRulesProxy_m_bBombDropped, // fix
		CCSGameRulesProxy_m_bBombPlanted, // fix
		CCSGameRulesProxy_m_bCTCantBuy, // fix
		CCSGameRulesProxy_m_bCTTimeOutActive, // fix
		CCSGameRulesProxy_m_bDMBonusActive, // fix
		CCSGameRulesProxy_m_bFreezePeriod, // fix
		CCSGameRulesProxy_m_bGameRestart, // fix
		CCSGameRulesProxy_m_bHasMatchStarted, // fix
		CCSGameRulesProxy_m_bIsDroppingItems, // fix
		CCSGameRulesProxy_m_bIsQuestEligible, // fix
		CCSGameRulesProxy_m_bIsQueuedMatchmaking, // fix
		CCSGameRulesProxy_m_bIsValveDS, // fix
		CCSGameRulesProxy_m_bLogoMap, // fix
		CCSGameRulesProxy_m_bMapHasBombTarget, // fix
		CCSGameRulesProxy_m_bMapHasBuyZone, // fix
		CCSGameRulesProxy_m_bMapHasRescueZone, // fix
		CCSGameRulesProxy_m_bMatchWaitingForResume, // fix
		CCSGameRulesProxy_m_bPlayAllStepSoundsOnServer, // fix
		CCSGameRulesProxy_m_bRoundInProgress, // fix
		CCSGameRulesProxy_m_bTCantBuy, // fix
		CCSGameRulesProxy_m_bTechnicalTimeOut, // fix
		CCSGameRulesProxy_m_bTerroristTimeOutActive, // fix
		CCSGameRulesProxy_m_bWarmupPeriod, // fix
		CCSGameRulesProxy_m_eRoundWinReason, // fix
		CCSGameRulesProxy_m_fMatchStartTime, // fix
		CCSGameRulesProxy_m_fRoundStartTime, // fix
		CCSGameRulesProxy_m_fWarmupPeriodEnd, // fix
		CCSGameRulesProxy_m_fWarmupPeriodStart, // fix
		CCSGameRulesProxy_m_flCMMItemDropRevealEndTime, // fix
		CCSGameRulesProxy_m_flCMMItemDropRevealStartTime, // fix
		CCSGameRulesProxy_m_flCTTimeOutRemaining, // fix
		CCSGameRulesProxy_m_flDMBonusStartTime, // fix
		CCSGameRulesProxy_m_flDMBonusTimeLength, // fix
		CCSGameRulesProxy_m_flGameStartTime, // fix
		CCSGameRulesProxy_m_flGuardianBuyUntilTime, // fix
		CCSGameRulesProxy_m_flNextRespawnWave, // fix
		CCSGameRulesProxy_m_flRestartRoundTime, // fix
		CCSGameRulesProxy_m_flSpawnSelectionTimeEnd, // fix
		CCSGameRulesProxy_m_flSpawnSelectionTimeLoadout, // fix
		CCSGameRulesProxy_m_flSpawnSelectionTimeStart, // fix
		CCSGameRulesProxy_m_flSurvivalStartTime, // fix
		CCSGameRulesProxy_m_flTabletHexOriginX, // fix
		CCSGameRulesProxy_m_flTabletHexOriginY, // fix
		CCSGameRulesProxy_m_flTabletHexSize, // fix
		CCSGameRulesProxy_m_flTerroristTimeOutRemaining, // fix
		CCSGameRulesProxy_m_gamePhase, // fix
		CCSGameRulesProxy_m_iActiveAssassinationTargetMissionID, // fix
		CCSGameRulesProxy_m_iBombSite, // fix
		CCSGameRulesProxy_m_iFirstSecondHalfRound, // fix
		CCSGameRulesProxy_m_iHostagesRemaining, // fix
		CCSGameRulesProxy_m_iMatchStats_PlayersAlive_CT, // fix
		CCSGameRulesProxy_m_iMatchStats_PlayersAlive_T, // fix
		CCSGameRulesProxy_m_iMatchStats_RoundResults, // fix
		CCSGameRulesProxy_m_iNumConsecutiveCTLoses, // fix
		CCSGameRulesProxy_m_iNumConsecutiveTerroristLoses, // fix
		CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsCT, // fix
		CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsT, // fix
		CCSGameRulesProxy_m_iPlayerSpawnHexIndices, // fix
		CCSGameRulesProxy_m_iRoundTime, // fix
		CCSGameRulesProxy_m_iRoundWinStatus, // fix
		CCSGameRulesProxy_m_iSpectatorSlotCount, // fix
		CCSGameRulesProxy_m_nCTTimeOuts, // fix
		CCSGameRulesProxy_m_nEndMatchMapGroupVoteOptions, // fix
		CCSGameRulesProxy_m_nEndMatchMapGroupVoteTypes, // fix
		CCSGameRulesProxy_m_nEndMatchMapVoteWinner, // fix
		CCSGameRulesProxy_m_nGuardianModeSpecialKillsRemaining, // fix
		CCSGameRulesProxy_m_nGuardianModeSpecialWeaponNeeded, // fix
		CCSGameRulesProxy_m_nGuardianModeWaveNumber, // fix
		CCSGameRulesProxy_m_nHalloweenMaskListSeed, // fix
		CCSGameRulesProxy_m_nMatchSeed, // fix
		CCSGameRulesProxy_m_nNextMapInMapgroup, // fix
		CCSGameRulesProxy_m_nOvertimePlaying, // fix
		CCSGameRulesProxy_m_nQueuedMatchmakingMode, // fix
		CCSGameRulesProxy_m_nTerroristTimeOuts, // fix
		CCSGameRulesProxy_m_nTournamentPredictionsPct, // fix
		CCSGameRulesProxy_m_numBestOfMaps, // fix
		CCSGameRulesProxy_m_numGlobalGifters, // fix
		CCSGameRulesProxy_m_numGlobalGiftsGiven, // fix
		CCSGameRulesProxy_m_numGlobalGiftsPeriodSeconds, // fix
		CCSGameRulesProxy_m_roundData_playerPositions, // fix
		CCSGameRulesProxy_m_roundData_playerTeams, // fix
		CCSGameRulesProxy_m_roundData_playerXuids, // fix
		CCSGameRulesProxy_m_spawnStage, // fix
		CCSGameRulesProxy_m_szMatchStatTxt, // fix
		CCSGameRulesProxy_m_szTournamentEventName, // fix
		CCSGameRulesProxy_m_szTournamentEventStage, // fix
		CCSGameRulesProxy_m_szTournamentPredictionsTxt, // fix
		CCSGameRulesProxy_m_timeUntilNextPhaseStarts, // fix
		CCSGameRulesProxy_m_totalRoundsPlayed, // fix
		CCSGameRulesProxy_m_unDMBonusWeaponLoadoutSlot, // fix
		CCSGameRulesProxy_m_vecPlayAreaMaxs, // fix
		CCSGameRulesProxy_m_vecPlayAreaMins, // fix
		CCSPlayerResource_m_bControllingBot, // fix
		CCSPlayerResource_m_bEndMatchNextMapAllVoted, // fix
		CCSPlayerResource_m_bHasCommunicationAbuseMute, // fix
		CCSPlayerResource_m_bHasDefuser, // fix
		CCSPlayerResource_m_bHasHelmet, // fix
		CCSPlayerResource_m_bHostageAlive, // fix
		CCSPlayerResource_m_bombsiteCenterA, // fix
		CCSPlayerResource_m_bombsiteCenterB, // fix
		CCSPlayerResource_m_hostageRescueX, // fix
		CCSPlayerResource_m_hostageRescueY, // fix
		CCSPlayerResource_m_hostageRescueZ, // fix
		CCSPlayerResource_m_iArmor, // fix
		CCSPlayerResource_m_iBotDifficulty, // fix
		CCSPlayerResource_m_iCashSpentThisRound, // fix
		CCSPlayerResource_m_iCompTeammateColor, // fix
		CCSPlayerResource_m_iCompetitiveRankType, // fix
		CCSPlayerResource_m_iCompetitiveRanking, // fix
		CCSPlayerResource_m_iCompetitiveWins, // fix
		CCSPlayerResource_m_iControlledByPlayer, // fix
		CCSPlayerResource_m_iControlledPlayer, // fix
		CCSPlayerResource_m_iGunGameLevel, // fix
		CCSPlayerResource_m_iHostageEntityIDs, // fix
		CCSPlayerResource_m_iLifetimeEnd, // fix
		CCSPlayerResource_m_iLifetimeStart, // fix
		CCSPlayerResource_m_iMVPs, // fix
		CCSPlayerResource_m_iMatchStats_3k_Total, // fix
		CCSPlayerResource_m_iMatchStats_4k_Total, // fix
		CCSPlayerResource_m_iMatchStats_5k_Total, // fix
		CCSPlayerResource_m_iMatchStats_Assists_Total, // fix
		CCSPlayerResource_m_iMatchStats_CashEarned_Total, // fix
		CCSPlayerResource_m_iMatchStats_Damage_Total, // fix
		CCSPlayerResource_m_iMatchStats_Deaths_Total, // fix
		CCSPlayerResource_m_iMatchStats_EnemiesFlashed_Total, // fix
		CCSPlayerResource_m_iMatchStats_EquipmentValue_Total, // fix
		CCSPlayerResource_m_iMatchStats_HeadShotKills_Total, // fix
		CCSPlayerResource_m_iMatchStats_KillReward_Total, // fix
		CCSPlayerResource_m_iMatchStats_Kills_Total, // fix
		CCSPlayerResource_m_iMatchStats_LiveTime_Total, // fix
		CCSPlayerResource_m_iMatchStats_Objective_Total, // fix
		CCSPlayerResource_m_iMatchStats_UtilityDamage_Total, // fix
		CCSPlayerResource_m_iPlayerC4, // fix
		CCSPlayerResource_m_iPlayerVIP, // fix
		CCSPlayerResource_m_iScore, // fix
		CCSPlayerResource_m_iTotalCashSpent, // fix
		CCSPlayerResource_m_isHostageFollowingSomeone, // fix
		CCSPlayerResource_m_nActiveCoinRank, // fix
		CCSPlayerResource_m_nCharacterDefIndex, // fix
		CCSPlayerResource_m_nEndMatchNextMapVotes, // fix
		CCSPlayerResource_m_nMusicID, // fix
		CCSPlayerResource_m_nPersonaDataPublicCommendsFriendly, // fix
		CCSPlayerResource_m_nPersonaDataPublicCommendsLeader, // fix
		CCSPlayerResource_m_nPersonaDataPublicCommendsTeacher, // fix
		CCSPlayerResource_m_nPersonaDataPublicLevel, // fix
		CCSPlayerResource_m_szClan, // fix
		CCSPlayerResource_m_szCrosshairCodes, // fix
		CCSPlayer_m_ArmorValue, // fix
		CCSPlayer_m_EquippedLoadoutItemDefIndices, // fix
		CCSPlayer_m_RetakesMVPBoostExtraUtility, // fix
		CCSPlayer_m_angEyeAngles, // fix
		CCSPlayer_m_angEyeAngles_0_, // fix
		CCSPlayer_m_angEyeAngles_1_, // fix
		CCSPlayer_m_bCanControlObservedBot, // fix
		CCSPlayer_m_bCanMoveDuringFreezePeriod, // fix
		CCSPlayer_m_bDuckOverride, // fix
		CCSPlayer_m_bGunGameImmunity, // fix
		CCSPlayer_m_bHasControlledBotThisRound, // fix
		CCSPlayer_m_bHasDefuser, // fix
		CCSPlayer_m_bHasHeavyArmor, // fix
		CCSPlayer_m_bHasHelmet, // fix
		CCSPlayer_m_bHasMovedSinceSpawn, // fix
		CCSPlayer_m_bHasNightVision, // fix
		CCSPlayer_m_bHasParachute, // fix
		CCSPlayer_m_bHideTargetID, // fix
		CCSPlayer_m_bHud_MiniScoreHidden, // fix
		CCSPlayer_m_bHud_RadarHidden, // fix
		CCSPlayer_m_bInBombZone, // fix
		CCSPlayer_m_bInBuyZone, // fix
		CCSPlayer_m_bInHostageRescueZone, // fix
		CCSPlayer_m_bInNoDefuseArea, // fix
		CCSPlayer_m_bIsAssassinationTarget, // fix
		CCSPlayer_m_bIsControllingBot, // fix
		CCSPlayer_m_bIsDefusing, // fix
		CCSPlayer_m_bIsGrabbingHostage, // fix
		CCSPlayer_m_bIsHoldingLookAtWeapon, // fix
		CCSPlayer_m_bIsLookingAtWeapon, // fix
		CCSPlayer_m_bIsPlayerGhost, // fix
		CCSPlayer_m_bIsRescuing, // fix
		CCSPlayer_m_bIsRespawningForDMBonus, // fix
		CCSPlayer_m_bIsScoped, // fix
		CCSPlayer_m_bIsSpawnRappelling, // fix
		CCSPlayer_m_bIsWalking, // fix
		CCSPlayer_m_bKilledByTaser, // fix
		CCSPlayer_m_bMadeFinalGunGameProgressiveKill, // fix
		CCSPlayer_m_bNightVisionOn, // fix
		CCSPlayer_m_bPlayerDominated, // fix
		CCSPlayer_m_bPlayerDominatingMe, // fix
		CCSPlayer_m_bResumeZoom, // fix
		CCSPlayer_m_bRetakesHasDefuseKit, // fix
		CCSPlayer_m_bRetakesMVPLastRound, // fix
		CCSPlayer_m_bStrafing, // fix
		CCSPlayer_m_bWaitForNoAttack, // fix
		CCSPlayer_m_cycleLatch, // fix
		CCSPlayer_m_fImmuneToGunGameDamageTime, // fix
		CCSPlayer_m_fMolotovDamageTime, // fix
		CCSPlayer_m_fMolotovUseTime, // fix
		CCSPlayer_m_flAutoMoveStartTime, // fix
		CCSPlayer_m_flAutoMoveTargetTime, // fix
		CCSPlayer_m_flDetectedByEnemySensorTime, // fix
		CCSPlayer_m_flFlashDuration, // fix
		CCSPlayer_m_flFlashMaxAlpha, // fix
		CCSPlayer_m_flGroundAccelLinearFracLastTime, // fix
		CCSPlayer_m_flGuardianTooFarDistFrac, // fix
		CCSPlayer_m_flHealthShotBoostExpirationTime, // fix
		CCSPlayer_m_flLastExoJumpTime, // fix
		CCSPlayer_m_flLowerBodyYawTarget, // fix
		CCSPlayer_m_flProgressBarStartTime, // fix
		CCSPlayer_m_flStamina, // fix
		CCSPlayer_m_flThirdpersonRecoil, // fix
		CCSPlayer_m_flVelocityModifier, // fix
		CCSPlayer_m_hCarriedHostage, // fix
		CCSPlayer_m_hCarriedHostageProp, // fix
		CCSPlayer_m_hPlayerPing, // fix
		CCSPlayer_m_hRagdoll, // fix
		CCSPlayer_m_hSurvivalAssassinationTarget, // fix
		CCSPlayer_m_iAccount, // fix
		CCSPlayer_m_iAddonBits, // fix
		CCSPlayer_m_iBlockingUseActionInProgress, // fix
		CCSPlayer_m_iClass, // fix
		CCSPlayer_m_iControlledBotEntIndex, // fix
		CCSPlayer_m_iDirection, // fix
		CCSPlayer_m_iGunGameProgressiveWeaponIndex, // fix
		CCSPlayer_m_iMatchStats_Assists, // fix
		CCSPlayer_m_iMatchStats_CashEarned, // fix
		CCSPlayer_m_iMatchStats_Damage, // fix
		CCSPlayer_m_iMatchStats_Deaths, // fix
		CCSPlayer_m_iMatchStats_EnemiesFlashed, // fix
		CCSPlayer_m_iMatchStats_EquipmentValue, // fix
		CCSPlayer_m_iMatchStats_HeadShotKills, // fix
		CCSPlayer_m_iMatchStats_KillReward, // fix
		CCSPlayer_m_iMatchStats_Kills, // fix
		CCSPlayer_m_iMatchStats_LiveTime, // fix
		CCSPlayer_m_iMatchStats_MoneySaved, // fix
		CCSPlayer_m_iMatchStats_Objective, // fix
		CCSPlayer_m_iMatchStats_UtilityDamage, // fix
		CCSPlayer_m_iMoveState, // fix
		CCSPlayer_m_iNumGunGameKillsWithCurrentWeapon, // fix
		CCSPlayer_m_iNumGunGameTRKillPoints, // fix
		CCSPlayer_m_iNumRoundKills, // fix
		CCSPlayer_m_iNumRoundKillsHeadshots, // fix
		CCSPlayer_m_iPlayerState, // fix
		CCSPlayer_m_iPrimaryAddon, // fix
		CCSPlayer_m_iProgressBarDuration, // fix
		CCSPlayer_m_iRetakesMVPBoostItem, // fix
		CCSPlayer_m_iRetakesOffering, // fix
		CCSPlayer_m_iRetakesOfferingCard, // fix
		CCSPlayer_m_iSecondaryAddon, // fix
		CCSPlayer_m_iShotsFired, // fix
		CCSPlayer_m_iStartAccount, // fix
		CCSPlayer_m_iThrowGrenadeCounter, // fix
		CCSPlayer_m_iWeaponPurchasesThisMatch, // fix
		CCSPlayer_m_iWeaponPurchasesThisRound, // fix
		CCSPlayer_m_isCurrentGunGameLeader, // fix
		CCSPlayer_m_isCurrentGunGameTeamLeader, // fix
		CCSPlayer_m_nDeathCamMusic, // fix
		CCSPlayer_m_nHeavyAssaultSuitCooldownRemaining, // fix
		CCSPlayer_m_nIsAutoMounting, // fix
		CCSPlayer_m_nLastConcurrentKilled, // fix
		CCSPlayer_m_nLastKillerIndex, // fix
		CCSPlayer_m_nNumFastDucks, // fix
		CCSPlayer_m_nQuestProgressReason, // fix
		CCSPlayer_m_nSurvivalTeam, // fix
		CCSPlayer_m_passiveItems, // fix
		CCSPlayer_m_rank, // fix
		CCSPlayer_m_szArmsModel, // fix
		CCSPlayer_m_totalHitsOnServer, // fix
		CCSPlayer_m_unActiveQuestId, // fix
		CCSPlayer_m_unCurrentEquipmentValue, // fix
		CCSPlayer_m_unFreezetimeEndEquipmentValue, // fix
		CCSPlayer_m_unMusicID, // fix
		CCSPlayer_m_unPlayerTvControlFlags, // fix
		CCSPlayer_m_unRoundStartEquipmentValue, // fix
		CCSPlayer_m_unTotalRoundDamageDealt, // fix
		CCSPlayer_m_vecAutomoveTargetEnd, // fix
		CCSPlayer_m_vecOrigin, // fix
		CCSPlayer_m_vecOrigin_2_, // fix
		CCSPlayer_m_vecPlayerPatchEconIndices, // fix
		CCSPlayer_m_vecSpawnRappellingRopeOrigin, // fix
		CCSRagdoll_m_bClientSideAnimation, // fix
		CCSRagdoll_m_bDiedAirborne, // fix
		CCSRagdoll_m_flAbsYaw, // fix
		CCSRagdoll_m_flDeathYaw, // fix
		CCSRagdoll_m_hPlayer, // fix
		CCSRagdoll_m_iDeathFrame, // fix
		CCSRagdoll_m_iDeathPose, // fix
		CCSRagdoll_m_iTeamNum, // fix
		CCSRagdoll_m_nForceBone, // fix
		CCSRagdoll_m_nModelIndex, // fix
		CCSRagdoll_m_vecForce, // fix
		CCSRagdoll_m_vecOrigin, // fix
		CCSRagdoll_m_vecRagdollOrigin, // fix
		CCSRagdoll_m_vecRagdollVelocity, // fix
		CCascadeLight_m_LightColor, // fix
		CCascadeLight_m_LightColorScale, // fix
		CCascadeLight_m_bEnabled, // fix
		CCascadeLight_m_bUseLightEnvAngles, // fix
		CCascadeLight_m_envLightShadowDirection, // fix
		CCascadeLight_m_flMaxShadowDist, // fix
		CCascadeLight_m_shadowDirection, // fix
		CChicken_m_jumpedThisFrame, // fix
		CChicken_m_leader, // fix
		CColorCorrectionVolume_m_FadeDuration, // fix
		CColorCorrectionVolume_m_MaxWeight, // fix
		CColorCorrectionVolume_m_Weight, // fix
		CColorCorrectionVolume_m_bEnabled, // fix
		CColorCorrectionVolume_m_lookupFilename, // fix
		CColorCorrection_m_bClientSide, // fix
		CColorCorrection_m_bEnabled, // fix
		CColorCorrection_m_bExclusive, // fix
		CColorCorrection_m_bMaster, // fix
		CColorCorrection_m_flCurWeight, // fix
		CColorCorrection_m_flFadeInDuration, // fix
		CColorCorrection_m_flFadeOutDuration, // fix
		CColorCorrection_m_flMaxWeight, // fix
		CColorCorrection_m_maxFalloff, // fix
		CColorCorrection_m_minFalloff, // fix
		CColorCorrection_m_netLookupFilename, // fix
		CColorCorrection_m_vecOrigin, // fix
		CDangerZoneController_m_DangerZones, // fix
		CDangerZoneController_m_bDangerZoneControllerEnabled, // fix
		CDangerZoneController_m_bMissionControlledExplosions, // fix
		CDangerZoneController_m_flFinalExpansionTime, // fix
		CDangerZoneController_m_flStartTime, // fix
		CDangerZoneController_m_flWaveEndTimes, // fix
		CDangerZoneController_m_hTheFinalZone, // fix
		CDangerZoneController_m_vecEndGameCircleEnd, // fix
		CDangerZoneController_m_vecEndGameCircleStart, // fix
		CDangerZone_m_flBombLaunchTime, // fix
		CDangerZone_m_flExtraRadius, // fix
		CDangerZone_m_flExtraRadiusStartTime, // fix
		CDangerZone_m_flExtraRadiusTotalLerpTime, // fix
		CDangerZone_m_iWave, // fix
		CDangerZone_m_nDropOrder, // fix
		CDangerZone_m_vecDangerZoneOriginStartedAt, // fix
		CDrone_m_bPilotTakeoverAllowed, // fix
		CDrone_m_hCurrentPilot, // fix
		CDrone_m_hDeliveryCargo, // fix
		CDrone_m_hMoveToThisEntity, // fix
		CDrone_m_hPotentialCargo, // fix
		CDrone_m_vecTagIncrements_0_, // fix
		CDrone_m_vecTagPositions_0_, // fix
		CDronegun_m_bHasTarget, // fix
		CDronegun_m_iHealth, // fix
		CDronegun_m_vecAttentionTarget, // fix
		CDronegun_m_vecTargetOffset, // fix
		CDynamicLight_m_Exponent, // fix
		CDynamicLight_m_Flags, // fix
		CDynamicLight_m_InnerAngle, // fix
		CDynamicLight_m_LightStyle, // fix
		CDynamicLight_m_OuterAngle, // fix
		CDynamicLight_m_Radius, // fix
		CDynamicLight_m_SpotRadius, // fix
		CDynamicProp_m_bShouldGlow, // fix
		CDynamicProp_m_bUseHitboxesForRenderBox, // fix
		CDynamicProp_m_clrGlow, // fix
		CDynamicProp_m_flGlowMaxDist, // fix
		CDynamicProp_m_nGlowStyle, // fix
		CEconEntity_m_AttributeManager, // fix
		CEconEntity_m_Attributes, // fix
		CEconEntity_m_Item, // fix
		CEconEntity_m_NetworkedDynamicAttributesForDemos, // fix
		CEconEntity_m_OriginalOwnerXuidHigh, // fix
		CEconEntity_m_OriginalOwnerXuidLow, // fix
		CEconEntity_m_ProviderType, // fix
		CEconEntity_m_bInitialized, // fix
		CEconEntity_m_flFallbackWear, // fix
		CEconEntity_m_hOuter, // fix
		CEconEntity_m_iAccountID, // fix
		CEconEntity_m_iEntityLevel, // fix
		CEconEntity_m_iEntityQuality, // fix
		CEconEntity_m_iItemDefinitionIndex, // fix
		CEconEntity_m_iItemIDHigh, // fix
		CEconEntity_m_iItemIDLow, // fix
		CEconEntity_m_iReapplyProvisionParity, // fix
		CEconEntity_m_nFallbackPaintKit, // fix
		CEconEntity_m_nFallbackSeed, // fix
		CEconEntity_m_nFallbackStatTrak, // fix
		CEconEntity_m_szCustomName, // fix
		CEmbers_m_bEmit, // fix
		CEmbers_m_nDensity, // fix
		CEmbers_m_nLifetime, // fix
		CEmbers_m_nSpeed, // fix
		CEntityDissolve_m_flFadeInLength, // fix
		CEntityDissolve_m_flFadeInStart, // fix
		CEntityDissolve_m_flFadeOutLength, // fix
		CEntityDissolve_m_flFadeOutModelLength, // fix
		CEntityDissolve_m_flFadeOutModelStart, // fix
		CEntityDissolve_m_flFadeOutStart, // fix
		CEntityDissolve_m_flStartTime, // fix
		CEntityDissolve_m_nDissolveType, // fix
		CEntityDissolve_m_nMagnitude, // fix
		CEntityDissolve_m_vDissolverOrigin, // fix
		CEntityFlame_m_bCheapEffect, // fix
		CEntityFlame_m_hEntAttached, // fix
		CEntityFreezing_m_bFinishFreezing, // fix
		CEntityFreezing_m_flFrozen, // fix
		CEntityFreezing_m_flFrozenPerHitbox, // fix
		CEntityFreezing_m_vFreezingOrigin, // fix
		CEntityParticleTrail_m_Info, // fix
		CEntityParticleTrail_m_flEndSize, // fix
		CEntityParticleTrail_m_flLifetime, // fix
		CEntityParticleTrail_m_flStartSize, // fix
		CEntityParticleTrail_m_hConstraintEntity, // fix
		CEntityParticleTrail_m_iMaterialName, // fix
		CEnvAmbientLight_m_vecColor, // fix
		CEnvDOFController_m_bDOFEnabled, // fix
		CEnvDOFController_m_flFarBlurDepth, // fix
		CEnvDOFController_m_flFarBlurRadius, // fix
		CEnvDOFController_m_flFarFocusDepth, // fix
		CEnvDOFController_m_flNearBlurDepth, // fix
		CEnvDOFController_m_flNearBlurRadius, // fix
		CEnvDOFController_m_flNearFocusDepth, // fix
		CEnvDetailController_m_flFadeEndDist, // fix
		CEnvDetailController_m_flFadeStartDist, // fix
		CEnvGasCanister_m_bDoImpactEffects, // fix
		CEnvGasCanister_m_bInSkybox, // fix
		CEnvGasCanister_m_bLanded, // fix
		CEnvGasCanister_m_bLaunchedFromWithinWorld, // fix
		CEnvGasCanister_m_flFlightSpeed, // fix
		CEnvGasCanister_m_flFlightTime, // fix
		CEnvGasCanister_m_flHorizSpeed, // fix
		CEnvGasCanister_m_flInitialZSpeed, // fix
		CEnvGasCanister_m_flLaunchTime, // fix
		CEnvGasCanister_m_flSkyboxScale, // fix
		CEnvGasCanister_m_flWorldEnterTime, // fix
		CEnvGasCanister_m_flZAcceleration, // fix
		CEnvGasCanister_m_hSkyboxCopy, // fix
		CEnvGasCanister_m_nMyZoneIndex, // fix
		CEnvGasCanister_m_vecDirection, // fix
		CEnvGasCanister_m_vecEnterWorldPosition, // fix
		CEnvGasCanister_m_vecImpactPosition, // fix
		CEnvGasCanister_m_vecOrigin, // fix
		CEnvGasCanister_m_vecOrigin_2_, // fix
		CEnvGasCanister_m_vecParabolaDirection, // fix
		CEnvGasCanister_m_vecSkyboxOrigin, // fix
		CEnvGasCanister_m_vecStartAngles, // fix
		CEnvGasCanister_m_vecStartPosition, // fix
		CEnvParticleScript_m_flSequenceScale, // fix
		CEnvProjectedTexture_m_LightColor, // fix
		CEnvProjectedTexture_m_SpotlightTextureName, // fix
		CEnvProjectedTexture_m_bAlwaysUpdate, // fix
		CEnvProjectedTexture_m_bCameraSpace, // fix
		CEnvProjectedTexture_m_bEnableShadows, // fix
		CEnvProjectedTexture_m_bLightOnlyTarget, // fix
		CEnvProjectedTexture_m_bLightWorld, // fix
		CEnvProjectedTexture_m_bSimpleProjection, // fix
		CEnvProjectedTexture_m_bState, // fix
		CEnvProjectedTexture_m_flAmbient, // fix
		CEnvProjectedTexture_m_flBrightnessScale, // fix
		CEnvProjectedTexture_m_flColorTransitionTime, // fix
		CEnvProjectedTexture_m_flFarZ, // fix
		CEnvProjectedTexture_m_flLightFOV, // fix
		CEnvProjectedTexture_m_flNearZ, // fix
		CEnvProjectedTexture_m_flProjectionSize, // fix
		CEnvProjectedTexture_m_flRotation, // fix
		CEnvProjectedTexture_m_hTargetEntity, // fix
		CEnvProjectedTexture_m_iStyle, // fix
		CEnvProjectedTexture_m_nShadowQuality, // fix
		CEnvProjectedTexture_m_nSpotlightTextureFrame, // fix
		CEnvQuadraticBeam_m_controlPosition, // fix
		CEnvQuadraticBeam_m_flWidth, // fix
		CEnvQuadraticBeam_m_scrollRate, // fix
		CEnvQuadraticBeam_m_targetPosition, // fix
		CEnvScreenEffect_m_flDuration, // fix
		CEnvScreenEffect_m_nType, // fix
		CEnvScreenOverlay_m_bIsActive, // fix
		CEnvScreenOverlay_m_flOverlayTimes_0_, // fix
		CEnvScreenOverlay_m_flStartTime, // fix
		CEnvScreenOverlay_m_iDesiredOverlay, // fix
		CEnvScreenOverlay_m_iszOverlayNames_0_, // fix
		CEnvTonemapController_m_bUseCustomAutoExposureMax, // fix
		CEnvTonemapController_m_bUseCustomAutoExposureMin, // fix
		CEnvTonemapController_m_bUseCustomBloomScale, // fix
		CEnvTonemapController_m_flBloomExponent, // fix
		CEnvTonemapController_m_flBloomSaturation, // fix
		CEnvTonemapController_m_flCustomAutoExposureMax, // fix
		CEnvTonemapController_m_flCustomAutoExposureMin, // fix
		CEnvTonemapController_m_flCustomBloomScale, // fix
		CEnvTonemapController_m_flCustomBloomScaleMinimum, // fix
		CEnvTonemapController_m_flTonemapMinAvgLum, // fix
		CEnvTonemapController_m_flTonemapPercentBrightPixels, // fix
		CEnvTonemapController_m_flTonemapPercentTarget, // fix
		CEnvTonemapController_m_flTonemapRate, // fix
		CEnvWind_m_EnvWindShared, // fix
		CEnvWind_m_flGustDuration, // fix
		CEnvWind_m_flInitialWindSpeed, // fix
		CEnvWind_m_flMaxGustDelay, // fix
		CEnvWind_m_flMinGustDelay, // fix
		CEnvWind_m_flStartTime, // fix
		CEnvWind_m_iGustDirChange, // fix
		CEnvWind_m_iInitialWindDir, // fix
		CEnvWind_m_iMaxGust, // fix
		CEnvWind_m_iMaxWind, // fix
		CEnvWind_m_iMinGust, // fix
		CEnvWind_m_iMinWind, // fix
		CEnvWind_m_iWindSeed, // fix
		CFEPlayerDecal_m_flCreationTime, // fix
		CFEPlayerDecal_m_nEntity, // fix
		CFEPlayerDecal_m_nHitbox, // fix
		CFEPlayerDecal_m_nPlayer, // fix
		CFEPlayerDecal_m_nTintID, // fix
		CFEPlayerDecal_m_nUniqueID, // fix
		CFEPlayerDecal_m_nVersion, // fix
		CFEPlayerDecal_m_rtGcTime, // fix
		CFEPlayerDecal_m_ubSignature, // fix
		CFEPlayerDecal_m_unAccountID, // fix
		CFEPlayerDecal_m_unTraceID, // fix
		CFEPlayerDecal_m_vecEndPos, // fix
		CFEPlayerDecal_m_vecNormal, // fix
		CFEPlayerDecal_m_vecRight, // fix
		CFEPlayerDecal_m_vecStart, // fix
		CFireSmoke_m_flScale, // fix
		CFireSmoke_m_flScaleTime, // fix
		CFireSmoke_m_flStartScale, // fix
		CFireSmoke_m_nFlags, // fix
		CFireSmoke_m_nFlameFromAboveModelIndex, // fix
		CFireSmoke_m_nFlameModelIndex, // fix
		CFireTrail_m_flLifetime, // fix
		CFireTrail_m_nAttachment, // fix
		CFish_m_angle, // fix
		CFish_m_lifeState, // fix
		CFish_m_nModelIndex, // fix
		CFish_m_poolOrigin, // fix
		CFish_m_waterLevel, // fix
		CFish_m_x, // fix
		CFish_m_y, // fix
		CFish_m_z, // fix
		CFists_m_bPlayingUninterruptableAct, // fix
		CFogController_m_fog_HDRColorScale, // fix
		CFogController_m_fog_ZoomFogScale, // fix
		CFogController_m_fog_blend, // fix
		CFogController_m_fog_colorPrimary, // fix
		CFogController_m_fog_colorPrimaryLerpTo, // fix
		CFogController_m_fog_colorSecondary, // fix
		CFogController_m_fog_colorSecondaryLerpTo, // fix
		CFogController_m_fog_dirPrimary, // fix
		CFogController_m_fog_duration, // fix
		CFogController_m_fog_enable, // fix
		CFogController_m_fog_end, // fix
		CFogController_m_fog_endLerpTo, // fix
		CFogController_m_fog_farz, // fix
		CFogController_m_fog_lerptime, // fix
		CFogController_m_fog_maxdensity, // fix
		CFogController_m_fog_maxdensityLerpTo, // fix
		CFogController_m_fog_start, // fix
		CFogController_m_fog_startLerpTo, // fix
		CFootstepControl_m_destination, // fix
		CFootstepControl_m_source, // fix
		CFuncAreaPortalWindow_m_flFadeDist, // fix
		CFuncAreaPortalWindow_m_flFadeStartDist, // fix
		CFuncAreaPortalWindow_m_flTranslucencyLimit, // fix
		CFuncAreaPortalWindow_m_iBackgroundModelIndex, // fix
		CFuncConveyor_m_flConveyorSpeed, // fix
		CFuncLadder_m_bFakeLadder, // fix
		CFuncLadder_m_vecLadderDir, // fix
		CFuncLadder_m_vecPlayerMountPositionBottom, // fix
		CFuncLadder_m_vecPlayerMountPositionTop, // fix
		CFuncMoveLinear_m_fFlags, // fix
		CFuncMoveLinear_m_vecVelocity, // fix
		CFuncOccluder_m_bActive, // fix
		CFuncOccluder_m_nOccluderIndex, // fix
		CFuncRotating_m_angRotation_0_, // fix
		CFuncRotating_m_angRotation_1_, // fix
		CFuncRotating_m_angRotation_2_, // fix
		CFuncRotating_m_flSimulationTime, // fix
		CFuncRotating_m_vecOrigin, // fix
		CFuncSmokeVolume_m_Collision, // fix
		CFuncSmokeVolume_m_Color1, // fix
		CFuncSmokeVolume_m_Color2, // fix
		CFuncSmokeVolume_m_Density, // fix
		CFuncSmokeVolume_m_DensityRampSpeed, // fix
		CFuncSmokeVolume_m_MaterialName, // fix
		CFuncSmokeVolume_m_MovementSpeed, // fix
		CFuncSmokeVolume_m_ParticleDrawWidth, // fix
		CFuncSmokeVolume_m_ParticleSpacingDistance, // fix
		CFuncSmokeVolume_m_RotationSpeed, // fix
		CFuncSmokeVolume_m_maxDrawDistance, // fix
		CFuncSmokeVolume_m_nSolidType, // fix
		CFuncSmokeVolume_m_nSurroundType, // fix
		CFuncSmokeVolume_m_spawnflags, // fix
		CFuncSmokeVolume_m_triggerBloat, // fix
		CFuncSmokeVolume_m_usSolidFlags, // fix
		CFuncSmokeVolume_m_vecMaxs, // fix
		CFuncSmokeVolume_m_vecMins, // fix
		CFuncSmokeVolume_m_vecSpecifiedSurroundingMaxs, // fix
		CFuncSmokeVolume_m_vecSpecifiedSurroundingMins, // fix
		CFunc_Dust_m_Collision, // fix
		CFunc_Dust_m_Color, // fix
		CFunc_Dust_m_DistMax, // fix
		CFunc_Dust_m_DustFlags, // fix
		CFunc_Dust_m_FallSpeed, // fix
		CFunc_Dust_m_LifetimeMax, // fix
		CFunc_Dust_m_LifetimeMin, // fix
		CFunc_Dust_m_SpawnRate, // fix
		CFunc_Dust_m_SpeedMax, // fix
		CFunc_Dust_m_bAffectedByWind, // fix
		CFunc_Dust_m_flSizeMax, // fix
		CFunc_Dust_m_flSizeMin, // fix
		CFunc_Dust_m_nModelIndex, // fix
		CFunc_Dust_m_nSolidType, // fix
		CFunc_Dust_m_nSurroundType, // fix
		CFunc_Dust_m_triggerBloat, // fix
		CFunc_Dust_m_usSolidFlags, // fix
		CFunc_Dust_m_vecMaxs, // fix
		CFunc_Dust_m_vecMins, // fix
		CFunc_Dust_m_vecSpecifiedSurroundingMaxs, // fix
		CFunc_Dust_m_vecSpecifiedSurroundingMins, // fix
		CFunc_LOD_m_nDisappearMaxDist, // fix
		CFunc_LOD_m_nDisappearMinDist, // fix
		CGrassBurn_m_flGrassBurnClearTime, // fix
		CHandleTest_m_Handle, // fix
		CHandleTest_m_bSendHandle, // fix
		CHostage_m_fFlags, // fix
		CHostage_m_flDropStartTime, // fix
		CHostage_m_flGrabSuccessTime, // fix
		CHostage_m_flRescueStartTime, // fix
		CHostage_m_iHealth, // fix
		CHostage_m_iMaxHealth, // fix
		CHostage_m_isRescued, // fix
		CHostage_m_jumpedThisFrame, // fix
		CHostage_m_leader, // fix
		CHostage_m_lifeState, // fix
		CHostage_m_nHostageState, // fix
		CHostage_m_vel, // fix
		CInferno_m_bFireIsBurning, // fix
		CInferno_m_fireCount, // fix
		CInferno_m_fireXDelta, // fix
		CInferno_m_fireYDelta, // fix
		CInferno_m_fireZDelta, // fix
		CInferno_m_nFireEffectTickBegin, // fix
		CInfoMapRegion_m_flRadius, // fix
		CInfoMapRegion_m_szLocToken, // fix
		CInfoOverlayAccessor_m_iOverlayID, // fix
		CInfoOverlayAccessor_m_iTextureFrameIndex, // fix
		CItemAssaultSuitUseable_m_bIsHeavyAssaultSuit, // fix
		CItemAssaultSuitUseable_m_nArmorValue, // fix
		CItemDogtags_m_KillingPlayer, // fix
		CItemDogtags_m_OwningPlayer, // fix
		CItem_m_bShouldGlow, // fix
		CLightGlow_m_angRotation, // fix
		CLightGlow_m_clrRender, // fix
		CLightGlow_m_flGlowProxySize, // fix
		CLightGlow_m_nHorizontalSize, // fix
		CLightGlow_m_nMaxDist, // fix
		CLightGlow_m_nMinDist, // fix
		CLightGlow_m_nOuterMaxDist, // fix
		CLightGlow_m_nVerticalSize, // fix
		CLightGlow_m_spawnflags, // fix
		CLightGlow_m_vecOrigin, // fix
		CLightGlow_moveparent, // fix
		CMapVetoPickController_m_nAccountIDs, // fix
		CMapVetoPickController_m_nCurrentPhase, // fix
		CMapVetoPickController_m_nDraftType, // fix
		CMapVetoPickController_m_nMapId0, // fix
		CMapVetoPickController_m_nMapId1, // fix
		CMapVetoPickController_m_nMapId2, // fix
		CMapVetoPickController_m_nMapId3, // fix
		CMapVetoPickController_m_nMapId4, // fix
		CMapVetoPickController_m_nMapId5, // fix
		CMapVetoPickController_m_nPhaseDurationTicks, // fix
		CMapVetoPickController_m_nPhaseStartTick, // fix
		CMapVetoPickController_m_nStartingSide0, // fix
		CMapVetoPickController_m_nTeamWinningCoinToss, // fix
		CMapVetoPickController_m_nTeamWithFirstChoice, // fix
		CMapVetoPickController_m_nVoteMapIdsList, // fix
		CMaterialModifyControl_m_bFloatLerpWrap, // fix
		CMaterialModifyControl_m_bNewAnimCommandsSemaphore, // fix
		CMaterialModifyControl_m_bWrap, // fix
		CMaterialModifyControl_m_flFloatLerpEndValue, // fix
		CMaterialModifyControl_m_flFloatLerpStartValue, // fix
		CMaterialModifyControl_m_flFloatLerpTransitionTime, // fix
		CMaterialModifyControl_m_flFramerate, // fix
		CMaterialModifyControl_m_iFrameEnd, // fix
		CMaterialModifyControl_m_iFrameStart, // fix
		CMaterialModifyControl_m_nModifyMode, // fix
		CMaterialModifyControl_m_szMaterialName, // fix
		CMaterialModifyControl_m_szMaterialVar, // fix
		CMaterialModifyControl_m_szMaterialVarValue, // fix
		CMelee_m_flThrowAt, // fix
		CMolotovProjectile_m_bIsIncGrenade, // fix
		CMovieDisplay_m_bEnabled, // fix
		CMovieDisplay_m_bForcedSlave, // fix
		CMovieDisplay_m_bLooping, // fix
		CMovieDisplay_m_bStretchToFill, // fix
		CMovieDisplay_m_bUseCustomUVs, // fix
		CMovieDisplay_m_flUMax, // fix
		CMovieDisplay_m_flUMin, // fix
		CMovieDisplay_m_flVMax, // fix
		CMovieDisplay_m_flVMin, // fix
		CMovieDisplay_m_szGroupName, // fix
		CMovieDisplay_m_szMovieFilename, // fix
		CParadropChopper_m_hCallingPlayer, // fix
		CParadropChopper_m_vecOrigin, // fix
		CParadropChopper_m_vecOrigin_2_, // fix
		CParticleFire_m_vDirection, // fix
		CParticleFire_m_vOrigin, // fix
		CParticlePerformanceMonitor_m_bDisplayPerf, // fix
		CParticlePerformanceMonitor_m_bMeasurePerf, // fix
		CParticleSystem_m_angRotation, // fix
		CParticleSystem_m_bActive, // fix
		CParticleSystem_m_fEffects, // fix
		CParticleSystem_m_flStartTime, // fix
		CParticleSystem_m_hControlPointEnts, // fix
		CParticleSystem_m_hOwnerEntity, // fix
		CParticleSystem_m_iControlPointParents, // fix
		CParticleSystem_m_iEffectIndex, // fix
		CParticleSystem_m_iParentAttachment, // fix
		CParticleSystem_m_iServerControlPointAssignments, // fix
		CParticleSystem_m_nStopType, // fix
		CParticleSystem_m_szSnapshotFileName, // fix
		CParticleSystem_m_vServerControlPoints, // fix
		CParticleSystem_m_vecOrigin, // fix
		CParticleSystem_moveparent, // fix
		CPhysBoxMultiplayer_m_fMass, // fix
		CPhysBoxMultiplayer_m_iPhysicsMode, // fix
		CPhysBox_m_mass, // fix
		CPhysPropLootCrate_m_bRenderInPSPM, // fix
		CPhysPropLootCrate_m_bRenderInTablet, // fix
		CPhysPropLootCrate_m_iHealth, // fix
		CPhysPropLootCrate_m_iMaxHealth, // fix
		CPhysicsPropMultiplayer_m_collisionMaxs, // fix
		CPhysicsPropMultiplayer_m_collisionMins, // fix
		CPhysicsPropMultiplayer_m_fMass, // fix
		CPhysicsPropMultiplayer_m_iPhysicsMode, // fix
		CPhysicsProp_m_bAwake, // fix
		CPhysicsProp_m_spawnflags, // fix
		CPlantedC4_m_bBombDefused, // fix
		CPlantedC4_m_bBombTicking, // fix
		CPlantedC4_m_flC4Blow, // fix
		CPlantedC4_m_flDefuseCountDown, // fix
		CPlantedC4_m_flDefuseLength, // fix
		CPlantedC4_m_flTimerLength, // fix
		CPlantedC4_m_hBombDefuser, // fix
		CPlantedC4_m_nBombSite, // fix
		CPlasma_m_flScale, // fix
		CPlasma_m_flScaleTime, // fix
		CPlasma_m_flStartScale, // fix
		CPlasma_m_nFlags, // fix
		CPlasma_m_nGlowModelIndex, // fix
		CPlasma_m_nPlasmaModelIndex, // fix
		CPlasma_m_nPlasmaModelIndex2, // fix
		CPlayerPing_m_bUrgent, // fix
		CPlayerPing_m_hPingedEntity, // fix
		CPlayerPing_m_hPlayer, // fix
		CPlayerPing_m_iType, // fix
		CPlayerPing_m_szPlaceName, // fix
		CPlayerResource_m_bAlive, // fix
		CPlayerResource_m_bConnected, // fix
		CPlayerResource_m_iAssists, // fix
		CPlayerResource_m_iCoachingTeam, // fix
		CPlayerResource_m_iDeaths, // fix
		CPlayerResource_m_iHealth, // fix
		CPlayerResource_m_iKills, // fix
		CPlayerResource_m_iPendingTeam, // fix
		CPlayerResource_m_iPing, // fix
		CPlayerResource_m_iTeam, // fix
		CPointCamera_m_FOV, // fix
		CPointCamera_m_FogColor, // fix
		CPointCamera_m_Resolution, // fix
		CPointCamera_m_bActive, // fix
		CPointCamera_m_bFogEnable, // fix
		CPointCamera_m_bUseScreenAspectRatio, // fix
		CPointCamera_m_flFogEnd, // fix
		CPointCamera_m_flFogMaxDensity, // fix
		CPointCamera_m_flFogStart, // fix
		CPointCommentaryNode_m_bActive, // fix
		CPointCommentaryNode_m_flStartTime, // fix
		CPointCommentaryNode_m_hViewPosition, // fix
		CPointCommentaryNode_m_iNodeNumber, // fix
		CPointCommentaryNode_m_iNodeNumberMax, // fix
		CPointCommentaryNode_m_iszCommentaryFile, // fix
		CPointCommentaryNode_m_iszCommentaryFileNoHDR, // fix
		CPointCommentaryNode_m_iszSpeakers, // fix
		CPointWorldText_m_flTextSize, // fix
		CPointWorldText_m_szText, // fix
		CPointWorldText_m_textColor, // fix
		CPoseController_m_bInterpolationWrap, // fix
		CPoseController_m_bPoseValueParity, // fix
		CPoseController_m_chPoseIndex, // fix
		CPoseController_m_fCycleFrequency, // fix
		CPoseController_m_fFModAmplitude, // fix
		CPoseController_m_fFModRate, // fix
		CPoseController_m_fFModTimeOffset, // fix
		CPoseController_m_fInterpolationTime, // fix
		CPoseController_m_fPoseValue, // fix
		CPoseController_m_hProps, // fix
		CPoseController_m_nFModType, // fix
		CPostProcessController_m_bMaster, // fix
		CPostProcessController_m_flPostProcessParameters, // fix
		CPrecipitation_m_nPrecipType, // fix
		CPropCounter_m_flDisplayValue, // fix
		CPropJeep_m_bHeadlightIsOn, // fix
		CPropVehicleChoreoGeneric_m_bEnterAnimOn, // fix
		CPropVehicleChoreoGeneric_m_bExitAnimOn, // fix
		CPropVehicleChoreoGeneric_m_bForceEyesToAttachment, // fix
		CPropVehicleChoreoGeneric_m_hPlayer, // fix
		CPropVehicleChoreoGeneric_m_vecEyeExitEndpoint, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_bClampEyeAngles, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flFOV, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveLinear, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveZero, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchMax, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchMin, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveLinear, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveZero, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flYawMax, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flYawMin, // fix
		CPropVehicleDriveable_m_bEnterAnimOn, // fix
		CPropVehicleDriveable_m_bExitAnimOn, // fix
		CPropVehicleDriveable_m_bHasGun, // fix
		CPropVehicleDriveable_m_bUnableToFire, // fix
		CPropVehicleDriveable_m_flThrottle, // fix
		CPropVehicleDriveable_m_hPlayer, // fix
		CPropVehicleDriveable_m_nBoostTimeLeft, // fix
		CPropVehicleDriveable_m_nHasBoost, // fix
		CPropVehicleDriveable_m_nRPM, // fix
		CPropVehicleDriveable_m_nScannerDisabledVehicle, // fix
		CPropVehicleDriveable_m_nScannerDisabledWeapons, // fix
		CPropVehicleDriveable_m_nSpeed, // fix
		CPropVehicleDriveable_m_vecEyeExitEndpoint, // fix
		CPropVehicleDriveable_m_vecGunCrosshair, // fix
		CProp_Hallucination_m_bEnabled, // fix
		CProp_Hallucination_m_fRechargeTime, // fix
		CProp_Hallucination_m_fVisibleTime, // fix
		CRagdollManager_m_iCurrentMaxRagdollCount, // fix
		CRagdollPropAttached_m_attachmentPointBoneSpace, // fix
		CRagdollPropAttached_m_attachmentPointRagdollSpace, // fix
		CRagdollPropAttached_m_boneIndexAttached, // fix
		CRagdollPropAttached_m_ragdollAttachedObjectIndex, // fix
		CRagdollProp_m_flBlendWeight, // fix
		CRagdollProp_m_hUnragdoll, // fix
		CRagdollProp_m_nOverlaySequence, // fix
		CRagdollProp_m_ragAngles_0_, // fix
		CRagdollProp_m_ragPos_0_, // fix
		CRopeKeyframe_m_RopeFlags, // fix
		CRopeKeyframe_m_RopeLength, // fix
		CRopeKeyframe_m_Slack, // fix
		CRopeKeyframe_m_Subdiv, // fix
		CRopeKeyframe_m_TextureScale, // fix
		CRopeKeyframe_m_Width, // fix
		CRopeKeyframe_m_bConstrainBetweenEndpoints, // fix
		CRopeKeyframe_m_fLockedPoints, // fix
		CRopeKeyframe_m_flScrollSpeed, // fix
		CRopeKeyframe_m_hEndPoint, // fix
		CRopeKeyframe_m_hStartPoint, // fix
		CRopeKeyframe_m_iDefaultRopeMaterialModelIndex, // fix
		CRopeKeyframe_m_iEndAttachment, // fix
		CRopeKeyframe_m_iParentAttachment, // fix
		CRopeKeyframe_m_iRopeMaterialModelIndex, // fix
		CRopeKeyframe_m_iStartAttachment, // fix
		CRopeKeyframe_m_nChangeCount, // fix
		CRopeKeyframe_m_nMaxCPULevel, // fix
		CRopeKeyframe_m_nMaxGPULevel, // fix
		CRopeKeyframe_m_nMinCPULevel, // fix
		CRopeKeyframe_m_nMinGPULevel, // fix
		CRopeKeyframe_m_nSegments, // fix
		CRopeKeyframe_m_vecOrigin, // fix
		CRopeKeyframe_moveparent, // fix
		CSceneEntity_m_bIsPlayingBack, // fix
		CSceneEntity_m_bMultiplayer, // fix
		CSceneEntity_m_bPaused, // fix
		CSceneEntity_m_flForceClientTime, // fix
		CSceneEntity_m_nSceneStringIndex, // fix
		CShadowControl_m_bDisableShadows, // fix
		CShadowControl_m_bEnableLocalLightShadows, // fix
		CShadowControl_m_flShadowMaxDist, // fix
		CShadowControl_m_shadowColor, // fix
		CShadowControl_m_shadowDirection, // fix
		CSlideshowDisplay_m_bEnabled, // fix
		CSlideshowDisplay_m_bNoListRepeats, // fix
		CSlideshowDisplay_m_chCurrentSlideLists, // fix
		CSlideshowDisplay_m_fMaxSlideTime, // fix
		CSlideshowDisplay_m_fMinSlideTime, // fix
		CSlideshowDisplay_m_iCycleType, // fix
		CSlideshowDisplay_m_szDisplayText, // fix
		CSlideshowDisplay_m_szSlideshowDirectory, // fix
		CSmokeGrenadeProjectile_m_bDidSmokeEffect, // fix
		CSmokeGrenadeProjectile_m_nSmokeEffectTickBegin, // fix
		CSmokeStack_m_AmbientLight_m_flIntensity, // fix
		CSmokeStack_m_AmbientLight_m_vColor, // fix
		CSmokeStack_m_AmbientLight_m_vPos, // fix
		CSmokeStack_m_DirLight_m_flIntensity, // fix
		CSmokeStack_m_DirLight_m_vColor, // fix
		CSmokeStack_m_DirLight_m_vPos, // fix
		CSmokeStack_m_EndSize, // fix
		CSmokeStack_m_JetLength, // fix
		CSmokeStack_m_Rate, // fix
		CSmokeStack_m_Speed, // fix
		CSmokeStack_m_SpreadSpeed, // fix
		CSmokeStack_m_StartSize, // fix
		CSmokeStack_m_bEmit, // fix
		CSmokeStack_m_flBaseSpread, // fix
		CSmokeStack_m_flRollSpeed, // fix
		CSmokeStack_m_flTwist, // fix
		CSmokeStack_m_iMaterialModel, // fix
		CSmokeStack_m_vWind, // fix
		CSpatialEntity_m_bEnabled, // fix
		CSpatialEntity_m_flCurWeight, // fix
		CSpatialEntity_m_maxFalloff, // fix
		CSpatialEntity_m_minFalloff, // fix
		CSpatialEntity_m_vecOrigin, // fix
		CSpotlightEnd_m_Radius, // fix
		CSpotlightEnd_m_flLightScale, // fix
		CSpriteTrail_m_flEndWidth, // fix
		CSpriteTrail_m_flLifeTime, // fix
		CSpriteTrail_m_flMinFadeLength, // fix
		CSpriteTrail_m_flSkyboxScale, // fix
		CSpriteTrail_m_flStartWidth, // fix
		CSpriteTrail_m_flStartWidthVariance, // fix
		CSpriteTrail_m_flTextureRes, // fix
		CSpriteTrail_m_vecSkyboxOrigin, // fix
		CSprite_m_bWorldSpaceScale, // fix
		CSprite_m_flBrightnessTime, // fix
		CSprite_m_flFrame, // fix
		CSprite_m_flGlowProxySize, // fix
		CSprite_m_flHDRColorScale, // fix
		CSprite_m_flScaleTime, // fix
		CSprite_m_flSpriteFramerate, // fix
		CSprite_m_flSpriteScale, // fix
		CSprite_m_hAttachedToEntity, // fix
		CSprite_m_nAttachment, // fix
		CSprite_m_nBrightness, // fix
		CStatueProp_m_bShatter, // fix
		CStatueProp_m_hInitBaseAnimating, // fix
		CStatueProp_m_nShatterFlags, // fix
		CStatueProp_m_vShatterForce, // fix
		CStatueProp_m_vShatterPosition, // fix
		CSteamJet_m_EndSize, // fix
		CSteamJet_m_JetLength, // fix
		CSteamJet_m_Rate, // fix
		CSteamJet_m_Speed, // fix
		CSteamJet_m_SpreadSpeed, // fix
		CSteamJet_m_StartSize, // fix
		CSteamJet_m_bEmit, // fix
		CSteamJet_m_bFaceLeft, // fix
		CSteamJet_m_flRollSpeed, // fix
		CSteamJet_m_nType, // fix
		CSteamJet_m_spawnflags, // fix
		CSun_m_bOn, // fix
		CSun_m_clrOverlay, // fix
		CSun_m_clrRender, // fix
		CSun_m_nMaterial, // fix
		CSun_m_nOverlayMaterial, // fix
		CSun_m_nOverlaySize, // fix
		CSun_m_nSize, // fix
		CSun_m_vDirection, // fix
		CSunlightShadowControl_m_LightColor, // fix
		CSunlightShadowControl_m_TextureName, // fix
		CSunlightShadowControl_m_bEnableShadows, // fix
		CSunlightShadowControl_m_bEnabled, // fix
		CSunlightShadowControl_m_flColorTransitionTime, // fix
		CSunlightShadowControl_m_flFOV, // fix
		CSunlightShadowControl_m_flNearZ, // fix
		CSunlightShadowControl_m_flNorthOffset, // fix
		CSunlightShadowControl_m_flSunDistance, // fix
		CSunlightShadowControl_m_shadowDirection, // fix
		CSurvivalSpawnChopper_m_vecOrigin, // fix
		CSurvivalSpawnChopper_m_vecOrigin_2_, // fix
		CTEBSPDecal_m_nEntity, // fix
		CTEBSPDecal_m_nIndex, // fix
		CTEBSPDecal_m_vecOrigin, // fix
		CTEBaseBeam_a, // fix
		CTEBaseBeam_b, // fix
		CTEBaseBeam_g, // fix
		CTEBaseBeam_m_fAmplitude, // fix
		CTEBaseBeam_m_fEndWidth, // fix
		CTEBaseBeam_m_fLife, // fix
		CTEBaseBeam_m_fWidth, // fix
		CTEBaseBeam_m_nFadeLength, // fix
		CTEBaseBeam_m_nFlags, // fix
		CTEBaseBeam_m_nFrameRate, // fix
		CTEBaseBeam_m_nHaloIndex, // fix
		CTEBaseBeam_m_nModelIndex, // fix
		CTEBaseBeam_m_nSpeed, // fix
		CTEBaseBeam_m_nStartFrame, // fix
		CTEBaseBeam_r, // fix
		CTEBeamEntPoint_m_nEndEntity, // fix
		CTEBeamEntPoint_m_nStartEntity, // fix
		CTEBeamEntPoint_m_vecEndPoint, // fix
		CTEBeamEntPoint_m_vecStartPoint, // fix
		CTEBeamEnts_m_nEndEntity, // fix
		CTEBeamEnts_m_nStartEntity, // fix
		CTEBeamFollow_m_iEntIndex, // fix
		CTEBeamLaser_m_nEndEntity, // fix
		CTEBeamLaser_m_nStartEntity, // fix
		CTEBeamPoints_m_vecEndPoint, // fix
		CTEBeamPoints_m_vecStartPoint, // fix
		CTEBeamRingPoint_m_flEndRadius, // fix
		CTEBeamRingPoint_m_flStartRadius, // fix
		CTEBeamRingPoint_m_vecCenter, // fix
		CTEBeamRing_m_nEndEntity, // fix
		CTEBeamRing_m_nStartEntity, // fix
		CTEBeamSpline_m_nPoints, // fix
		CTEBeamSpline_m_vecPoints_0_, // fix
		CTEBloodSprite_a, // fix
		CTEBloodSprite_b, // fix
		CTEBloodSprite_g, // fix
		CTEBloodSprite_m_nDropModel, // fix
		CTEBloodSprite_m_nSize, // fix
		CTEBloodSprite_m_nSprayModel, // fix
		CTEBloodSprite_m_vecDirection, // fix
		CTEBloodSprite_m_vecOrigin, // fix
		CTEBloodSprite_r, // fix
		CTEBloodStream_a, // fix
		CTEBloodStream_b, // fix
		CTEBloodStream_g, // fix
		CTEBloodStream_m_nAmount, // fix
		CTEBloodStream_m_vecDirection, // fix
		CTEBloodStream_r, // fix
		CTEBreakModel_m_angRotation_0_, // fix
		CTEBreakModel_m_angRotation_1_, // fix
		CTEBreakModel_m_angRotation_2_, // fix
		CTEBreakModel_m_fTime, // fix
		CTEBreakModel_m_nCount, // fix
		CTEBreakModel_m_nFlags, // fix
		CTEBreakModel_m_nModelIndex, // fix
		CTEBreakModel_m_nRandomization, // fix
		CTEBreakModel_m_vecOrigin, // fix
		CTEBreakModel_m_vecSize, // fix
		CTEBreakModel_m_vecVelocity, // fix
		CTEBubbleTrail_m_fSpeed, // fix
		CTEBubbleTrail_m_flWaterZ, // fix
		CTEBubbleTrail_m_nCount, // fix
		CTEBubbleTrail_m_nModelIndex, // fix
		CTEBubbleTrail_m_vecMaxs, // fix
		CTEBubbleTrail_m_vecMins, // fix
		CTEBubbles_m_fHeight, // fix
		CTEBubbles_m_fSpeed, // fix
		CTEBubbles_m_nCount, // fix
		CTEBubbles_m_nModelIndex, // fix
		CTEBubbles_m_vecMaxs, // fix
		CTEBubbles_m_vecMins, // fix
		CTEClientProjectile_m_hOwner, // fix
		CTEClientProjectile_m_nLifeTime, // fix
		CTEClientProjectile_m_nModelIndex, // fix
		CTEClientProjectile_m_vecOrigin, // fix
		CTEClientProjectile_m_vecVelocity, // fix
		CTEDecal_m_nEntity, // fix
		CTEDecal_m_nHitbox, // fix
		CTEDecal_m_nIndex, // fix
		CTEDecal_m_vecOrigin, // fix
		CTEDecal_m_vecStart, // fix
		CTEDust_m_flSize, // fix
		CTEDust_m_flSpeed, // fix
		CTEDust_m_vecDirection, // fix
		CTEDynamicLight_b, // fix
		CTEDynamicLight_exponent, // fix
		CTEDynamicLight_g, // fix
		CTEDynamicLight_m_fDecay, // fix
		CTEDynamicLight_m_fRadius, // fix
		CTEDynamicLight_m_fTime, // fix
		CTEDynamicLight_m_vecOrigin, // fix
		CTEDynamicLight_r, // fix
		CTEEffectDispatch_entindex, // fix
		CTEEffectDispatch_m_EffectData, // fix
		CTEEffectDispatch_m_bPositionsAreRelativeToEntity, // fix
		CTEEffectDispatch_m_fFlags, // fix
		CTEEffectDispatch_m_flMagnitude, // fix
		CTEEffectDispatch_m_flRadius, // fix
		CTEEffectDispatch_m_flScale, // fix
		CTEEffectDispatch_m_iEffectName, // fix
		CTEEffectDispatch_m_nAttachmentIndex, // fix
		CTEEffectDispatch_m_nColor, // fix
		CTEEffectDispatch_m_nDamageType, // fix
		CTEEffectDispatch_m_nHitBox, // fix
		CTEEffectDispatch_m_nMaterial, // fix
		CTEEffectDispatch_m_nOtherEntIndex, // fix
		CTEEffectDispatch_m_nSurfaceProp, // fix
		CTEEffectDispatch_m_vAngles, // fix
		CTEEffectDispatch_m_vNormal, // fix
		CTEEffectDispatch_m_vOrigin_x, // fix
		CTEEffectDispatch_m_vOrigin_y, // fix
		CTEEffectDispatch_m_vOrigin_z, // fix
		CTEEffectDispatch_m_vStart_x, // fix
		CTEEffectDispatch_m_vStart_y, // fix
		CTEEffectDispatch_m_vStart_z, // fix
		CTEEnergySplash_m_bExplosive, // fix
		CTEEnergySplash_m_vecDir, // fix
		CTEEnergySplash_m_vecPos, // fix
		CTEExplosion_m_chMaterialType, // fix
		CTEExplosion_m_fScale, // fix
		CTEExplosion_m_nFlags, // fix
		CTEExplosion_m_nFrameRate, // fix
		CTEExplosion_m_nMagnitude, // fix
		CTEExplosion_m_nModelIndex, // fix
		CTEExplosion_m_nRadius, // fix
		CTEExplosion_m_vecNormal, // fix
		CTEFireBullets_m_fInaccuracy, // fix
		CTEFireBullets_m_fSpread, // fix
		CTEFireBullets_m_flRecoilIndex, // fix
		CTEFireBullets_m_iMode, // fix
		CTEFireBullets_m_iPlayer, // fix
		CTEFireBullets_m_iSeed, // fix
		CTEFireBullets_m_iSoundType, // fix
		CTEFireBullets_m_iWeaponID, // fix
		CTEFireBullets_m_nItemDefIndex, // fix
		CTEFireBullets_m_vecAngles_0_, // fix
		CTEFireBullets_m_vecAngles_1_, // fix
		CTEFireBullets_m_vecOrigin, // fix
		CTEFireBullets_m_weapon, // fix
		CTEFizz_m_nCurrent, // fix
		CTEFizz_m_nDensity, // fix
		CTEFizz_m_nEntity, // fix
		CTEFizz_m_nModelIndex, // fix
		CTEFootprintDecal_m_chMaterialType, // fix
		CTEFootprintDecal_m_nEntity, // fix
		CTEFootprintDecal_m_nIndex, // fix
		CTEFootprintDecal_m_vecDirection, // fix
		CTEFootprintDecal_m_vecOrigin, // fix
		CTEFoundryHelpers_m_iEntity, // fix
		CTEGaussExplosion_m_nType, // fix
		CTEGaussExplosion_m_vecDirection, // fix
		CTEGlowSprite_m_fLife, // fix
		CTEGlowSprite_m_fScale, // fix
		CTEGlowSprite_m_nBrightness, // fix
		CTEGlowSprite_m_nModelIndex, // fix
		CTEGlowSprite_m_vecOrigin, // fix
		CTEImpact_m_iType, // fix
		CTEImpact_m_ucFlags, // fix
		CTEImpact_m_vecNormal, // fix
		CTEImpact_m_vecOrigin, // fix
		CTEKillPlayerAttachments_m_nPlayer, // fix
		CTELargeFunnel_m_nModelIndex, // fix
		CTELargeFunnel_m_nReversed, // fix
		CTEMetalSparks_m_vecDir, // fix
		CTEMetalSparks_m_vecPos, // fix
		CTEMuzzleFlash_m_flScale, // fix
		CTEMuzzleFlash_m_nType, // fix
		CTEMuzzleFlash_m_vecAngles, // fix
		CTEMuzzleFlash_m_vecOrigin, // fix
		CTEParticleSystem_m_vecOrigin_0_, // fix
		CTEParticleSystem_m_vecOrigin_1_, // fix
		CTEParticleSystem_m_vecOrigin_2_, // fix
		CTEPhysicsProp_m_angRotation_0_, // fix
		CTEPhysicsProp_m_angRotation_1_, // fix
		CTEPhysicsProp_m_angRotation_2_, // fix
		CTEPhysicsProp_m_clrRender, // fix
		CTEPhysicsProp_m_nEffects, // fix
		CTEPhysicsProp_m_nFlags, // fix
		CTEPhysicsProp_m_nModelIndex, // fix
		CTEPhysicsProp_m_nSkin, // fix
		CTEPhysicsProp_m_vecOrigin, // fix
		CTEPhysicsProp_m_vecVelocity, // fix
		CTEPlantBomb_m_iPlayer, // fix
		CTEPlantBomb_m_option, // fix
		CTEPlantBomb_m_vecOrigin, // fix
		CTEPlayerAnimEvent_m_hPlayer, // fix
		CTEPlayerAnimEvent_m_iEvent, // fix
		CTEPlayerAnimEvent_m_nData, // fix
		CTEPlayerDecal_m_nEntity, // fix
		CTEPlayerDecal_m_nHitbox, // fix
		CTEPlayerDecal_m_nPlayer, // fix
		CTEPlayerDecal_m_vecOrigin, // fix
		CTEPlayerDecal_m_vecRight, // fix
		CTEPlayerDecal_m_vecStart, // fix
		CTEProjectedDecal_m_angRotation, // fix
		CTEProjectedDecal_m_flDistance, // fix
		CTEProjectedDecal_m_nIndex, // fix
		CTEProjectedDecal_m_vecOrigin, // fix
		CTERadioIcon_m_iAttachToClient, // fix
		CTEShatterSurface_m_flHeight, // fix
		CTEShatterSurface_m_flShardSize, // fix
		CTEShatterSurface_m_flWidth, // fix
		CTEShatterSurface_m_nSurfaceType, // fix
		CTEShatterSurface_m_uchBackColor_0_, // fix
		CTEShatterSurface_m_uchBackColor_1_, // fix
		CTEShatterSurface_m_uchBackColor_2_, // fix
		CTEShatterSurface_m_uchFrontColor_0_, // fix
		CTEShatterSurface_m_uchFrontColor_1_, // fix
		CTEShatterSurface_m_uchFrontColor_2_, // fix
		CTEShatterSurface_m_vecAngles, // fix
		CTEShatterSurface_m_vecForce, // fix
		CTEShatterSurface_m_vecForcePos, // fix
		CTEShatterSurface_m_vecOrigin, // fix
		CTEShowLine_m_vecEnd, // fix
		CTESmoke_m_fScale, // fix
		CTESmoke_m_nFrameRate, // fix
		CTESmoke_m_nModelIndex, // fix
		CTESmoke_m_vecOrigin, // fix
		CTESparks_m_nMagnitude, // fix
		CTESparks_m_nTrailLength, // fix
		CTESparks_m_vecDir, // fix
		CTESpriteSpray_m_fNoise, // fix
		CTESpriteSpray_m_nCount, // fix
		CTESpriteSpray_m_nModelIndex, // fix
		CTESpriteSpray_m_nSpeed, // fix
		CTESpriteSpray_m_vecDirection, // fix
		CTESpriteSpray_m_vecOrigin, // fix
		CTESprite_m_fScale, // fix
		CTESprite_m_nBrightness, // fix
		CTESprite_m_nModelIndex, // fix
		CTESprite_m_vecOrigin, // fix
		CTEWorldDecal_m_nIndex, // fix
		CTEWorldDecal_m_vecOrigin, // fix
		CTablet_m_bTabletReceptionIsBlocked, // fix
		CTablet_m_flBootTime, // fix
		CTablet_m_flScanProgress, // fix
		CTablet_m_flShowMapTime, // fix
		CTablet_m_flUpgradeExpirationTime_0_, // fix
		CTablet_m_nContractKillGridHighResIndex, // fix
		CTablet_m_nContractKillGridIndex, // fix
		CTablet_m_nLastPurchaseIndex, // fix
		CTablet_m_vecLocalHexFlags_0_, // fix
		CTablet_m_vecNearestMetalCratePos, // fix
		CTablet_m_vecNotificationIds_0_, // fix
		CTablet_m_vecNotificationTimestamps_0_, // fix
		CTablet_m_vecPlayerPositionHistory_0_, // fix
		CTeam_m_bSurrendered, // fix
		CTeam_m_iClanID, // fix
		CTeam_m_iTeamNum, // fix
		CTeam_m_nGGLeaderEntIndex_CT, // fix
		CTeam_m_nGGLeaderEntIndex_T, // fix
		CTeam_m_numMapVictories, // fix
		CTeam_m_scoreFirstHalf, // fix
		CTeam_m_scoreOvertime, // fix
		CTeam_m_scoreSecondHalf, // fix
		CTeam_m_scoreTotal, // fix
		CTeam_m_szClanTeamname, // fix
		CTeam_m_szTeamFlagImage, // fix
		CTeam_m_szTeamLogoImage, // fix
		CTeam_m_szTeamMatchStat, // fix
		CTeam_m_szTeamname, // fix
		CTeamplayRoundBasedRulesProxy_m_TeamRespawnWaveTimes, // fix
		CTeamplayRoundBasedRulesProxy_m_bAwaitingReadyRestart, // fix
		CTeamplayRoundBasedRulesProxy_m_bInOvertime, // fix
		CTeamplayRoundBasedRulesProxy_m_bInSetup, // fix
		CTeamplayRoundBasedRulesProxy_m_bInWaitingForPlayers, // fix
		CTeamplayRoundBasedRulesProxy_m_bStopWatch, // fix
		CTeamplayRoundBasedRulesProxy_m_bSwitchedTeamsThisRound, // fix
		CTeamplayRoundBasedRulesProxy_m_bTeamReady, // fix
		CTeamplayRoundBasedRulesProxy_m_flMapResetTime, // fix
		CTeamplayRoundBasedRulesProxy_m_flNextRespawnWave, // fix
		CTeamplayRoundBasedRulesProxy_m_flRestartRoundTime, // fix
		CTeamplayRoundBasedRulesProxy_m_iRoundState, // fix
		CTeamplayRoundBasedRulesProxy_m_iWinningTeam, // fix
		CTesla_m_SoundName, // fix
		CTesla_m_iszSpriteName, // fix
		CTestTraceline_m_angRotation_0_, // fix
		CTestTraceline_m_angRotation_1_, // fix
		CTestTraceline_m_angRotation_2_, // fix
		CTestTraceline_m_clrRender, // fix
		CTestTraceline_m_vecOrigin, // fix
		CTestTraceline_moveparent, // fix
		CTest_ProxyToggle_Networkable_m_WithProxy, // fix
		CTriggerSoundOperator_m_nSoundOperator, // fix
		CVGuiScreen_m_fScreenFlags, // fix
		CVGuiScreen_m_flHeight, // fix
		CVGuiScreen_m_flWidth, // fix
		CVGuiScreen_m_hPlayerOwner, // fix
		CVGuiScreen_m_nAttachmentIndex, // fix
		CVGuiScreen_m_nOverlayMaterial, // fix
		CVGuiScreen_m_nPanelName, // fix
		CVoteController_m_bIsYesNoVote, // fix
		CVoteController_m_iActiveIssueIndex, // fix
		CVoteController_m_iOnlyTeamToVote, // fix
		CVoteController_m_nPotentialVotes, // fix
		CVoteController_m_nVoteOptionCount, // fix
		CWaterLODControl_m_flCheapWaterEndDistance, // fix
		CWaterLODControl_m_flCheapWaterStartDistance, // fix
		CWeaponBaseItem_m_bRedraw, // fix
		CWeaponCSBaseGun_m_iBurstShotsRemaining, // fix
		CWeaponCSBaseGun_m_zoomLevel, // fix
		CWeaponCSBase_m_bBurstMode, // fix
		CWeaponCSBase_m_bReloadVisuallyComplete, // fix
		CWeaponCSBase_m_bSilencerOn, // fix
		CWeaponCSBase_m_fAccuracyPenalty, // fix
		CWeaponCSBase_m_fLastShotTime, // fix
		CWeaponCSBase_m_flDoneSwitchingSilencer, // fix
		CWeaponCSBase_m_flPostponeFireReadyTime, // fix
		CWeaponCSBase_m_flRecoilIndex, // fix
		CWeaponCSBase_m_hPrevOwner, // fix
		CWeaponCSBase_m_iIronSightMode, // fix
		CWeaponCSBase_m_iOriginalTeamNumber, // fix
		CWeaponCSBase_m_iRecoilIndex, // fix
		CWeaponCSBase_m_weaponMode, // fix
		CWeaponM3_m_reloadState, // fix
		CWeaponNOVA_m_reloadState, // fix
		CWeaponSawedoff_m_reloadState, // fix
		CWeaponShield_m_flDisplayHealth, // fix
		CWeaponTaser_m_fFireTime, // fix
		CWeaponXM1014_m_reloadState, // fix
		CWorldVguiText_m_bEnabled, // fix
		CWorldVguiText_m_clrText, // fix
		CWorldVguiText_m_iTextPanelWidth, // fix
		CWorldVguiText_m_szDisplayText, // fix
		CWorldVguiText_m_szDisplayTextOption, // fix
		CWorldVguiText_m_szFont, // fix
		CWorld_m_WorldMaxs, // fix
		CWorld_m_WorldMins, // fix
		CWorld_m_bColdWorld, // fix
		CWorld_m_bStartDark, // fix
		CWorld_m_flMaxOccludeeArea, // fix
		CWorld_m_flMaxPropScreenSpaceWidth, // fix
		CWorld_m_flMinOccluderArea, // fix
		CWorld_m_flMinPropScreenSpaceWidth, // fix
		CWorld_m_flWaveHeight, // fix
		CWorld_m_iTimeOfDay, // fix
		CWorld_m_iszDetailSpriteMaterial, // fix
		DustTrail_m_Color, // fix
		DustTrail_m_EndSize, // fix
		DustTrail_m_MaxDirectedSpeed, // fix
		DustTrail_m_MaxSpeed, // fix
		DustTrail_m_MinDirectedSpeed, // fix
		DustTrail_m_MinSpeed, // fix
		DustTrail_m_Opacity, // fix
		DustTrail_m_ParticleLifetime, // fix
		DustTrail_m_SpawnRadius, // fix
		DustTrail_m_SpawnRate, // fix
		DustTrail_m_StartSize, // fix
		DustTrail_m_StopEmitTime, // fix
		DustTrail_m_bEmit, // fix
		ParticleSmokeGrenade_m_CurrentStage, // fix
		ParticleSmokeGrenade_m_FadeEndTime, // fix
		ParticleSmokeGrenade_m_FadeStartTime, // fix
		ParticleSmokeGrenade_m_MaxColor, // fix
		ParticleSmokeGrenade_m_MinColor, // fix
		ParticleSmokeGrenade_m_flSpawnTime, // fix
		RocketTrail_m_EndColor, // fix
		RocketTrail_m_EndSize, // fix
		RocketTrail_m_MaxSpeed, // fix
		RocketTrail_m_MinSpeed, // fix
		RocketTrail_m_Opacity, // fix
		RocketTrail_m_ParticleLifetime, // fix
		RocketTrail_m_SpawnRadius, // fix
		RocketTrail_m_SpawnRate, // fix
		RocketTrail_m_StartColor, // fix
		RocketTrail_m_StartSize, // fix
		RocketTrail_m_StopEmitTime, // fix
		RocketTrail_m_bDamaged, // fix
		RocketTrail_m_bEmit, // fix
		RocketTrail_m_flFlareScale, // fix
		RocketTrail_m_nAttachment, // fix
		SmokeTrail_m_EndColor, // fix
		SmokeTrail_m_EndSize, // fix
		SmokeTrail_m_MaxDirectedSpeed, // fix
		SmokeTrail_m_MaxSpeed, // fix
		SmokeTrail_m_MinDirectedSpeed, // fix
		SmokeTrail_m_MinSpeed, // fix
		SmokeTrail_m_Opacity, // fix
		SmokeTrail_m_ParticleLifetime, // fix
		SmokeTrail_m_SpawnRadius, // fix
		SmokeTrail_m_SpawnRate, // fix
		SmokeTrail_m_StartColor, // fix
		SmokeTrail_m_StartSize, // fix
		SmokeTrail_m_StopEmitTime, // fix
		SmokeTrail_m_bEmit, // fix
		SmokeTrail_m_nAttachment, // fix
		SporeExplosion_m_bDontRemove, // fix
		SporeExplosion_m_bEmit, // fix
		SporeExplosion_m_flEndSize, // fix
		SporeExplosion_m_flParticleLifetime, // fix
		SporeExplosion_m_flSpawnRadius, // fix
		SporeExplosion_m_flSpawnRate, // fix
		SporeExplosion_m_flStartSize, // fix
		SporeTrail_m_bEmit, // fix
		SporeTrail_m_flEndSize, // fix
		SporeTrail_m_flParticleLifetime, // fix
		SporeTrail_m_flSpawnRadius, // fix
		SporeTrail_m_flSpawnRate, // fix
		SporeTrail_m_flStartSize, // fix
		SporeTrail_m_vecEndColor, // fix
		string_CCSPlayer_m_bWaitForNoAttack, // fix
		string_CCSPlayer_m_iMoveState, // fix
		string_CCSPlayer_m_bStrafing, // fix
		string_CCSPlayer_m_flVelocityModifier, // fix
		string_CCSPlayer_m_flThirdpersonRecoil, // fix
		string_CBaseCSGrenade_m_fThrowTime, // fix
		string_CBaseCSGrenade_m_bIsHeldByPlayer, // fix
		COUNT
	}; 
	enum class randomized_hash : uint64_t
	{
		INVALID, // fix
		interface_client = 0x5f950a0a80a3602f, // fix
		interface_entity_list = 0x6c385bd25d7515dc, // fix
		interface_engine = 0x6440607e060e109e, // fix
		interface_prediction = 0x26a97ec0b735deb7, // fix
		interface_move_helper = 0x8f4a73c18daee058, // fix
		interface_game_movement = 0xd75d1befa6d6d735, // fix
		interface_globals = 0xf77913ec3e42ea52, // fix
		interface_model_info = 0xe6cac7b2e9976c3d, // fix
		interface_model_render = 0xe3e936ce05a72e2b, // fix
		interface_material_system = 0x3ad18aca66376bda, // fix
		interface_render_view = 0x790f990969dc5c18, // fix
		interface_cvar = 0x8f55ff2c0fefbe56, // fix
		interface_view_render = 0xabbccb3ba14ee0d5, // fix
		interface_view_render_beams = 0xed2603878b1f74ff, // fix
		interface_game_event_manager = 0x6f1b5aa76b5df513, // fix
		interface_input = 0xde6f3f4ef883f99c, // fix
		interface_surface_props = 0x8c0d5321f0b55127, // fix
		interface_engine_trace = 0x87f54b604cacb31b, // fix
		interface_client_state = 0x5fbe0848386fd392, // fix
		interface_surface = 0x19ba827cfeeb5c2f, // fix
		interface_memalloc = 0xc6f89eb36d5f7ba2, // fix
		interface_debug_overlay = 0x9c0d656be6725d09, // fix
		interface_glow_object_manager = 0xffded58aba583ff3, // fix
		interface_panel = 0x52b684dfbffcfb62, // fix
		interface_engine_sound = 0x45aa27a084871bf4, // fix
		interface_game_rules_proxy = 0xfbd1b1bbd3bb0344, // fix
		interface_weapon_system = 0x2b0da6699acd5c34, // fix
		interface_inventory_manager = 0xe8f710ad17d022b, // fix
		interface_localize = 0x83f31d18b940f139, // fix
		interface_hud = 0x8de9a3e322980a23, // fix
		interface_player_resource = 0x836ed98c6b680ebe, // fix
		interface_client_leaf_system = 0xfaad2eda7ec3bc89, // fix
		interface_effects = 0x20750c864318f814, // fix
		interface_host_state = 0x7599ce1a016975ac, // fix
		interface_mdl_cache = 0x666b408c6215997d, // fix
		interface_studio_render = 0xcf8a4047210c766c, // fix
		interface_hardware_config = 0xc52b5fcd8352bca3, // fix
		interface_client_tools = 0x56771e6cf50e30d7, // fix
		interface_string_tables = 0x5c84e5915958a7cc, // fix
		interface_file_system = 0x2a8ad0072483d28a, // fix
		interface_key_values_system = 0x3262ce915f099d86, // fix
		interface_panoroama_ui_engine = 0x78e6638549535e70, // fix
		sig_set_abs_angles = 0xc3a1d32b56be3c0a, // fix
		sig_set_abs_origin = 0xf5fed60fecacc639, // fix
		sig_update_anim_state = 0x36e25bdc1aafb9c, // fix
		sig_ret_to_cam_think = 0x8e46e062d10cca1a, // fix
		sig_ret_to_draw_notify = 0xc42fd79f0b3ccc21, // fix
		sig_ret_to_console_print = 0xff1351fa04f03551, // fix
		sig_ret_to_add_notify = 0x3e5770e237a5bc6d, // fix
		sig_ret_to_draw_crosshair = 0xf4d2f2974f9ccf48, // fix
		sig_standard_blending_rules = 0xd84a911496dd8db7, // fix
		sig_build_transformations = 0x46ff1c8303762609, // fix
		sig_smoke_count = 0x6f2142ec04a92cbd, // fix
		sig_get_econ_item_view = 0xde09f04773c692f6, // fix
		sig_get_sequence_act = 0x7407bc9dfeb3749c, // fix
		sig_invalidate_physics_recursive = 0xe8d207d9683a4a6c, // fix
		sig_is_breakable_entity = 0x3928934d6183bc59, // fix
		sig_print_dev_console = 0xbe3564b811e31920, // fix
		sig_find_element = 0xd157c3ed52bcca0c, // fix
		sig_physics_run_think = 0xbe65f44b305283c3, // fix
		sig_cmbat_get_econ_item_view = 0xa41fb05f6d69b274, // fix
		sig_get_static_data = 0xffd223aa73aacd6d, // fix
		sig_disable_post_processing = 0x7db4e75e1b9c0305, // fix
		sig_gc_client_system = 0xecaa3a902f2c0ca8, // fix
		sig_lookup_bone = 0xccce944e060efa52, // fix
		sig_modifier_table = 0x24abb75e7aa89a9f, // fix
		sig_load_named_sky = 0x7cc3509a642a2b4f, // fix
		sig_reveal_ranks = 0x490096b3438f7447, // fix
		sig_set_clantag = 0x64ede781a38595c9, // fix
		sig_deathnotice_check = 0x94dec95c82240968, // fix
		sig_clear_deathnotices = 0x2dbdf37b9113c2a3, // fix
		sig_get_checksum = 0x2b235adc6e6c4eb7, // fix
		sig_equip_glove = 0x1f34daeac2361f6c, // fix
		sig_item_system = 0x37a20d6d8a56250b, // fix
		sig_parse_kits_addr = 0x22fe44c274a525b2, // fix
		sig_util_traceline = 0x2f2466365ccb3d99, // fix
		sig_cl_send_move_limit = 0xc1d502903983da83, // fix
		sig_is_ready = 0x844414dc022a48b3, // fix
		sig_ret_to_setup_velocity = 0xc278b4f3e0f7065e, // fix
		sig_ret_to_post_data_update = 0x5cd9aa968b4d3fb0, // fix
		sig_ret_to_enable_inventory = 0xf57ee05864d091f0, // fix
		sig_interp_clamp = 0xfb2fdd263a27cfcf, // fix
		sig_ret_to_trace_ray = 0xc42fea9560ccb04f, // fix
		sig_ret_to_scope_arc = 0xde35d7f5d0a98680, // fix
		sig_ret_to_scope_lens = 0x80bc033e163cc897, // fix
		sig_post_process_params = 0x8a472a0253bb9bcc, // fix
		sig_ret_to_post_network_data_received = 0x2d63be606e1fa146, // fix
		sig_ret_to_add_viewmodel_stattrak = 0x6a6162f106471169, // fix
		sig_trace_to_studio_csgo_hitgroups_priority = 0x2a02701b6bf52941, // fix
		sig_should_skip_anim_frame_check = 0xaaf1277028c4f501, // fix
		sig_somelimit = 0x553941c2f4d8b3bb, // fix
		sig_cvar_check = 0xedbda623d3778a9b, // fix
		sig_cs_player_pred_map = 0x9adff113adfb11a9, // fix
		sig_base_cs_grenade_pred_map = 0x4f4704ca45599e97, // fix
		sig_decoy_map = 0xa9d81915fb27c10f, // fix
		sig_he_map = 0x23c2b096e07b958b, // fix
		sig_molotov_map = 0xd7807f9e9fed2f0a, // fix
		sig_sensor_map = 0x706ab85882b09958, // fix
		sig_smoke_map = 0x4bdd967c514bbc3e, // fix
		sig_flash_map = 0x3fd82477f4eaad14, // fix
		sig_view_matrix = 0x7378065cf3cf3ee3, // fix
		sig_get_item_schema = 0xfb3531a96a1def63, // fix
		sig_econ_item_destructor = 0x82fb50c135ebdb7d, // fix
		sig_create_econ_item = 0x764724ad07435df7, // fix
		sig_animstate_reset = 0x7a080929c9427337, // fix
		sig_update_layer_order_preset = 0xd3928a0a000aee7a, // fix
		sig_update_equipped_state = 0xf9fdcadc7a6bfa90, // fix
		sig_set_custom_name = 0x57b8272470418e1e, // fix
		sig_set_custom_desc = 0xac82ecfd210f52da, // fix
		sig_set_dynamic_attribute_value = 0x5277811952b3c6a8, // fix
		sig_empty_mapping = 0xd6dbb554069ac8be, // fix
		sig_simulation_tick = 0x8af4a3de8f194409, // fix
		sig_predictable = 0x1e735fa6e85569b3, // fix
		sig_custom_materials = 0x82ed461ec04ded4d, // fix
		sig_custom_material_initialized = 0xd5797cf73ae8480c, // fix
		sig_visual_data_processors = 0x365df4bd5653106b, // fix
		sig_spawn_time = 0x36d78d39e79d9c99, // fix
		sig_ragdoll = 0x28e7810dc53fbd79, // fix
		sig_lod_data = 0xacbf4f1499219b73, // fix
		sig_ik_context = 0x1aaa2f94874993c8, // fix
		sig_snapshot_front = 0x97e44dae4dc040d2, // fix
		sig_snapshot_back = 0x4a0399fd6f773762, // fix
		sig_blend_tick = 0xda223f69b39a03aa, // fix
		sig_get_follow_entity = 0xba7e6a57adb7a936, // fix
		sig_last_client_fire_bullet_time = 0x8fef9060f2ef5d10, // fix
		sig_final_predicted_tick = 0xc293e4b747ec1b83, // fix
		sig_occlusion_mask = 0x9ed793f64d58a70b, // fix
		sig_anim_state = 0xe5eaa2bde336258e, // fix
		sig_command_context = 0xa50337dcd09661af, // fix
		sig_send_matching_sequence = 0x2ed0be87e4333543, // fix
		sig_sound_channels = 0xaed9917eace9b3ae, // fix
		sig_activity_mapping = 0x7fb7c0f42b8bccd9, // fix
		sig_load_from_buffer = 0x13947a28b0465e6f, // fix
		sig_modifier_table_find = 0x9bffcda7fde569af, // fix
		sig_modifier_table_add_string = 0x8bfc48597180fee, // fix
		sig_allocate_thread_id = 0xebbe2b091ab1a29c, // fix
		sig_game_tonemap_settings = 0xa258d7a0fc7583f2, // fix
		sig_length_disasm_game = 0xfc01c181da864751, // fix
		sig_get_active_weapon_pre// fix = 0x3c6f262f093a6bc5, // fix
		sig_get_layer_ideal_weight_from_sequence_cycle = 0x88f12f1c34e38bdb, // fix
		sig_on_simulation_time_changing = 0x25b320b6116e414b, // fix
		sig_get_root_move_parent = 0x20da1a154c6181a5, // fix
		sig_ik_context_construct = 0xe128512265b13fc2, // fix
		sig_ik_context_destruct = 0x11534a4626666c20, // fix
		sig_ik_context_init = 0xb2c6146356918fda, // fix
		sig_ik_context_update_targets = 0x4243e94e46b30e6d, // fix
		sig_ik_context_solve_dependencies = 0x55c1dbb92e1ec3bc, // fix
		sig_allocate_and_merge_bones = 0xb21b578e8baef74e, // fix
		sig_lookup_sequence = 0x1c4a557c9bfb7a77, // fix
		sig_ammodef_get = 0xefc47e99804bf3ae, // fix
		sig_get_any_sequence_anim_tag = 0xe382250d2739e109, // fix
		sig_accumulate_interleaved_dispatch_layers = 0x9e0ab02648d6dec2, // fix
		sig_process_sockets = 0x3a655f43b624ad97, // fix
		sig_sequence_hash_find_hash = 0xfd495a1c1331db3d, // fix
		sig_activity_mapping_reinitialize = 0x6a268ae9fdd681dc, // fix
		sig_find_mapping = 0x79ff80b300ad6edb, // fix
		sig_index_model_sequences = 0x5702b8e62c301614, // fix
		sig_get_seq_desc = 0x37c02d1de6599d32, // fix
		sig_keyvalues_init = 0xdcb56c67c29b0bc6, // fix
		sig_ret_is_box_visible = 0x20cb21764825de8d, // fix
		sig_random_int = 0x6485da38febb6def, // fix
		sig_random_float = 0x9f28ebb140ec6b54, // fix
		sig_random_seed = 0xa9d0ca2a2018206e, // fix
		sig_var_mapping = 0x23f8ce10d236b32c, // fix
		sig_free_thread_id = 0x368a70267dc2e07a, // fix
		sig_tls_slots = 0xb7ff556dffc6bd0d, // fix
		sig_projectile_throwtime = 0x271b6c0ead7c5223, // fix
		sig_init_materials = 0x4a5eccceeb9450d3, // fix
		sig_render_box = 0xe5e5361c3aed2bab, // fix
		sig_render_triangle = 0x4084b1f5af766864, // fix
		sig_vertex_color_ignorez = 0x421ad52f24202e67, // fix
		sig_cycle_offset = 0x99e1e9f60b24c822, // fix
		sig_studio_hdr = 0x563bb31969029fcb, // fix
		sig_anim_layers = 0x9665292cb4111d9a, // fix
		sig_is_ragdoll = 0x70a6503ef295cb76, // fix
		sig_bone_accessor = 0xeb3755e6bad933a2, // fix
		sig_cl_move_rest = 0xf41f919564b5ec2c, // fix
		sig_post_build_transformations = 0xa5d317be84988d7d, // fix
		sig_ret_to_post_build_transformations = 0xf7e51cb552fd6c89, // fix
		sig_collision_viewheight = 0xae612a2a483a6d6b, // fix
		sig_collision_bounds_change_time = 0x6c4d16976aff155d, // fix
		sig_velocity_patch = 0xcf3a383181847d10, // fix
		sig_kv_find_key = 0x4f9d628db60e3ee9, // fix
		sig_kv_set_string = 0xa4557c286017c4bb, // fix
		sig_surface_props = 0xffab6bcc261e87d9, // fix
		sig_animstate_update_setabsagles = 0x54fadacf51da2153, // fix
		sig_mdl_create = 0x9789a04ac66bf9e7, // fix
		sig_set_merged_mdl = 0x46f1e57a84d3bd9f, // fix
		sig_setup_bones_attachment_queries = 0x2ef716a844a6b2d, // fix
		sig_disable_render_target_allocation = 0xad19d20fdcd8e729, // fix
		sig_get_sequence_flags = 0x5a8a09edb5f04c07, // fix
		sig_get_iron_sight_controller = 0x7ebc53443bd4a483, // fix
		sig_enable_invalidate_bone_cache = 0x85f4cad4a73163ae, // fix
		sig_line_goes_through_smoke = 0xab4ea08fa80ef9d3, // fix
		sig_keyvalues_from_netsmg = 0x4d6c9d40d263e493, // fix
		sig_model_bone_counter = 0x14e6506ffbb13745, // fix
		sig_most_recent_model_bone_counter = 0x1cdbca2d35d66384, // fix
		sig_accumulated_bone_mask = 0x7a06f8075c3fc5d9, // fix
		sig_ret_hitbox_to_world_transforms = 0xd944c1fbf9f30816, // fix
		sig_emit_sound = 0xdf27340904c8e291, // fix
		sig_add_to_dirty_kd_tree = 0xa3ed8cb48150e850, // fix
		sig_get_player_viewmodel_arm_config_for_player_model = 0xeaf555c71684af44, // fix
		sig_client_side_addons_mask = 0xff4c0d4bbe52728c, // fix
		sig_assassination_target_addon = 0x4289306533a1de03, // fix
		sig_update_addon_models = 0xd9be6e5829728741, // fix
		sig_msg_voicedata_constructor = 0xda3234919a1013cd, // fix
		sig_parse_svg = 0x704eef6dd19fbea6, // fix
		sig_construct_image = 0x705303633604c8a3, // fix
		sig_load_text_file = 0xe2623217e738ec69, // fix
		sig_econ_item_system = 0xa57ad877c88f3161, // fix
		sig_clear_hud_weapon_icon = 0x907c4b8b72ef8bb2, // fix
		sig_skinchanger_spam_patch = 0xaee4871f8a147d5d, // fix
		sig_cvar_vac_check = 0x5aedb57129182c8d, // fix
		sig_v8_try_catch_ctor = 0x56d1d7490683de7a, // fix
		sig_v8_try_catch_dtor = 0x1b384287969370cb, // fix
		sig_v8_handle_scope_ctor = 0x6c0ada14a39d025f, // fix
		sig_v8_handle_scope_dtor = 0x5bdb2735302116ec, // fix
		sig_v8_handle_scope_create_handle = 0xddf66335dc5781cf, // fix
		sig_v8_context_enter = 0x9b878b804e6fcf0d, // fix
		sig_v8_context_exit = 0xdcefdd2ce5eb9aca, // fix
		sig_v8_isolate_enter = 0x45f80fe2ea51825c, // fix
		sig_v8_isolate_exit = 0x6d19cc3d12b67d2f, // fix
		sig_v8_array_get = 0xd2f263419dcacbb8, // fix
		sig_v8_array_length = 0xa703567802d35bd7, // fix
		sig_v8_object_get = 0x7fc0da138aeb5e5a, // fix
		sig_v8_object_get_property_names = 0xe90245bda328b2a6, // fix
		sig_v8_value_is_boolean = 0xba1a8d484b43d3b9, // fix
		sig_v8_value_is_boolean_object = 0xd5572bd15538c247, // fix
		sig_v8_value_is_number = 0xc177fa82dfc331b7, // fix
		sig_v8_value_is_number_object = 0xc696d67e09ae4515, // fix
		sig_v8_value_is_string = 0xfb7c81fa6df31504, // fix
		sig_v8_value_is_string_object = 0xa766d1be1d2070c4, // fix
		sig_v8_value_is_object = 0xdb10af337a2747c7, // fix
		sig_v8_value_is_array = 0xae8c9cb1f30ad02c, // fix
		sig_v8_value_is_function = 0x320bdf6992cd2ec7, // fix
		sig_v8_value_boolean_value = 0x7e415ee1617a26d6, // fix
		sig_v8_value_number_value = 0xdc4039f8770af745, // fix
		sig_v8_value_to_object = 0x8276c83f41ec807, // fix
		sig_v8_string_utf8_ctor = 0xfad7d6eff6a35a69, // fix
		sig_v8_string_utf8_dtor = 0x15cc746a7d3ef18, // fix
		sig_ui_engine_get_panel_context = 0x4c29beb59a98e3b7, // fix
		sig_ui_engine_compile = 0x22ba178ee05ccf46, // fix
		sig_ui_engine_run_compiled_script = 0xd5dbbeed58e45686, // fix
		hook_start_sound_immediate = 0x990dab3806027c7a, // fix
		hook_set_bodygroup = 0xcfc09f1182194d97, // fix
		hook_modify_eye_pos = 0x491badae37a51539, // fix
		hook_wnd_proc = 0x4ef9c358397a889c, // fix
		hook_create_move = 0xcc6f95dfa70625ea, // fix
		hook_cl_move = 0xc63d7273a28faf9f, // fix
		hook_frame_stage_notify = 0x6a7b1934c5b5c21e, // fix
		hook_on_latch_interp_var = 0xa90f0072debe2a89, // fix
		hook_draw_model_execute = 0x9a3bc7b96d14f333, // fix
		hook_render_view = 0x25f1228ddc2f1e07, // fix
		hook_level_init_post_entity = 0x280c26b83961ba26, // fix
		hook_level_init_pre_entity = 0x729295c7377eb207, // fix
		hook_get_tonemap_settings_from_env_tonemap_controller = 0x3e932b84a97ef6c7, // fix
		hook_draw_3d_debug_overlays = 0x24070b2803d431fe, // fix
		hook_shader_api_draw_mesh = 0x77ee3a2f8e795525, // fix
		hook_is_box_visible = 0xec50c1681c9aa2ea, // fix
		hook_scene_end = 0x8ae102424f9e5582, // fix
		hook_calc_renderable_world_space_aabb_bloated = 0xab3a239ae85e91a9, // fix
		hook_add_renderables_to_render_lists = 0x90b230caba9aaa11, // fix
		hook_do_post_screen_space_effects = 0x259621dbf366a0e9, // fix
		hook_present = 0x32811d6f6273efc8, // fix
		hook_reset = 0x870f7d4c53e54974, // fix
		hook_send_net_msg = 0xf6b854664fcfb742, // fix
		hook_override_view = 0xd381297748e74142, // fix
		hook_paint_traverse = 0xf041529e5c99b25c, // fix
		hook_find_material = 0xafce1a76451c3eaa, // fix
		hook_emit_sound = 0x4218a1c6e65d4bf, // fix
		hook_is_connected = 0xc79ed9aa925c7346, // fix
		hook_lock_cursor = 0xfdbb17cf96fa92fa, // fix
		hook_draw_set_color = 0xf375acdadc1aab56, // fix
		hook_test_hitboxes = 0xc9a81a4de6e38d34, // fix
		hook_setup_bones = 0x3586d0b0d52987ba, // fix
		hook_animating_setup_bones = 0x3d79f16247eb1209, // fix
		hook_post_data_update = 0x4a0670488e5d711d, // fix
		hook_maintain_sequence_transitions = 0x6141e72da1f1a21c, // fix
		hook_trace_ray = 0x46bb5189baab0927, // fix
		hook_run_command = 0x7145f23f9b17caa2, // fix
		hook_process_movement = 0xfefadab07504ee3c, // fix
		hook_transfer_data = 0xde8067607dd7df6, // fix
		hook_perform_prediction = 0x6bf91d343bc1684d, // fix
		hook_packet_start = 0xdbdac78d4924460a, // fix
		hook_level_shutdown = 0x77d6660ced6d82d9, // fix
		hook_physics_simulate = 0x3ece973107939ebe, // fix
		hook_estimate_abs_velocity = 0xf89f58d409182b53, // fix
		hook_interpolate = 0x4ecc6f775ed1edc4, // fix
		hook_reset_latched = 0x8e0961469f245ad3, // fix
		hook_send_weapon_anim = 0x61b4addf221f947b, // fix
		hook_fire_event = 0xbbbd323e2cf85ff5, // fix
		hook_do_animation_events = 0xfc32d9f3ed9c6198, // fix
		hook_deploy = 0x5614288d932fb445, // fix
		hook_get_fov = 0x8c6c10fa79ebe735, // fix
		hook_effects = 0x26c2c48fa6d46f85, // fix
		hook_sequence = 0xda9e4d6e9ec54131, // fix
		hook_weapon_handle = 0x6a01b6129cba2c58, // fix
		hook_simulation_time = 0x3097c47a58ade16a, // fix
		hook_general_float = 0xe8b3d47d5664939c, // fix
		hook_general_vec = 0x9ae687335e964443, // fix
		hook_general_int = 0x1cb662d9fe6f076d, // fix
		hook_general_bool = 0x18fcd8de56d08083, // fix
		hook_layer_sequence = 0x66b9b8cf938da06b, // fix
		hook_layer_cycle = 0x8e333828d85eadd, // fix
		hook_layer_playback_rate = 0x6bb56564974291c3, // fix
		hook_layer_weight = 0xacfc09ad04e3176d, // fix
		hook_layer_weight_delta_rate = 0xa39a870d082346cb, // fix
		hook_layer_order = 0xdddec391b0fc5c2e, // fix
		hook_convar_get_float_engine = 0x850b6660fa7f09a4, // fix
		hook_convar_get_int_engine = 0x1129dabf8b5c28b2, // fix
		hook_convar_get_int_client = 0x900f0dc4b34deb75, // fix
		hook_eye_position_and_vectors = 0x10542e169aa9272c, // fix
		hook_obb_change_callback = 0x8a574e4906061acb, // fix
		hook_server_cmd_key_values = 0x87e429adabb746e0, // fix
		hook_calc_view = 0xe19616d2eada59e7, // fix
		hook_scale_mouse = 0x1f6a285a54e7df3, // fix
		hook_convar_network_change_callback = 0x8a9ce871608f797c, // fix
		hook_reevauluate_anim_lod = 0xfbf6d5115fc9dbce, // fix
		hook_start_sound = 0xce6828b39d2870dc, // fix
		hook_update_clientside_anim = 0x9c162a2fe2c83b5e, // fix
		hook_do_animation_events_animating = 0x90c4ca2cb57f11b2, // fix
		hook_get_default_fov = 0xeae8a53a690f971c, // fix
		hook_ent_info_list_link_before = 0xc0d164ce2236a0f1, // fix
		hook_extract_occluded_renderables = 0x2658ec388f9414dd, // fix
		hook_sv_msg_voicedata = 0x44212512156f7ba8, // fix
		hook_hud_reticle_process_input = 0x5af1ebd6d40f92d3, // fix
		hook_update_interp_vars = 0x52ffa0481bd63e1d, // fix
		hook_particle_draw_model = 0x3bb4ced54f25aebf, // fix
		CAI_BaseNPC_m_bFadeCorpse = 0xf77050cca345c828, // fix
		CAI_BaseNPC_m_bImportanRagdoll = 0x8723379f1bef0241, // fix
		CAI_BaseNPC_m_bIsMoving = 0xb4f7c16cc82f9e7f, // fix
		CAI_BaseNPC_m_bPerformAvoidance = 0x389bc95fc9a04acc, // fix
		CAI_BaseNPC_m_bSpeedModActive = 0x896e88bf55d54264, // fix
		CAI_BaseNPC_m_flTimePingEffect = 0xbc88e6eef48888e4, // fix
		CAI_BaseNPC_m_iDeathFrame = 0x555c32e0aeea3db2, // fix
		CAI_BaseNPC_m_iDeathPose = 0x2fc25031858d83b0, // fix
		CAI_BaseNPC_m_iSpeedModRadius = 0xc53914369bf5e2de, // fix
		CAI_BaseNPC_m_iSpeedModSpeed = 0xdc59a100dece6085, // fix
		CAI_BaseNPC_m_lifeState = 0x5582ffc5259ce3eb, // fix
		CBRC4Target_m_bBrokenOpen = 0xae5afe64c3cc0df0, // fix
		CBRC4Target_m_flRadius = 0x69bbb988015cbc, // fix
		CBaseAnimating_m_ScaleType = 0x23f650aaeeedfc2f, // fix
		CBaseAnimating_m_bClientSideAnimation = 0x175b5fb4201cddaa, // fix
		CBaseAnimating_m_bClientSideFrameReset = 0x4f595a921b70ee71, // fix
		CBaseAnimating_m_bClientSideRagdoll = 0xa81056fba2cad05a, // fix
		CBaseAnimating_m_bSuppressAnimSounds = 0x946459931de1a2a9, // fix
		CBaseAnimating_m_flCycle = 0x3a83aaf49b79b937, // fix
		CBaseAnimating_m_flEncodedController = 0x450158f6d83180f5, // fix
		CBaseAnimating_m_flFrozen = 0x49143d8cfedcde91, // fix
		CBaseAnimating_m_flModelScale = 0xbf3fca6e9b6538b5, // fix
		CBaseAnimating_m_flPlaybackRate = 0x8bf67f1518c5ac5e, // fix
		CBaseAnimating_m_flPoseParameter = 0x133b5ef3ad67bb93, // fix
		CBaseAnimating_m_hLightingOrigin = 0xcb0a6b8262b47a09, // fix
		CBaseAnimating_m_nBody = 0x334ac86d43a265d4, // fix
		CBaseAnimating_m_nForceBone = 0xd01c30af9ff79359, // fix
		CBaseAnimating_m_nHighlightColorB = 0x7d5211a6a70b5922, // fix
		CBaseAnimating_m_nHighlightColorG = 0x423e4159d443e13e, // fix
		CBaseAnimating_m_nHighlightColorR = 0x766c5bee7ba1295b, // fix
		CBaseAnimating_m_nHitboxSet = 0xfc77f9c51643a85d, // fix
		CBaseAnimating_m_nMuzzleFlashParity = 0xdfcfc06c2db6813, // fix
		CBaseAnimating_m_nNewSequenceParity = 0xc61ed00ecddd31eb, // fix
		CBaseAnimating_m_nResetEventsParity = 0x12827695d0d530ab, // fix
		CBaseAnimating_m_nSequence = 0x63ba532801eb8fd6, // fix
		CBaseAnimating_m_nSkin = 0x49dc7f22512faf37, // fix
		CBaseAnimating_m_vecForce = 0x79f0706d6d96e782, // fix
		CBaseAttributableItem_m_AttributeManager = 0x9757c05b701fe87a, // fix
		CBaseAttributableItem_m_Attributes = 0x911574dca17d5867, // fix
		CBaseAttributableItem_m_Item = 0x35775e41d009c5b3, // fix
		CBaseAttributableItem_m_NetworkedDynamicAttributesForDemos = 0x4f358ac73c9cb39f, // fix
		CBaseAttributableItem_m_OriginalOwnerXuidHigh = 0xcf1a2774a0a3f5c, // fix
		CBaseAttributableItem_m_OriginalOwnerXuidLow = 0x50a467043a8fbedf, // fix
		CBaseAttributableItem_m_ProviderType = 0xd1084cfb1f2e30a4, // fix
		CBaseAttributableItem_m_bInitialized = 0x293554f826663266, // fix
		CBaseAttributableItem_m_flFallbackWear = 0x759b8dfd918516c7, // fix
		CBaseAttributableItem_m_hOuter = 0x401c72af6d22fa21, // fix
		CBaseAttributableItem_m_iAccountID = 0xd1375ef01226791f, // fix
		CBaseAttributableItem_m_iEntityLevel = 0x9ed280999b8b9732, // fix
		CBaseAttributableItem_m_iEntityQuality = 0xb3ef8687bed6c0d6, // fix
		CBaseAttributableItem_m_iItemDefinitionIndex = 0x39737ba90c6ffafb, // fix
		CBaseAttributableItem_m_iItemIDHigh = 0xb6a368e1bb291876, // fix
		CBaseAttributableItem_m_iItemIDLow = 0x36c3f0b2998fa8d6, // fix
		CBaseAttributableItem_m_iReapplyProvisionParity = 0x64a3b77ed9c84e13, // fix
		CBaseAttributableItem_m_nFallbackPaintKit = 0xd3127181fa6dba1, // fix
		CBaseAttributableItem_m_nFallbackSeed = 0x56893511d77050e1, // fix
		CBaseAttributableItem_m_nFallbackStatTrak = 0xce33f719a398ea8e, // fix
		CBaseAttributableItem_m_szCustomName = 0xca7383d3ecbef3a1, // fix
		CBaseButton_m_usable = 0x69fcb813e0c17aa, // fix
		CBaseCSGrenadeProjectile_m_nBounces = 0x6166ae5f5d4177ef, // fix
		CBaseCSGrenadeProjectile_m_nExplodeEffectIndex = 0xa936a6447e2fd545, // fix
		CBaseCSGrenadeProjectile_m_nExplodeEffectTickBegin = 0x251e6c1a8c0c0afd, // fix
		CBaseCSGrenadeProjectile_m_vInitialVelocity = 0x1bf6a9c5b0e83cbd, // fix
		CBaseCSGrenadeProjectile_m_vecExplodeEffectOrigin = 0xa41688537b3f608, // fix
		CBaseCSGrenade_m_bIsHeldByPlayer = 0x7b1d6247b66d9b7e, // fix
		CBaseCSGrenade_m_bLoopingSoundPlaying = 0x1d381a4905531434, // fix
		CBaseCSGrenade_m_bPinPulled = 0x2e9f53b70d3b59e, // fix
		CBaseCSGrenade_m_bRedraw = 0x59e6543776752df7, // fix
		CBaseCSGrenade_m_fDropTime = 0x3f6e0595edf0a1aa, // fix
		CBaseCSGrenade_m_fThrowTime = 0xf3930d815054670e, // fix
		CBaseCSGrenade_m_flThrowStrength = 0x746b5d2723eb75a7, // fix
		CBaseCombatCharacter_m_LastHitGroup = 0xd3874c4b3f4cf790, // fix
		CBaseCombatCharacter_m_flNextAttack = 0x8fc26f042a772f46, // fix
		CBaseCombatCharacter_m_flTimeOfLastInjury = 0x83fed75707f2923f, // fix
		CBaseCombatCharacter_m_hActiveWeapon = 0x3cb50a23c9b0107a, // fix
		CBaseCombatCharacter_m_hMyWeapons = 0xf837a95bb48a4926, // fix
		CBaseCombatCharacter_m_hMyWearables = 0x37e2232ab8e2b5e8, // fix
		CBaseCombatCharacter_m_nRelativeDirectionOfLastInjury = 0xf084433326724f66, // fix
		CBaseCombatWeapon_m_bFlipViewModel = 0xb6a32b1c424f09, // fix
		CBaseCombatWeapon_m_flNextPrimaryAttack = 0xbb68e315fe78cba7, // fix
		CBaseCombatWeapon_m_flNextSecondaryAttack = 0x195b08de18ea1379, // fix
		CBaseCombatWeapon_m_flTimeWeaponIdle = 0x7a0fd609e962bf77, // fix
		CBaseCombatWeapon_m_hOwner = 0x96c360b4ee66adc7, // fix
		CBaseCombatWeapon_m_hWeaponWorldModel = 0xdac67002c46cf975, // fix
		CBaseCombatWeapon_m_iClip1 = 0x9f98fb7cb3e02ba4, // fix
		CBaseCombatWeapon_m_iClip2 = 0xe4764fd6f58eea36, // fix
		CBaseCombatWeapon_m_iNumEmptyAttacks = 0x4b7569d89973153d, // fix
		CBaseCombatWeapon_m_iPrimaryAmmoType = 0x2c2fcf5d3ffd0582, // fix
		CBaseCombatWeapon_m_iPrimaryReserveAmmoCount = 0x743ce9732bcad629, // fix
		CBaseCombatWeapon_m_iSecondaryAmmoType = 0xc0cd041a83b19bc, // fix
		CBaseCombatWeapon_m_iSecondaryReserveAmmoCount = 0x9d5351ab844833e, // fix
		CBaseCombatWeapon_m_iState = 0x6d677b0f8800a105, // fix
		CBaseCombatWeapon_m_iViewModelIndex = 0x59621973f6702981, // fix
		CBaseCombatWeapon_m_iWeaponModule = 0x78faf97bbd843060, // fix
		CBaseCombatWeapon_m_iWeaponOrigin = 0x25b9c56b5f86ce26, // fix
		CBaseCombatWeapon_m_iWorldDroppedModelIndex = 0x7c9d2b63fde8abfc, // fix
		CBaseCombatWeapon_m_iWorldModelIndex = 0xee9fd928ebdac2d, // fix
		CBaseCombatWeapon_m_nNextThinkTick = 0x370253587f715a68, // fix
		CBaseCombatWeapon_m_nViewModelIndex = 0x8d39ba1a83aaf392, // fix
		CBaseDoor_m_flWaveHeight = 0x1a9422c541ca6886, // fix
		CBaseEntity_m_Collision = 0xa3ba2cb19bc88d7e, // fix
		CBaseEntity_m_CollisionGroup = 0xa57f8d342589dc29, // fix
		CBaseEntity_m_angRotation = 0xe253a0d03a1624e2, // fix
		CBaseEntity_m_bAlternateSorting = 0xae3e66a7caa47f84, // fix
		CBaseEntity_m_bAnimatedEveryTick = 0xa034cba57ad311b0, // fix
		CBaseEntity_m_bEligibleForScreenHighlight = 0x648a9c7c70abbbf5, // fix
		CBaseEntity_m_bIsAutoaimTarget = 0xc0bbe0f2ac19530d, // fix
		CBaseEntity_m_bSimulatedEveryTick = 0x773b0864ff994e0c, // fix
		CBaseEntity_m_bSpotted = 0x7f7602eab09c20c2, // fix
		CBaseEntity_m_bSpottedBy = 0x98dc70d88e18263c, // fix
		CBaseEntity_m_bSpottedByMask = 0x1fe759e578ab6ebd, // fix
		CBaseEntity_m_cellX = 0xd4edf0a0d62998b7, // fix
		CBaseEntity_m_cellY = 0x6784a99d68b59160, // fix
		CBaseEntity_m_cellZ = 0x922b7d412d73d85a, // fix
		CBaseEntity_m_cellbits = 0x265e731c275be213, // fix
		CBaseEntity_m_clrRender = 0x6774ae4f7a4d3aa7, // fix
		CBaseEntity_m_fEffects = 0x85c87e1f09c7c2ad, // fix
		CBaseEntity_m_fadeMaxDist = 0xc6432b4a830aa1cb, // fix
		CBaseEntity_m_fadeMinDist = 0xa5394c4b0f4714d7, // fix
		CBaseEntity_m_flAnimTime = 0x8f4d441535903c7, // fix
		CBaseEntity_m_flElasticity = 0xbd9feac2a71e4552, // fix
		CBaseEntity_m_flFadeScale = 0x3f5162c32e253c53, // fix
		CBaseEntity_m_flLastMadeNoiseTime = 0xda62d7729bcde6cd, // fix
		CBaseEntity_m_flMaxFallVelocity = 0xaf84dcd437ba240e, // fix
		CBaseEntity_m_flShadowCastDistance = 0x6fb6a4c986e73f13, // fix
		CBaseEntity_m_flSimulationTime = 0xf9408698b85dc39e, // fix
		CBaseEntity_m_flUseLookAtAngle = 0xdc5ab6e5912be6fd, // fix
		CBaseEntity_m_hEffectEntity = 0xd31a3d49b4994b69, // fix
		CBaseEntity_m_hOwnerEntity = 0x2ebc9579393608c6, // fix
		CBaseEntity_m_iName = 0x228139a8742756e9, // fix
		CBaseEntity_m_iParentAttachment = 0xdc3525a5e2a03337, // fix
		CBaseEntity_m_iPendingTeamNum = 0x1feb258a7705a544, // fix
		CBaseEntity_m_iTeamNum = 0xece7b0944f199380, // fix
		CBaseEntity_m_iTextureFrameIndex = 0xa3b8178d964a5813, // fix
		CBaseEntity_m_nMaxCPULevel = 0x7170fceed36a40eb, // fix
		CBaseEntity_m_nMaxGPULevel = 0x683f2ee9df61bc7e, // fix
		CBaseEntity_m_nMinCPULevel = 0x4c64f82da64e77c6, // fix
		CBaseEntity_m_nMinGPULevel = 0x57369d659e49f3d0, // fix
		CBaseEntity_m_nModelIndex = 0x54325bd637d27594, // fix
		CBaseEntity_m_nRenderFX = 0x45cf59c79f7f959d, // fix
		CBaseEntity_m_nRenderMode = 0xf1ec832155c6b8e2, // fix
		CBaseEntity_m_nSolidType = 0xe25dd0390236843c, // fix
		CBaseEntity_m_nSurroundType = 0x32d510d55f44171d, // fix
		CBaseEntity_m_triggerBloat = 0xc6f1e81cffd96743, // fix
		CBaseEntity_m_usSolidFlags = 0xdcf8fba14903917e, // fix
		CBaseEntity_m_vecMaxs = 0xfe5474422492f78a, // fix
		CBaseEntity_m_vecMins = 0x407607d9c33369d7, // fix
		CBaseEntity_m_vecOrigin = 0x6ab3bfccb7fdd5ff, // fix
		CBaseEntity_m_vecSpecifiedSurroundingMaxs = 0xa3027aea24c92241, // fix
		CBaseEntity_m_vecSpecifiedSurroundingMins = 0xee4c431d69b292a5, // fix
		CBaseEntity_moveparent = 0x4da303540b344168, // fix
		CBaseFlex_m_blinktoggle = 0xa36975853e2bad62, // fix
		CBaseFlex_m_flexWeight = 0x27f57bdee2e1765f, // fix
		CBaseFlex_m_viewtarget = 0x3826a92f485a41dd, // fix
		CBaseGrenade_m_DmgRadius = 0xa8c5d463fac2bbbe, // fix
		CBaseGrenade_m_bIsLive = 0x14adf02022a46f7d, // fix
		CBaseGrenade_m_fFlags = 0xb81cf00c758e8067, // fix
		CBaseGrenade_m_flDamage = 0x6826ff76802f2323, // fix
		CBaseGrenade_m_hThrower = 0x6cf4330597ee2588, // fix
		CBaseGrenade_m_vecVelocity = 0x7d4d7191b9610275, // fix
		CBasePlayer_deadflag = 0xfa77f70f60aa18cc, // fix
		CBasePlayer_m_Local = 0xebd83efd644f1ebc, // fix
		CBasePlayer_m_PlayerFog_m_hCtrl = 0x765c3e9be2b6b322, // fix
		CBasePlayer_m_afPhysicsFlags = 0xf07e3040310dfb0f, // fix
		CBasePlayer_m_aimPunchAngle = 0x653b5dd6d19586f, // fix
		CBasePlayer_m_aimPunchAngleVel = 0x168988176d651f87, // fix
		CBasePlayer_m_audio_entIndex = 0x44f4d15eb8b85d1a, // fix
		CBasePlayer_m_audio_localBits = 0x99aa31d909418606, // fix
		CBasePlayer_m_audio_localSound_0_ = 0xdd8024843159045f, // fix
		CBasePlayer_m_audio_localSound_1_ = 0x97430310fc2143d9, // fix
		CBasePlayer_m_audio_localSound_2_ = 0x1730cd65bb96e6ac, // fix
		CBasePlayer_m_audio_localSound_3_ = 0x9d958c76ee32077f, // fix
		CBasePlayer_m_audio_localSound_4_ = 0xe7fdb66ef3d059ba, // fix
		CBasePlayer_m_audio_localSound_5_ = 0x6f2c3c184d5941a, // fix
		CBasePlayer_m_audio_localSound_6_ = 0x238243bbfb6dcf09, // fix
		CBasePlayer_m_audio_localSound_7_ = 0xcce30978e403d2cf, // fix
		CBasePlayer_m_audio_soundscapeIndex = 0xa42157546db1cac4, // fix
		CBasePlayer_m_bActiveCameraMan = 0xf19e3a1a5e62c6b9, // fix
		CBasePlayer_m_bAllowAutoMovement = 0x79e0ec34391b6cc4, // fix
		CBasePlayer_m_bCameraManOverview = 0xdc57a72ed929b556, // fix
		CBasePlayer_m_bCameraManScoreBoard = 0xad6a03d8534579c3, // fix
		CBasePlayer_m_bCameraManXRay = 0x998306a393154514, // fix
		CBasePlayer_m_bConstraintPastRadius = 0x9e7f5f88ef3ac97b, // fix
		CBasePlayer_m_bDrawViewmodel = 0x25659f6dd87fbb03, // fix
		CBasePlayer_m_bDucked = 0xe5e9268ea59d7efb, // fix
		CBasePlayer_m_bDucking = 0xa84266fda7eae536, // fix
		CBasePlayer_m_bInDuckJump = 0xd8058a0cd8913f89, // fix
		CBasePlayer_m_bPoisoned = 0x80ce1626d4ab24da, // fix
		CBasePlayer_m_bShouldDrawPlayerWhileUsingViewEntity = 0xe137a49ae9204ed2, // fix
		CBasePlayer_m_bWearingSuit = 0xe8d187445db06973, // fix
		CBasePlayer_m_chAreaBits = 0xedffeea2b5c19713, // fix
		CBasePlayer_m_chAreaPortalBits = 0xd581eaa65f51d5c9, // fix
		CBasePlayer_m_fFlags = 0xee7d3aa66d3cddc7, // fix
		CBasePlayer_m_fForceTeam = 0x7f2b38a5796aef2e, // fix
		CBasePlayer_m_fOnTarget = 0xeb3c22c5e57cb4ce, // fix
		CBasePlayer_m_flConstraintRadius = 0xbabba774f6f5fb37, // fix
		CBasePlayer_m_flConstraintSpeedFactor = 0x767a501ee1a053d2, // fix
		CBasePlayer_m_flConstraintWidth = 0x828c083948579e99, // fix
		CBasePlayer_m_flDeathTime = 0x1824ccb7ec3fca7e, // fix
		CBasePlayer_m_flDuckAmount = 0x5bf0ee44492acdae, // fix
		CBasePlayer_m_flDuckSpeed = 0xce81b3df3e259519, // fix
		CBasePlayer_m_flFOVRate = 0x277a3f0fb27e666e, // fix
		CBasePlayer_m_flFOVTime = 0xeddc9d81751f8719, // fix
		CBasePlayer_m_flFallVelocity = 0xffc91488c43f127e, // fix
		CBasePlayer_m_flFriction = 0x4d573cf82a956cc8, // fix
		CBasePlayer_m_flLaggedMovementValue = 0x70c34fa086a5eb00, // fix
		CBasePlayer_m_flLastDuckTime = 0xc3b3fdc59a753dd4, // fix
		CBasePlayer_m_flMaxspeed = 0xdb4a410e9922304b, // fix
		CBasePlayer_m_flNextDecalTime = 0x5fa59b2ff91e8e31, // fix
		CBasePlayer_m_flStepSize = 0x2066aa9a47509e83, // fix
		CBasePlayer_m_hColorCorrectionCtrl = 0xf230dea5efa76a93, // fix
		CBasePlayer_m_hConstraintEntity = 0xe93eeff356801ee7, // fix
		CBasePlayer_m_hGroundEntity = 0x33742923b236d9a2, // fix
		CBasePlayer_m_hLastWeapon = 0x7b3c97fc3e156bd9, // fix
		CBasePlayer_m_hObserverTarget = 0x9119fc96090c793, // fix
		CBasePlayer_m_hPostProcessCtrl = 0x51299fa45b51789e, // fix
		CBasePlayer_m_hTonemapController = 0x8b5484a9adacfc9c, // fix
		CBasePlayer_m_hUseEntity = 0x6c846e686cdc7d53, // fix
		CBasePlayer_m_hVehicle = 0x96cb57724b52381e, // fix
		CBasePlayer_m_hViewEntity = 0x6d61e6cd8c5d4673, // fix
		CBasePlayer_m_hViewModel_0_ = 0xcc0167e8d34b8a9f, // fix
		CBasePlayer_m_hZoomOwner = 0x7a64c50fa5cef81d, // fix
		CBasePlayer_m_iAmmo = 0x5d06d8be01f39b1f, // fix
		CBasePlayer_m_iBonusChallenge = 0x723f90339b13fec1, // fix
		CBasePlayer_m_iBonusProgress = 0x9ecb967753a2711c, // fix
		CBasePlayer_m_iCoachingTeam = 0x632f200afd68e3c7, // fix
		CBasePlayer_m_iDeathPostEffect = 0xa6c0d949698038fb, // fix
		CBasePlayer_m_iDefaultFOV = 0xdc5be8568bd68b85, // fix
		CBasePlayer_m_iFOV = 0xf297e45dfe9b9310, // fix
		CBasePlayer_m_iFOVStart = 0x5809dc8ff227f4b7, // fix
		CBasePlayer_m_iHealth = 0xf84e0f8a7c38841c, // fix
		CBasePlayer_m_iHideHUD = 0x55274be2803567fc, // fix
		CBasePlayer_m_iObserverMode = 0xc3ae2f9838635fe9, // fix
		CBasePlayer_m_ladderSurfaceProps = 0x707649eb725ba869, // fix
		CBasePlayer_m_lifeState = 0xb15af6a7a3f03994, // fix
		CBasePlayer_m_nDuckJumpTimeMsecs = 0xb0cd24598c97914e, // fix
		CBasePlayer_m_nDuckTimeMsecs = 0x4b202c41804f482e, // fix
		CBasePlayer_m_nJumpTimeMsecs = 0xd877d47f79d2cc6f, // fix
		CBasePlayer_m_nNextThinkTick = 0x1eb0283162608875, // fix
		CBasePlayer_m_nOldButtons = 0x60a0dbc86038712, // fix
		CBasePlayer_m_nTickBase = 0x4b766eb783a044e4, // fix
		CBasePlayer_m_nWaterLevel = 0x82c464379a76051c, // fix
		CBasePlayer_m_skybox3d_area = 0x23fa34aa78bde309, // fix
		CBasePlayer_m_skybox3d_fog_HDRColorScale = 0x86c21e6ada8756c8, // fix
		CBasePlayer_m_skybox3d_fog_blend = 0x33204ef40750e108, // fix
		CBasePlayer_m_skybox3d_fog_colorPrimary = 0x330833a664603de5, // fix
		CBasePlayer_m_skybox3d_fog_colorSecondary = 0x78114ad44d592b8f, // fix
		CBasePlayer_m_skybox3d_fog_dirPrimary = 0x3da8274163583d34, // fix
		CBasePlayer_m_skybox3d_fog_enable = 0x4b191cdc290ce6ac, // fix
		CBasePlayer_m_skybox3d_fog_end = 0x1b1ffade9088e92c, // fix
		CBasePlayer_m_skybox3d_fog_maxdensity = 0x2f4c73566511228e, // fix
		CBasePlayer_m_skybox3d_fog_start = 0x503619cb43c404c1, // fix
		CBasePlayer_m_skybox3d_origin = 0x2f573be63f49df9d, // fix
		CBasePlayer_m_skybox3d_scale = 0xb47f5a92bc4a496d, // fix
		CBasePlayer_m_szLastPlaceName = 0x9737fe794e163c1e, // fix
		CBasePlayer_m_uCameraManGraphs = 0x2c3ced0ec289b89d, // fix
		CBasePlayer_m_ubEFNoInterpParity = 0x15f553d0796b8917, // fix
		CBasePlayer_m_vecBaseVelocity = 0x331713a6dd6b155d, // fix
		CBasePlayer_m_vecConstraintCenter = 0xde9009c3e83ed7a0, // fix
		CBasePlayer_m_vecLadderNormal = 0xb842a0bf1c4293c5, // fix
		CBasePlayer_m_vecVelocity_0_ = 0xcca7009d49136512, // fix
		CBasePlayer_m_vecVelocity_1_ = 0x84e1896e316647a1, // fix
		CBasePlayer_m_vecVelocity_2_ = 0x553b21f48f5e158f, // fix
		CBasePlayer_m_vecViewOffset_0_ = 0xe454c0529ad8282b, // fix
		CBasePlayer_m_vecViewOffset_1_ = 0x4e16698845735a4d, // fix
		CBasePlayer_m_vecViewOffset_2_ = 0xbc73739bcad72557, // fix
		CBasePlayer_m_viewPunchAngle = 0x8d388a13ccb00a3d, // fix
		CBasePlayer_m_vphysicsCollisionState = 0x956b7c5c60f4b8c, // fix
		CBasePlayer_pl = 0xf5011799e20278f1, // fix
		CBaseTeamObjectiveResource_m_bBlocked = 0xaebfce3f57cc1d8d, // fix
		CBaseTeamObjectiveResource_m_bCPIsVisible = 0x86ff2bb99c547c4d, // fix
		CBaseTeamObjectiveResource_m_bControlPointsReset = 0xcc3ab0d947b72190, // fix
		CBaseTeamObjectiveResource_m_bInMiniRound = 0x982da19b3358ab70, // fix
		CBaseTeamObjectiveResource_m_bPlayingMiniRounds = 0x4f24422988f1da41, // fix
		CBaseTeamObjectiveResource_m_bTeamCanCap = 0xc763d1717d86b696, // fix
		CBaseTeamObjectiveResource_m_flLazyCapPerc = 0x8384c4a752f8fb31, // fix
		CBaseTeamObjectiveResource_m_flPathDistance = 0x98bc4c5a7f858d8a, // fix
		CBaseTeamObjectiveResource_m_flTeamCapTime = 0xf373e4126bb8164e, // fix
		CBaseTeamObjectiveResource_m_iBaseControlPoints = 0xbb895bc28e17f4b8, // fix
		CBaseTeamObjectiveResource_m_iCappingTeam = 0xf64b5aff00ea86fb, // fix
		CBaseTeamObjectiveResource_m_iNumControlPoints = 0x5bffcfe2afd55d90, // fix
		CBaseTeamObjectiveResource_m_iNumTeamMembers = 0xd6525fa32cd3092d, // fix
		CBaseTeamObjectiveResource_m_iOwner = 0xf09eed5bf824d372, // fix
		CBaseTeamObjectiveResource_m_iPreviousPoints = 0x83d284d7412934e7, // fix
		CBaseTeamObjectiveResource_m_iStopWatchTimer = 0x32d0222a1017610b, // fix
		CBaseTeamObjectiveResource_m_iTeamBaseIcons = 0x1538871058e8c78a, // fix
		CBaseTeamObjectiveResource_m_iTeamIcons = 0x376c75690ab76ee5, // fix
		CBaseTeamObjectiveResource_m_iTeamInZone = 0x679f6b11bb73770d, // fix
		CBaseTeamObjectiveResource_m_iTeamOverlays = 0xf165898057fd371f, // fix
		CBaseTeamObjectiveResource_m_iTeamReqCappers = 0xca6ad2219770134a, // fix
		CBaseTeamObjectiveResource_m_iTimerToShowInHUD = 0x707eddb01dfb5475, // fix
		CBaseTeamObjectiveResource_m_iUpdateCapHudParity = 0x13b8fb83c9494da7, // fix
		CBaseTeamObjectiveResource_m_iWarnOnCap = 0x3db563037afc409a, // fix
		CBaseTeamObjectiveResource_m_iszWarnSound_0_ = 0xb9103d57f757d795, // fix
		CBaseTeamObjectiveResource_m_pszCapLayoutInHUD = 0xc03edd5dda62f948, // fix
		CBaseTeamObjectiveResource_m_vCPPositions_0_ = 0xe54f9113d622100, // fix
		CBaseToggle_m_flMoveTargetTime = 0x859964a034632cac, // fix
		CBaseToggle_m_movementType = 0x9ca047273794e8d3, // fix
		CBaseToggle_m_vecFinalDest = 0xb8462a8c2c803ee0, // fix
		CBaseTrigger_m_bClientSidePredicted = 0x51081206395a6748, // fix
		CBaseTrigger_m_spawnflags = 0x70bf313cb33665ff, // fix
		CBaseViewModel_m_bShouldIgnoreOffsetAndAccuracy = 0xb3e51823cfdbac8f, // fix
		CBaseViewModel_m_fEffects = 0x10895936bb440f99, // fix
		CBaseViewModel_m_flPlaybackRate = 0x61d93fa3192b208, // fix
		CBaseViewModel_m_hOwner = 0x12b20f864dc2b539, // fix
		CBaseViewModel_m_hWeapon = 0xc03d30b83185ff8e, // fix
		CBaseViewModel_m_nAnimationParity = 0xcdd3f2dd48f51201, // fix
		CBaseViewModel_m_nBody = 0x7b8bc9ccf9802459, // fix
		CBaseViewModel_m_nModelIndex = 0x506f7c7ea0ae928c, // fix
		CBaseViewModel_m_nMuzzleFlashParity = 0xa24dd3e542fa9bc8, // fix
		CBaseViewModel_m_nNewSequenceParity = 0x7784b41befa428a6, // fix
		CBaseViewModel_m_nResetEventsParity = 0x8c6e4ba8f9c3b0fa, // fix
		CBaseViewModel_m_nSequence = 0x1eef361857a84df5, // fix
		CBaseViewModel_m_nSkin = 0x7e5ab4e64872e83c, // fix
		CBaseViewModel_m_nViewModelIndex = 0x23bacf6dee9ccf50, // fix
		CBaseWeaponWorldModel_m_fEffects = 0x2e311731032fae07, // fix
		CBaseWeaponWorldModel_m_hCombatWeaponParent = 0x6767c4bd87f66012, // fix
		CBaseWeaponWorldModel_m_nBody = 0x6551e8a2b3c5ac23, // fix
		CBaseWeaponWorldModel_m_nModelIndex = 0x565e4181aaf69696, // fix
		CBaseWeaponWorldModel_moveparent = 0x8079e9969db45ae7, // fix
		CBeamSpotlight_m_bHasDynamicLight = 0x436eaf173e4f746d, // fix
		CBeamSpotlight_m_bSpotlightOn = 0x2dccf1d12dce988e, // fix
		CBeamSpotlight_m_flHDRColorScale = 0x31a02260c743255, // fix
		CBeamSpotlight_m_flRotationSpeed = 0xdb333b79c7a12fa6, // fix
		CBeamSpotlight_m_flSpotlightGoalWidth = 0xe0f24f9a00364fd0, // fix
		CBeamSpotlight_m_flSpotlightMaxLength = 0xbeccd2280ef17173, // fix
		CBeamSpotlight_m_nHaloIndex = 0x22a76bdf3d8e00ac, // fix
		CBeamSpotlight_m_nRotationAxis = 0x5c1677310fd54cf3, // fix
		CBeam_m_clrRender = 0x27506f298f59cb39, // fix
		CBeam_m_fAmplitude = 0xd141a331a0aea1e8, // fix
		CBeam_m_fEndWidth = 0x239e69635a9bedae, // fix
		CBeam_m_fFadeLength = 0xda5bbc668a61aab9, // fix
		CBeam_m_fHaloScale = 0xa76ebbb7a16ee186, // fix
		CBeam_m_fSpeed = 0x22335bc77c7bd591, // fix
		CBeam_m_fStartFrame = 0x9212d96c34459448, // fix
		CBeam_m_fWidth = 0x371e760959cec26b, // fix
		CBeam_m_flFrame = 0xa723de2db6fc5f6e, // fix
		CBeam_m_flFrameRate = 0x6e626d2852d20327, // fix
		CBeam_m_flHDRColorScale = 0xf4c0fc87f8c74f02, // fix
		CBeam_m_hAttachEntity = 0x50cd902c715a9dfd, // fix
		CBeam_m_nAttachIndex = 0xaf2ebfeba46ed907, // fix
		CBeam_m_nBeamFlags = 0x8c19f5dd5cd4b547, // fix
		CBeam_m_nBeamType = 0x1b454b160945a757, // fix
		CBeam_m_nClipStyle = 0x4b7bc01d69d6522f, // fix
		CBeam_m_nHaloIndex = 0x7037d4b813f1454f, // fix
		CBeam_m_nModelIndex = 0xf0dee0d3522844a8, // fix
		CBeam_m_nNumBeamEnts = 0x8ddd40609b0929ae, // fix
		CBeam_m_nRenderFX = 0xd84e9e1bab352b47, // fix
		CBeam_m_nRenderMode = 0x58398eea3c476243, // fix
		CBeam_m_vecEndPos = 0x2d172fb2599c074a, // fix
		CBeam_m_vecOrigin = 0xb8a7eb8c029e652a, // fix
		CBeam_moveparent = 0xa9ed5c943cd1a2b5, // fix
		CBoneFollower_m_modelIndex = 0x9e56511e4d88696e, // fix
		CBoneFollower_m_solidIndex = 0x32cee5e5f768accf, // fix
		CBreachChargeProjectile_m_bShouldExplode = 0xde339be75682eb5f, // fix
		CBreachChargeProjectile_m_nParentBoneIndex = 0xe1eb6484c3f999c7, // fix
		CBreachChargeProjectile_m_vecParentBonePos = 0x7bda86fa630d4974, // fix
		CBreachChargeProjectile_m_weaponThatThrewMe = 0xc71078fa76db131d, // fix
		CBreakableProp_m_bClientPhysics = 0x3f8c97b724cb8161, // fix
		CBreakableProp_m_qPreferredPlayerCarryAngles = 0xe858e350a2eaf5f9, // fix
		CBreakableSurface_m_RawPanelBitVec = 0x2685b51f0a6b08ad, // fix
		CBreakableSurface_m_bIsBroken = 0xca9c5502137fdee7, // fix
		CBreakableSurface_m_flPanelHeight = 0xb1e7c9241d135b7a, // fix
		CBreakableSurface_m_flPanelWidth = 0xeccde3b833b4c161, // fix
		CBreakableSurface_m_nNumHigh = 0x6a6a54d86fafac9c, // fix
		CBreakableSurface_m_nNumWide = 0x473e8df800a8e0fe, // fix
		CBreakableSurface_m_nSurfaceType = 0x45cfdc769a821c6, // fix
		CBreakableSurface_m_vCorner = 0xf04ff70caf147fdb, // fix
		CBreakableSurface_m_vNormal = 0xe6e9de60aa1deea0, // fix
		CBumpMineProjectile_m_bArmed = 0x7d317ebb217db18, // fix
		CBumpMineProjectile_m_nParentBoneIndex = 0x2a78adeb3e3d86da, // fix
		CBumpMineProjectile_m_vecParentBonePos = 0x778fbc6bd1a78a0b, // fix
		CC4_m_bBombPlacedAnimation = 0xe715f1f44bd91ab8, // fix
		CC4_m_bIsPlantingViaUse = 0x7f6f8f35a37a917, // fix
		CC4_m_bShowC4LED = 0x6cf5203011f3aa7e, // fix
		CC4_m_bStartedArming = 0xcda5a9c2e2ab1d0, // fix
		CC4_m_fArmedTime = 0x108d3903f069c7c2, // fix
		CCSGameRulesProxy_m_GGProgressiveWeaponKillUpgradeOrderCT = 0x923bb90b03be28b, // fix
		CCSGameRulesProxy_m_GGProgressiveWeaponKillUpgradeOrderT = 0xb403dd13703dee0, // fix
		CCSGameRulesProxy_m_GGProgressiveWeaponOrderCT = 0xd40bc961803d2b97, // fix
		CCSGameRulesProxy_m_GGProgressiveWeaponOrderT = 0xac4b0334838a8d5d, // fix
		CCSGameRulesProxy_m_MatchDevice = 0x2acf8fea6120ae88, // fix
		CCSGameRulesProxy_m_RetakeRules = 0x77e5d4a736aab25c, // fix
		CCSGameRulesProxy_m_SpawnTileState = 0xdd3100aad8366d70, // fix
		CCSGameRulesProxy_m_SurvivalGameRuleDecisionTypes = 0xf7a865c612690f5f, // fix
		CCSGameRulesProxy_m_SurvivalGameRuleDecisionValues = 0x5c627d3cced6ee23, // fix
		CCSGameRulesProxy_m_SurvivalRules = 0xa0d05ee84ea68343, // fix
		CCSGameRulesProxy_m_TeamRespawnWaveTimes = 0x1162929e37fdca, // fix
		CCSGameRulesProxy_m_arrFeaturedGiftersAccounts = 0xe5f0a5122332c1f8, // fix
		CCSGameRulesProxy_m_arrFeaturedGiftersGifts = 0x263c061e1f252ff3, // fix
		CCSGameRulesProxy_m_arrProhibitedItemIndices = 0xf84f641cc0072ea8, // fix
		CCSGameRulesProxy_m_arrTournamentActiveCasterAccounts = 0x758ccefd39ebc8bd, // fix
		CCSGameRulesProxy_m_bAnyHostageReached = 0x7a904898731dd067, // fix
		CCSGameRulesProxy_m_bBlockersPresent = 0x44779b574a89155b, // fix
		CCSGameRulesProxy_m_bBombDropped = 0x554364a4f41ea743, // fix
		CCSGameRulesProxy_m_bBombPlanted = 0x54e2dd9fec571433, // fix
		CCSGameRulesProxy_m_bCTCantBuy = 0x865b4f20df6d51af, // fix
		CCSGameRulesProxy_m_bCTTimeOutActive = 0x893da44475ad2c85, // fix
		CCSGameRulesProxy_m_bDMBonusActive = 0x6d5f8c6b5f023065, // fix
		CCSGameRulesProxy_m_bFreezePeriod = 0x91f022d64f918332, // fix
		CCSGameRulesProxy_m_bGameRestart = 0x255ec0d06e4d40a7, // fix
		CCSGameRulesProxy_m_bHasMatchStarted = 0x6ef8cc40be9aef96, // fix
		CCSGameRulesProxy_m_bIsDroppingItems = 0x9cb027072705e641, // fix
		CCSGameRulesProxy_m_bIsQuestEligible = 0xe715333be3e20914, // fix
		CCSGameRulesProxy_m_bIsQueuedMatchmaking = 0x4e38a55f2aa9ab51, // fix
		CCSGameRulesProxy_m_bIsValveDS = 0x1ec937ab213dbd96, // fix
		CCSGameRulesProxy_m_bLogoMap = 0x730c31c0c471ccc4, // fix
		CCSGameRulesProxy_m_bMapHasBombTarget = 0x1f1c829e60ffe6d1, // fix
		CCSGameRulesProxy_m_bMapHasBuyZone = 0x5c64576158daa2a7, // fix
		CCSGameRulesProxy_m_bMapHasRescueZone = 0x698fd3e9c5cb6650, // fix
		CCSGameRulesProxy_m_bMatchWaitingForResume = 0xe39826cdd58974d4, // fix
		CCSGameRulesProxy_m_bPlayAllStepSoundsOnServer = 0xebe3080b00f4695f, // fix
		CCSGameRulesProxy_m_bRoundInProgress = 0xb8ad83a18964d2c6, // fix
		CCSGameRulesProxy_m_bTCantBuy = 0x80c70aab79010b28, // fix
		CCSGameRulesProxy_m_bTechnicalTimeOut = 0xc37e121ced2ae05a, // fix
		CCSGameRulesProxy_m_bTerroristTimeOutActive = 0x8a06c140ecd165c7, // fix
		CCSGameRulesProxy_m_bWarmupPeriod = 0x7416c15fc54ef67b, // fix
		CCSGameRulesProxy_m_eRoundWinReason = 0x9b6e1c32a868b037, // fix
		CCSGameRulesProxy_m_fMatchStartTime = 0xa22d75a197c8b224, // fix
		CCSGameRulesProxy_m_fRoundStartTime = 0x30d897994f83dda3, // fix
		CCSGameRulesProxy_m_fWarmupPeriodEnd = 0xd42caf4426ec9223, // fix
		CCSGameRulesProxy_m_fWarmupPeriodStart = 0xf293b0ed3784a43f, // fix
		CCSGameRulesProxy_m_flCMMItemDropRevealEndTime = 0xefc6d894a035cfe1, // fix
		CCSGameRulesProxy_m_flCMMItemDropRevealStartTime = 0x4c56976a75c8dc15, // fix
		CCSGameRulesProxy_m_flCTTimeOutRemaining = 0x5fe6bb3c030f95a, // fix
		CCSGameRulesProxy_m_flDMBonusStartTime = 0x5f289688b41b663e, // fix
		CCSGameRulesProxy_m_flDMBonusTimeLength = 0x1079fa5b653ad197, // fix
		CCSGameRulesProxy_m_flGameStartTime = 0x8cd2d2f2a02151bd, // fix
		CCSGameRulesProxy_m_flGuardianBuyUntilTime = 0xd505e37aa703c7af, // fix
		CCSGameRulesProxy_m_flNextRespawnWave = 0x8dc2804f53640735, // fix
		CCSGameRulesProxy_m_flRestartRoundTime = 0x2181a0a8be61c4be, // fix
		CCSGameRulesProxy_m_flSpawnSelectionTimeEnd = 0x25e132142c635d51, // fix
		CCSGameRulesProxy_m_flSpawnSelectionTimeLoadout = 0x53e92192dbc3679, // fix
		CCSGameRulesProxy_m_flSpawnSelectionTimeStart = 0x37134255004828e8, // fix
		CCSGameRulesProxy_m_flSurvivalStartTime = 0xe160bf5157ed75c1, // fix
		CCSGameRulesProxy_m_flTabletHexOriginX = 0xf3b6edbdf0abd602, // fix
		CCSGameRulesProxy_m_flTabletHexOriginY = 0x7ac94bc9164f4d9f, // fix
		CCSGameRulesProxy_m_flTabletHexSize = 0x9e16f9dd0698190, // fix
		CCSGameRulesProxy_m_flTerroristTimeOutRemaining = 0xb09134582773e2c4, // fix
		CCSGameRulesProxy_m_gamePhase = 0xa291ba7a132b1574, // fix
		CCSGameRulesProxy_m_iActiveAssassinationTargetMissionID = 0x83dcfce9ebc2cbad, // fix
		CCSGameRulesProxy_m_iBombSite = 0x88ee51da453733d0, // fix
		CCSGameRulesProxy_m_iFirstSecondHalfRound = 0xbf8ad427075041ef, // fix
		CCSGameRulesProxy_m_iHostagesRemaining = 0x3cd2f653eb9ec6a4, // fix
		CCSGameRulesProxy_m_iMatchStats_PlayersAlive_CT = 0x30fe67b57d34d582, // fix
		CCSGameRulesProxy_m_iMatchStats_PlayersAlive_T = 0xfdb5899b54cffc0a, // fix
		CCSGameRulesProxy_m_iMatchStats_RoundResults = 0x46c3c5a584f54869, // fix
		CCSGameRulesProxy_m_iNumConsecutiveCTLoses = 0xafafcb6ea2c8f720, // fix
		CCSGameRulesProxy_m_iNumConsecutiveTerroristLoses = 0xca080bc6c7a62820, // fix
		CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsCT = 0x1fcb56ac4c623af, // fix
		CCSGameRulesProxy_m_iNumGunGameProgressiveWeaponsT = 0x75f73693898bbffb, // fix
		CCSGameRulesProxy_m_iPlayerSpawnHexIndices = 0xc81004c196184ff6, // fix
		CCSGameRulesProxy_m_iRoundTime = 0xccc89c93a7458ca2, // fix
		CCSGameRulesProxy_m_iRoundWinStatus = 0xf1c6403ac96b6e08, // fix
		CCSGameRulesProxy_m_iSpectatorSlotCount = 0xdb2ca609e428a83b, // fix
		CCSGameRulesProxy_m_nCTTimeOuts = 0xe5bad59e163d47ce, // fix
		CCSGameRulesProxy_m_nEndMatchMapGroupVoteOptions = 0x412c0192b27fb703, // fix
		CCSGameRulesProxy_m_nEndMatchMapGroupVoteTypes = 0xcc89f1677535a27f, // fix
		CCSGameRulesProxy_m_nEndMatchMapVoteWinner = 0x34b2550f5cd410cd, // fix
		CCSGameRulesProxy_m_nGuardianModeSpecialKillsRemaining = 0xd988378f237b9ad8, // fix
		CCSGameRulesProxy_m_nGuardianModeSpecialWeaponNeeded = 0xcdb4a8be8c3d4fcb, // fix
		CCSGameRulesProxy_m_nGuardianModeWaveNumber = 0xe46d4c006f4167d4, // fix
		CCSGameRulesProxy_m_nHalloweenMaskListSeed = 0xf7b4cae485fe8052, // fix
		CCSGameRulesProxy_m_nMatchSeed = 0xef3687709cb8f619, // fix
		CCSGameRulesProxy_m_nNextMapInMapgroup = 0x69481f5bcfaebde4, // fix
		CCSGameRulesProxy_m_nOvertimePlaying = 0xc75fcbc61fcc5ae6, // fix
		CCSGameRulesProxy_m_nQueuedMatchmakingMode = 0xebcd0c25c551464e, // fix
		CCSGameRulesProxy_m_nTerroristTimeOuts = 0x769e67fd8add8369, // fix
		CCSGameRulesProxy_m_nTournamentPredictionsPct = 0x5f5245ff543af599, // fix
		CCSGameRulesProxy_m_numBestOfMaps = 0x3f44fdfd800b3dd1, // fix
		CCSGameRulesProxy_m_numGlobalGifters = 0x8cbcc92b126b3a9c, // fix
		CCSGameRulesProxy_m_numGlobalGiftsGiven = 0xd8325cc5d203a9dc, // fix
		CCSGameRulesProxy_m_numGlobalGiftsPeriodSeconds = 0x4086d94c27f1a339, // fix
		CCSGameRulesProxy_m_roundData_playerPositions = 0xbf09ea9af8950125, // fix
		CCSGameRulesProxy_m_roundData_playerTeams = 0xde645fbd940b15ea, // fix
		CCSGameRulesProxy_m_roundData_playerXuids = 0x551d72f07dd8c5cf, // fix
		CCSGameRulesProxy_m_spawnStage = 0x92ff3aa57eadfe47, // fix
		CCSGameRulesProxy_m_szMatchStatTxt = 0x335b1327c58e6e5f, // fix
		CCSGameRulesProxy_m_szTournamentEventName = 0x2a08b54b3d5cd42a, // fix
		CCSGameRulesProxy_m_szTournamentEventStage = 0xb7715ee70d618db9, // fix
		CCSGameRulesProxy_m_szTournamentPredictionsTxt = 0x10a8b4c97b0db1ac, // fix
		CCSGameRulesProxy_m_timeUntilNextPhaseStarts = 0xef1add779aa4b37c, // fix
		CCSGameRulesProxy_m_totalRoundsPlayed = 0xea1fe48f2b4a9115, // fix
		CCSGameRulesProxy_m_unDMBonusWeaponLoadoutSlot = 0x7e62e446e4f33852, // fix
		CCSGameRulesProxy_m_vecPlayAreaMaxs = 0x72c2e4c3bf3c7ff0, // fix
		CCSGameRulesProxy_m_vecPlayAreaMins = 0x7cb274f5a5652a94, // fix
		CCSPlayerResource_m_bControllingBot = 0xe18c8ec02c50eab5, // fix
		CCSPlayerResource_m_bEndMatchNextMapAllVoted = 0xbeddd1cab1bb9c35, // fix
		CCSPlayerResource_m_bHasCommunicationAbuseMute = 0xc7c245aa54bcad55, // fix
		CCSPlayerResource_m_bHasDefuser = 0x14b077d68f6434ad, // fix
		CCSPlayerResource_m_bHasHelmet = 0x86b6c83782954ec8, // fix
		CCSPlayerResource_m_bHostageAlive = 0x2011e1b66a2591cf, // fix
		CCSPlayerResource_m_bombsiteCenterA = 0xbeb8c952db0824bd, // fix
		CCSPlayerResource_m_bombsiteCenterB = 0x873ad92e64a4881f, // fix
		CCSPlayerResource_m_hostageRescueX = 0x5e65b806a23c4de0, // fix
		CCSPlayerResource_m_hostageRescueY = 0x35a37309e8e3d692, // fix
		CCSPlayerResource_m_hostageRescueZ = 0x73351bc3f87c517, // fix
		CCSPlayerResource_m_iArmor = 0x238fa8399259c320, // fix
		CCSPlayerResource_m_iBotDifficulty = 0x151257256750e231, // fix
		CCSPlayerResource_m_iCashSpentThisRound = 0xe17e80232d50f82f, // fix
		CCSPlayerResource_m_iCompTeammateColor = 0xe9d0b99b5ea25499, // fix
		CCSPlayerResource_m_iCompetitiveRankType = 0xf71c8e64ff0c1790, // fix
		CCSPlayerResource_m_iCompetitiveRanking = 0x638f9b31c5d45e34, // fix
		CCSPlayerResource_m_iCompetitiveWins = 0x2bb87a6db28f8d87, // fix
		CCSPlayerResource_m_iControlledByPlayer = 0x5a9feddc77595e2e, // fix
		CCSPlayerResource_m_iControlledPlayer = 0xba76ddc9bd19f28, // fix
		CCSPlayerResource_m_iGunGameLevel = 0xbb07b10d6919f6bf, // fix
		CCSPlayerResource_m_iHostageEntityIDs = 0x8d75ea74be9e1e4, // fix
		CCSPlayerResource_m_iLifetimeEnd = 0x7c57645166ad2337, // fix
		CCSPlayerResource_m_iLifetimeStart = 0x829f2cb1eea7865, // fix
		CCSPlayerResource_m_iMVPs = 0xea0012f5fc6cd979, // fix
		CCSPlayerResource_m_iMatchStats_3k_Total = 0x3bb20222166f4b2c, // fix
		CCSPlayerResource_m_iMatchStats_4k_Total = 0x3e2c196228f30cd6, // fix
		CCSPlayerResource_m_iMatchStats_5k_Total = 0xa5e4082a9518e330, // fix
		CCSPlayerResource_m_iMatchStats_Assists_Total = 0x59498634131761f8, // fix
		CCSPlayerResource_m_iMatchStats_CashEarned_Total = 0x1316182fc1ad840d, // fix
		CCSPlayerResource_m_iMatchStats_Damage_Total = 0x3ad45d85fc35cebc, // fix
		CCSPlayerResource_m_iMatchStats_Deaths_Total = 0x5f651c37cfe221fb, // fix
		CCSPlayerResource_m_iMatchStats_EnemiesFlashed_Total = 0x842e721867955bf4, // fix
		CCSPlayerResource_m_iMatchStats_EquipmentValue_Total = 0x4e18ee0ebef1d57c, // fix
		CCSPlayerResource_m_iMatchStats_HeadShotKills_Total = 0x2f33d5187bef684b, // fix
		CCSPlayerResource_m_iMatchStats_KillReward_Total = 0xe8fdf0420b773325, // fix
		CCSPlayerResource_m_iMatchStats_Kills_Total = 0x6ae24d743e63b93f, // fix
		CCSPlayerResource_m_iMatchStats_LiveTime_Total = 0xdeeff90ebece6fff, // fix
		CCSPlayerResource_m_iMatchStats_Objective_Total = 0xe002589800382d8d, // fix
		CCSPlayerResource_m_iMatchStats_UtilityDamage_Total = 0x6baf27341e4cbb5d, // fix
		CCSPlayerResource_m_iPlayerC4 = 0x1ddcb1a58eda7695, // fix
		CCSPlayerResource_m_iPlayerVIP = 0x1d70694c2a690db6, // fix
		CCSPlayerResource_m_iScore = 0x88fa7092e15f96ce, // fix
		CCSPlayerResource_m_iTotalCashSpent = 0x4cfacf4fd8a69463, // fix
		CCSPlayerResource_m_isHostageFollowingSomeone = 0x3c1db4c38b8fd549, // fix
		CCSPlayerResource_m_nActiveCoinRank = 0x72df80f82cf5978e, // fix
		CCSPlayerResource_m_nCharacterDefIndex = 0x4a76894c8bc1ad96, // fix
		CCSPlayerResource_m_nEndMatchNextMapVotes = 0x1c4c9cecba13bba5, // fix
		CCSPlayerResource_m_nMusicID = 0x6dd2bc1003e1a954, // fix
		CCSPlayerResource_m_nPersonaDataPublicCommendsFriendly = 0xada45e90860902fb, // fix
		CCSPlayerResource_m_nPersonaDataPublicCommendsLeader = 0xc41e8bf3f141ca76, // fix
		CCSPlayerResource_m_nPersonaDataPublicCommendsTeacher = 0x43b21169a755a6ba, // fix
		CCSPlayerResource_m_nPersonaDataPublicLevel = 0x38343093fcd30aa3, // fix
		CCSPlayerResource_m_szClan = 0xdaf903af8ba7dbfd, // fix
		CCSPlayerResource_m_szCrosshairCodes = 0x11bf80d0531ca302, // fix
		CCSPlayer_m_ArmorValue = 0xfe6bebbc6cbe41ba, // fix
		CCSPlayer_m_EquippedLoadoutItemDefIndices = 0x233b64f251fbb671, // fix
		CCSPlayer_m_RetakesMVPBoostExtraUtility = 0x14bd8d1c395cd73, // fix
		CCSPlayer_m_angEyeAngles = 0xdbbdfd1be5ae1f17, // fix
		CCSPlayer_m_angEyeAngles_0_ = 0xb56d5f3a4c9225ab, // fix
		CCSPlayer_m_angEyeAngles_1_ = 0x95ede5bb3c8e307b, // fix
		CCSPlayer_m_bCanControlObservedBot = 0x201f70b465e152b, // fix
		CCSPlayer_m_bCanMoveDuringFreezePeriod = 0x67c4a267ed2ae017, // fix
		CCSPlayer_m_bDuckOverride = 0x796810d8ae0fa4fc, // fix
		CCSPlayer_m_bGunGameImmunity = 0x207381e0f9cf6739, // fix
		CCSPlayer_m_bHasControlledBotThisRound = 0x1f8fa8d66b26d847, // fix
		CCSPlayer_m_bHasDefuser = 0x2f6bdf8993dcfe59, // fix
		CCSPlayer_m_bHasHeavyArmor = 0xd95ee6ed1d4f3f11, // fix
		CCSPlayer_m_bHasHelmet = 0xf41c154fc6bac6db, // fix
		CCSPlayer_m_bHasMovedSinceSpawn = 0xfe28afee4dae8b72, // fix
		CCSPlayer_m_bHasNightVision = 0x1ec79e48d2b55370, // fix
		CCSPlayer_m_bHasParachute = 0x6978a81d01125ad8, // fix
		CCSPlayer_m_bHideTargetID = 0xc9f3e40adbdabd81, // fix
		CCSPlayer_m_bHud_MiniScoreHidden = 0xf6b722ac3803ebe4, // fix
		CCSPlayer_m_bHud_RadarHidden = 0xae8ec0a7abe94a9c, // fix
		CCSPlayer_m_bInBombZone = 0xe13b4341567eef13, // fix
		CCSPlayer_m_bInBuyZone = 0xd27c172a8e2f0ee7, // fix
		CCSPlayer_m_bInHostageRescueZone = 0x77392a3f320260b6, // fix
		CCSPlayer_m_bInNoDefuseArea = 0x86e3369b0f3f63af, // fix
		CCSPlayer_m_bIsAssassinationTarget = 0xba6c5af965b654a, // fix
		CCSPlayer_m_bIsControllingBot = 0xd5687a529e97a013, // fix
		CCSPlayer_m_bIsDefusing = 0x659f6d001ebff0e0, // fix
		CCSPlayer_m_bIsGrabbingHostage = 0x85c1919edf332cc1, // fix
		CCSPlayer_m_bIsHoldingLookAtWeapon = 0xee2c03626d54d2f6, // fix
		CCSPlayer_m_bIsLookingAtWeapon = 0x4df5c17dc6452201, // fix
		CCSPlayer_m_bIsPlayerGhost = 0xefde25cb7221018e, // fix
		CCSPlayer_m_bIsRescuing = 0x547ad23001db711f, // fix
		CCSPlayer_m_bIsRespawningForDMBonus = 0x28fdd0556372aa2a, // fix
		CCSPlayer_m_bIsScoped = 0x47c5081251016a27, // fix
		CCSPlayer_m_bIsSpawnRappelling = 0x1d9c9e0cc571f214, // fix
		CCSPlayer_m_bIsWalking = 0xa99302cc2bc1605, // fix
		CCSPlayer_m_bKilledByTaser = 0x18c5946c8e23d718, // fix
		CCSPlayer_m_bMadeFinalGunGameProgressiveKill = 0x6ddfdb2d026ce69b, // fix
		CCSPlayer_m_bNightVisionOn = 0x98c97bf0cedc7654, // fix
		CCSPlayer_m_bPlayerDominated = 0x75a9d3c1394f9418, // fix
		CCSPlayer_m_bPlayerDominatingMe = 0xe958a18c531d6349, // fix
		CCSPlayer_m_bResumeZoom = 0xa88e7d06a127d3f2, // fix
		CCSPlayer_m_bRetakesHasDefuseKit = 0x979160872981147c, // fix
		CCSPlayer_m_bRetakesMVPLastRound = 0x530f5d4b0931122b, // fix
		CCSPlayer_m_bStrafing = 0x3fed8a4abc3617f5, // fix
		CCSPlayer_m_bWaitForNoAttack = 0x70edbda93ceb248, // fix
		CCSPlayer_m_cycleLatch = 0x1524435d135bf3fb, // fix
		CCSPlayer_m_fImmuneToGunGameDamageTime = 0xfc45aa211c695c58, // fix
		CCSPlayer_m_fMolotovDamageTime = 0x26c8ac3b56557c38, // fix
		CCSPlayer_m_fMolotovUseTime = 0xd6deccba5d3b7d2c, // fix
		CCSPlayer_m_flAutoMoveStartTime = 0xa6b1466670f0686a, // fix
		CCSPlayer_m_flAutoMoveTargetTime = 0xc441ef9bdbc15fff, // fix
		CCSPlayer_m_flDetectedByEnemySensorTime = 0x2478b5b0297507a3, // fix
		CCSPlayer_m_flFlashDuration = 0x82e37eab8ede6949, // fix
		CCSPlayer_m_flFlashMaxAlpha = 0x331ac96a110dd9ab, // fix
		CCSPlayer_m_flGroundAccelLinearFracLastTime = 0xae1906d3c1ecbc9f, // fix
		CCSPlayer_m_flGuardianTooFarDistFrac = 0xafd3999d63324dec, // fix
		CCSPlayer_m_flHealthShotBoostExpirationTime = 0xb4ac66fec3481120, // fix
		CCSPlayer_m_flLastExoJumpTime = 0x26cd6400498015a4, // fix
		CCSPlayer_m_flLowerBodyYawTarget = 0x30b741a1065e2dc6, // fix
		CCSPlayer_m_flProgressBarStartTime = 0x97700b5c98cafbeb, // fix
		CCSPlayer_m_flStamina = 0x2e26fe4cf1734efd, // fix
		CCSPlayer_m_flThirdpersonRecoil = 0x6dc2bb7cde31f2e, // fix
		CCSPlayer_m_flVelocityModifier = 0x3e65f2351046eb26, // fix
		CCSPlayer_m_hCarriedHostage = 0xea181ff7d0a9, // fix
		CCSPlayer_m_hCarriedHostageProp = 0xec68ee58ef01a552, // fix
		CCSPlayer_m_hPlayerPing = 0x1b4f6013fa553bad, // fix
		CCSPlayer_m_hRagdoll = 0xf5c51e41b807538, // fix
		CCSPlayer_m_hSurvivalAssassinationTarget = 0x8a9f781c777de6bf, // fix
		CCSPlayer_m_iAccount = 0x4dd38de9fa18adf8, // fix
		CCSPlayer_m_iAddonBits = 0x5041a2aa419a3ddb, // fix
		CCSPlayer_m_iBlockingUseActionInProgress = 0xf40d7b797a3ff30c, // fix
		CCSPlayer_m_iClass = 0x2fa25b50874b4f1a, // fix
		CCSPlayer_m_iControlledBotEntIndex = 0x8ff2d9e6667c948d, // fix
		CCSPlayer_m_iDirection = 0x8fab24799c916e3c, // fix
		CCSPlayer_m_iGunGameProgressiveWeaponIndex = 0x8cb1e8bc8c7976a5, // fix
		CCSPlayer_m_iMatchStats_Assists = 0xdc6a93d34a7524b6, // fix
		CCSPlayer_m_iMatchStats_CashEarned = 0x18b0eb720b9f303, // fix
		CCSPlayer_m_iMatchStats_Damage = 0xcbcd6c9b5f4f05c1, // fix
		CCSPlayer_m_iMatchStats_Deaths = 0xe497d5a549b626ea, // fix
		CCSPlayer_m_iMatchStats_EnemiesFlashed = 0x72b63de031baa591, // fix
		CCSPlayer_m_iMatchStats_EquipmentValue = 0xc3a262a75a8f44c4, // fix
		CCSPlayer_m_iMatchStats_HeadShotKills = 0x543aaea1ee9a82ec, // fix
		CCSPlayer_m_iMatchStats_KillReward = 0xdaa6c81ba952469, // fix
		CCSPlayer_m_iMatchStats_Kills = 0x5a320a9e5a525c87, // fix
		CCSPlayer_m_iMatchStats_LiveTime = 0x6b6c27429057348b, // fix
		CCSPlayer_m_iMatchStats_MoneySaved = 0xb110c0a63e582fea, // fix
		CCSPlayer_m_iMatchStats_Objective = 0x51bbbf87e3b90b8, // fix
		CCSPlayer_m_iMatchStats_UtilityDamage = 0x6b61e93f1163dd3c, // fix
		CCSPlayer_m_iMoveState = 0x4b0f6ee94a4f79e5, // fix
		CCSPlayer_m_iNumGunGameKillsWithCurrentWeapon = 0xaa6c4876fdb9d184, // fix
		CCSPlayer_m_iNumGunGameTRKillPoints = 0xb975143a3b1d83f3, // fix
		CCSPlayer_m_iNumRoundKills = 0xe53c7b7c2dc5fa33, // fix
		CCSPlayer_m_iNumRoundKillsHeadshots = 0x7e558d9fe67ac09e, // fix
		CCSPlayer_m_iPlayerState = 0x8b57c8e9c0f445dd, // fix
		CCSPlayer_m_iPrimaryAddon = 0xa83c80787559072c, // fix
		CCSPlayer_m_iProgressBarDuration = 0x84db5ea106c452b0, // fix
		CCSPlayer_m_iRetakesMVPBoostItem = 0xc4ae84c60cd60339, // fix
		CCSPlayer_m_iRetakesOffering = 0xc4a9152be63760a8, // fix
		CCSPlayer_m_iRetakesOfferingCard = 0xea7b12c0ebeb1557, // fix
		CCSPlayer_m_iSecondaryAddon = 0xa27cebcb54f1bdf0, // fix
		CCSPlayer_m_iShotsFired = 0x86b0584b4cf55556, // fix
		CCSPlayer_m_iStartAccount = 0xedb1aa1c0c6146bb, // fix
		CCSPlayer_m_iThrowGrenadeCounter = 0x8cfadbabed8b73be, // fix
		CCSPlayer_m_iWeaponPurchasesThisMatch = 0xb8df04b24050a99d, // fix
		CCSPlayer_m_iWeaponPurchasesThisRound = 0xee2ebfb6f16b8eb, // fix
		CCSPlayer_m_isCurrentGunGameLeader = 0x9d0e26dab2aba9d5, // fix
		CCSPlayer_m_isCurrentGunGameTeamLeader = 0xf815875f57b357e7, // fix
		CCSPlayer_m_nDeathCamMusic = 0x74359ae617244367, // fix
		CCSPlayer_m_nHeavyAssaultSuitCooldownRemaining = 0xfd12c0ba42c15a83, // fix
		CCSPlayer_m_nIsAutoMounting = 0xee0fbae9d0ca6a25, // fix
		CCSPlayer_m_nLastConcurrentKilled = 0x8ef29d531dbf7aa6, // fix
		CCSPlayer_m_nLastKillerIndex = 0xabd6b7af58346afe, // fix
		CCSPlayer_m_nNumFastDucks = 0xc3ad45b0479466e4, // fix
		CCSPlayer_m_nQuestProgressReason = 0x5ffb2c0c9cf14a47, // fix
		CCSPlayer_m_nSurvivalTeam = 0x713d554dbd58c866, // fix
		CCSPlayer_m_passiveItems = 0x987dde0f2e702c35, // fix
		CCSPlayer_m_rank = 0xcb8960b83686f8f, // fix
		CCSPlayer_m_szArmsModel = 0x9bc7301c4f337036, // fix
		CCSPlayer_m_totalHitsOnServer = 0xe036208dadc22db9, // fix
		CCSPlayer_m_unActiveQuestId = 0x8e9a2e30b96f0482, // fix
		CCSPlayer_m_unCurrentEquipmentValue = 0x2fba76cc21001da8, // fix
		CCSPlayer_m_unFreezetimeEndEquipmentValue = 0xac289ceab9ba3c6e, // fix
		CCSPlayer_m_unMusicID = 0xab6a0ca8846117e6, // fix
		CCSPlayer_m_unPlayerTvControlFlags = 0x3266a9b1243e769e, // fix
		CCSPlayer_m_unRoundStartEquipmentValue = 0xdd7da3d43c11792e, // fix
		CCSPlayer_m_unTotalRoundDamageDealt = 0x34fea2028856e05, // fix
		CCSPlayer_m_vecAutomoveTargetEnd = 0x9df74214dff53a47, // fix
		CCSPlayer_m_vecOrigin = 0x103177ddf9e0f985, // fix
		CCSPlayer_m_vecOrigin_2_ = 0xb99206f7e14692a6, // fix
		CCSPlayer_m_vecPlayerPatchEconIndices = 0xad956766e79039c2, // fix
		CCSPlayer_m_vecSpawnRappellingRopeOrigin = 0x51742a1a776ed689, // fix
		CCSRagdoll_m_bClientSideAnimation = 0x6063442b22a795, // fix
		CCSRagdoll_m_bDiedAirborne = 0xa25f0bce4883a616, // fix
		CCSRagdoll_m_flAbsYaw = 0x20f53d381629f38c, // fix
		CCSRagdoll_m_flDeathYaw = 0xa14801fa55abd7dd, // fix
		CCSRagdoll_m_hPlayer = 0x2f6d5b06dffd324c, // fix
		CCSRagdoll_m_iDeathFrame = 0x6191160e796350e6, // fix
		CCSRagdoll_m_iDeathPose = 0x9df475faf204c127, // fix
		CCSRagdoll_m_iTeamNum = 0x817463693685ff7a, // fix
		CCSRagdoll_m_nForceBone = 0x2d2e26f7ec3099fc, // fix
		CCSRagdoll_m_nModelIndex = 0x30a3cf18b097125c, // fix
		CCSRagdoll_m_vecForce = 0x52e75f07634632cf, // fix
		CCSRagdoll_m_vecOrigin = 0xb8eb8990561a617d, // fix
		CCSRagdoll_m_vecRagdollOrigin = 0x22c9b42198d81fa8, // fix
		CCSRagdoll_m_vecRagdollVelocity = 0xb983c1670862909d, // fix
		CCascadeLight_m_LightColor = 0xfc518501e8c43384, // fix
		CCascadeLight_m_LightColorScale = 0x9534a51504971c1b, // fix
		CCascadeLight_m_bEnabled = 0x2c6541cd14e70018, // fix
		CCascadeLight_m_bUseLightEnvAngles = 0xd66084c3b4ed7286, // fix
		CCascadeLight_m_envLightShadowDirection = 0x7f4cba069f626a2c, // fix
		CCascadeLight_m_flMaxShadowDist = 0x3a2594724342f96b, // fix
		CCascadeLight_m_shadowDirection = 0x8d16992d9ea61e04, // fix
		CChicken_m_jumpedThisFrame = 0x13f47ffaecf252d0, // fix
		CChicken_m_leader = 0xda182438da0902b0, // fix
		CColorCorrectionVolume_m_FadeDuration = 0x105528997e4069ce, // fix
		CColorCorrectionVolume_m_MaxWeight = 0x56dc2c78d702fd0a, // fix
		CColorCorrectionVolume_m_Weight = 0xf4871c585ed876fc, // fix
		CColorCorrectionVolume_m_bEnabled = 0xeb393f3580785dc, // fix
		CColorCorrectionVolume_m_lookupFilename = 0xfa38a2b3d76a726b, // fix
		CColorCorrection_m_bClientSide = 0x79d2a9b9cdae4074, // fix
		CColorCorrection_m_bEnabled = 0xdb09effba93a299f, // fix
		CColorCorrection_m_bExclusive = 0x61401adc672281d9, // fix
		CColorCorrection_m_bMaster = 0x6e13c827d9f92be8, // fix
		CColorCorrection_m_flCurWeight = 0x28636d71f5a7a3af, // fix
		CColorCorrection_m_flFadeInDuration = 0x80364c6e89a51bc8, // fix
		CColorCorrection_m_flFadeOutDuration = 0xb31554dc97bcbe77, // fix
		CColorCorrection_m_flMaxWeight = 0xfea49166fefc674, // fix
		CColorCorrection_m_maxFalloff = 0x7c747a70174df5ba, // fix
		CColorCorrection_m_minFalloff = 0x7060159d5c116ccd, // fix
		CColorCorrection_m_netLookupFilename = 0xe644da64e3edfa77, // fix
		CColorCorrection_m_vecOrigin = 0x4abe96a0b08ef99a, // fix
		CDangerZoneController_m_DangerZones = 0x3972f85ddd9a5641, // fix
		CDangerZoneController_m_bDangerZoneControllerEnabled = 0x9b07403fa404b5d3, // fix
		CDangerZoneController_m_bMissionControlledExplosions = 0x36ae38ac6fdf019, // fix
		CDangerZoneController_m_flFinalExpansionTime = 0xeb9028865eedf30, // fix
		CDangerZoneController_m_flStartTime = 0x9526ab29c47f936, // fix
		CDangerZoneController_m_flWaveEndTimes = 0x200fdf12196dd057, // fix
		CDangerZoneController_m_hTheFinalZone = 0x750379c617795fa2, // fix
		CDangerZoneController_m_vecEndGameCircleEnd = 0xb2144e845c6d7de9, // fix
		CDangerZoneController_m_vecEndGameCircleStart = 0xa2b79545cef47b7, // fix
		CDangerZone_m_flBombLaunchTime = 0x4b9d795d1c065cbc, // fix
		CDangerZone_m_flExtraRadius = 0x6ef267ab98b0e53e, // fix
		CDangerZone_m_flExtraRadiusStartTime = 0xb02db0d285436d04, // fix
		CDangerZone_m_flExtraRadiusTotalLerpTime = 0x8cce496a6a40878f, // fix
		CDangerZone_m_iWave = 0xdbc6627c44d670a9, // fix
		CDangerZone_m_nDropOrder = 0xaa84421e69b431b9, // fix
		CDangerZone_m_vecDangerZoneOriginStartedAt = 0xb2f4dbfffdb0d954, // fix
		CDrone_m_bPilotTakeoverAllowed = 0x78f3b0771126882a, // fix
		CDrone_m_hCurrentPilot = 0x3267c5d12bad34ec, // fix
		CDrone_m_hDeliveryCargo = 0xec8093cab87e3e12, // fix
		CDrone_m_hMoveToThisEntity = 0x9310fd55651fd08, // fix
		CDrone_m_hPotentialCargo = 0x55f8d2cf1b38f153, // fix
		CDrone_m_vecTagIncrements_0_ = 0xf767a771b6fdfee7, // fix
		CDrone_m_vecTagPositions_0_ = 0x4addcd9ed771a22d, // fix
		CDronegun_m_bHasTarget = 0x8fc3287feaba7d, // fix
		CDronegun_m_iHealth = 0x6a032eba2fc89dd9, // fix
		CDronegun_m_vecAttentionTarget = 0x2c4cb51ed71313fc, // fix
		CDronegun_m_vecTargetOffset = 0x6fd714a7b8060412, // fix
		CDynamicLight_m_Exponent = 0x1beb20a9cc5d397d, // fix
		CDynamicLight_m_Flags = 0x879686e82f5a10bb, // fix
		CDynamicLight_m_InnerAngle = 0x5cccc21acec769dc, // fix
		CDynamicLight_m_LightStyle = 0x68637f13bc9011e6, // fix
		CDynamicLight_m_OuterAngle = 0x57b7571b769282c8, // fix
		CDynamicLight_m_Radius = 0x827ac22893f08c21, // fix
		CDynamicLight_m_SpotRadius = 0x7ad5aea4b8a95a59, // fix
		CDynamicProp_m_bShouldGlow = 0x2815feb02467d50e, // fix
		CDynamicProp_m_bUseHitboxesForRenderBox = 0x9cc83ad23b450ed7, // fix
		CDynamicProp_m_clrGlow = 0x9dba3ac3584ffa, // fix
		CDynamicProp_m_flGlowMaxDist = 0x3528338738d43aa3, // fix
		CDynamicProp_m_nGlowStyle = 0xf362d9f1e6cd92d6, // fix
		CEconEntity_m_AttributeManager = 0x562d736fa7f54f61, // fix
		CEconEntity_m_Attributes = 0xf8b208121b17b600, // fix
		CEconEntity_m_Item = 0xc811d186fcde2b9f, // fix
		CEconEntity_m_NetworkedDynamicAttributesForDemos = 0xdd028f4813cf707a, // fix
		CEconEntity_m_OriginalOwnerXuidHigh = 0x37f511603c08e46c, // fix
		CEconEntity_m_OriginalOwnerXuidLow = 0xee33c2c7c5112809, // fix
		CEconEntity_m_ProviderType = 0xc96fca273b459e2a, // fix
		CEconEntity_m_bInitialized = 0x536fd12f9235e13e, // fix
		CEconEntity_m_flFallbackWear = 0xb03ce6762107b7ef, // fix
		CEconEntity_m_hOuter = 0x76332d79910e74cb, // fix
		CEconEntity_m_iAccountID = 0xeedb0d81ba75e0f9, // fix
		CEconEntity_m_iEntityLevel = 0xfdc0e547f514e393, // fix
		CEconEntity_m_iEntityQuality = 0x1f858d90fdb48ca, // fix
		CEconEntity_m_iItemDefinitionIndex = 0x64662ee07ad72f15, // fix
		CEconEntity_m_iItemIDHigh = 0x5fb02e9f6e8f20f4, // fix
		CEconEntity_m_iItemIDLow = 0x6f233a0f88c69fcc, // fix
		CEconEntity_m_iReapplyProvisionParity = 0x297c7b0d18306c88, // fix
		CEconEntity_m_nFallbackPaintKit = 0xc8fdc5c59c0f1394, // fix
		CEconEntity_m_nFallbackSeed = 0x69709c5296b427c5, // fix
		CEconEntity_m_nFallbackStatTrak = 0xb838efe0f0561ade, // fix
		CEconEntity_m_szCustomName = 0x13fb3b841479d49e, // fix
		CEmbers_m_bEmit = 0x1b0f9edca7957384, // fix
		CEmbers_m_nDensity = 0xa4a0ee68f9a54652, // fix
		CEmbers_m_nLifetime = 0xb7d9d63338483083, // fix
		CEmbers_m_nSpeed = 0x34ec2a8c0f363790, // fix
		CEntityDissolve_m_flFadeInLength = 0x1a05f60675b368b, // fix
		CEntityDissolve_m_flFadeInStart = 0xa050b83b1481c693, // fix
		CEntityDissolve_m_flFadeOutLength = 0x457e629df8ac9285, // fix
		CEntityDissolve_m_flFadeOutModelLength = 0x43d03119a2a5fa05, // fix
		CEntityDissolve_m_flFadeOutModelStart = 0x886a3b26f9db09e2, // fix
		CEntityDissolve_m_flFadeOutStart = 0x64da96d5b589023, // fix
		CEntityDissolve_m_flStartTime = 0xd264d63b1523aa8e, // fix
		CEntityDissolve_m_nDissolveType = 0xd323976b7e41fcf9, // fix
		CEntityDissolve_m_nMagnitude = 0x1e12363f072630a0, // fix
		CEntityDissolve_m_vDissolverOrigin = 0x3dcf7626e918a4a9, // fix
		CEntityFlame_m_bCheapEffect = 0x1d63083a7c56af20, // fix
		CEntityFlame_m_hEntAttached = 0xb0ec0a55fbb85dd6, // fix
		CEntityFreezing_m_bFinishFreezing = 0xea3b115aeb4b8678, // fix
		CEntityFreezing_m_flFrozen = 0x396012bc09258d66, // fix
		CEntityFreezing_m_flFrozenPerHitbox = 0xa1e6a215435a8178, // fix
		CEntityFreezing_m_vFreezingOrigin = 0x1179f88536d49b03, // fix
		CEntityParticleTrail_m_Info = 0x479fc7177894cbbb, // fix
		CEntityParticleTrail_m_flEndSize = 0xb45204925b26df7, // fix
		CEntityParticleTrail_m_flLifetime = 0xf4963cdabd584ce8, // fix
		CEntityParticleTrail_m_flStartSize = 0xe767e5da8cf4f85c, // fix
		CEntityParticleTrail_m_hConstraintEntity = 0xab9814ba211f34f2, // fix
		CEntityParticleTrail_m_iMaterialName = 0x8a8f5225bd32bced, // fix
		CEnvAmbientLight_m_vecColor = 0x709b9b734a70be69, // fix
		CEnvDOFController_m_bDOFEnabled = 0xd605ee122cd40f8b, // fix
		CEnvDOFController_m_flFarBlurDepth = 0x53dd96752d4b8640, // fix
		CEnvDOFController_m_flFarBlurRadius = 0xdc50b161121895fd, // fix
		CEnvDOFController_m_flFarFocusDepth = 0x8e923b175a7dcdfe, // fix
		CEnvDOFController_m_flNearBlurDepth = 0xf0a2508c7c1497e0, // fix
		CEnvDOFController_m_flNearBlurRadius = 0xfff688d788abe2c7, // fix
		CEnvDOFController_m_flNearFocusDepth = 0xf6266739695f461e, // fix
		CEnvDetailController_m_flFadeEndDist = 0xbd644940c4412f25, // fix
		CEnvDetailController_m_flFadeStartDist = 0x5997aa3957efeb1f, // fix
		CEnvGasCanister_m_bDoImpactEffects = 0x54ba472289606fe9, // fix
		CEnvGasCanister_m_bInSkybox = 0x20fa5421e293340, // fix
		CEnvGasCanister_m_bLanded = 0xf22f0012dcb93adf, // fix
		CEnvGasCanister_m_bLaunchedFromWithinWorld = 0x109c883854ddc6be, // fix
		CEnvGasCanister_m_flFlightSpeed = 0xced38d31740ed708, // fix
		CEnvGasCanister_m_flFlightTime = 0xdf3997a945aaab76, // fix
		CEnvGasCanister_m_flHorizSpeed = 0x636326009bf0b016, // fix
		CEnvGasCanister_m_flInitialZSpeed = 0xa294f405f1ff66af, // fix
		CEnvGasCanister_m_flLaunchTime = 0x3e49133e79b0c1fe, // fix
		CEnvGasCanister_m_flSkyboxScale = 0xe6faeb30473c8c02, // fix
		CEnvGasCanister_m_flWorldEnterTime = 0xb6c28569addead0c, // fix
		CEnvGasCanister_m_flZAcceleration = 0xf159f25caebde4, // fix
		CEnvGasCanister_m_hSkyboxCopy = 0x30fb65ea3a6cafc1, // fix
		CEnvGasCanister_m_nMyZoneIndex = 0xd6c2f96d0a3024c1, // fix
		CEnvGasCanister_m_vecDirection = 0x1c58e8c618721bef, // fix
		CEnvGasCanister_m_vecEnterWorldPosition = 0x6c894ad9d521ebea, // fix
		CEnvGasCanister_m_vecImpactPosition = 0xd97c7d37a8bf53c7, // fix
		CEnvGasCanister_m_vecOrigin = 0xf399034e25b970d0, // fix
		CEnvGasCanister_m_vecOrigin_2_ = 0x439c9e49bb0a6113, // fix
		CEnvGasCanister_m_vecParabolaDirection = 0xb1bae97c4bc416c1, // fix
		CEnvGasCanister_m_vecSkyboxOrigin = 0x94795e54e606c9c4, // fix
		CEnvGasCanister_m_vecStartAngles = 0x8688beea6c6bfec, // fix
		CEnvGasCanister_m_vecStartPosition = 0x15f1a7f89a247228, // fix
		CEnvParticleScript_m_flSequenceScale = 0x29c0676e5fc47922, // fix
		CEnvProjectedTexture_m_LightColor = 0xbe476ce6150664f1, // fix
		CEnvProjectedTexture_m_SpotlightTextureName = 0xe8c063c09225bf4f, // fix
		CEnvProjectedTexture_m_bAlwaysUpdate = 0xe7788542d8f2c186, // fix
		CEnvProjectedTexture_m_bCameraSpace = 0xf184c23c0ac53941, // fix
		CEnvProjectedTexture_m_bEnableShadows = 0x166fe402e769eb16, // fix
		CEnvProjectedTexture_m_bLightOnlyTarget = 0x3c963ff3429e66d6, // fix
		CEnvProjectedTexture_m_bLightWorld = 0xd47c9b5fdedeb156, // fix
		CEnvProjectedTexture_m_bSimpleProjection = 0x26d8c00968abd539, // fix
		CEnvProjectedTexture_m_bState = 0x2e471ecb92a686e7, // fix
		CEnvProjectedTexture_m_flAmbient = 0xfc1084d2bb7b21a2, // fix
		CEnvProjectedTexture_m_flBrightnessScale = 0x917afb7cbfebd1b6, // fix
		CEnvProjectedTexture_m_flColorTransitionTime = 0x448b88452f62b516, // fix
		CEnvProjectedTexture_m_flFarZ = 0x7ab47e91097008e9, // fix
		CEnvProjectedTexture_m_flLightFOV = 0x755d1a00dcc2ac60, // fix
		CEnvProjectedTexture_m_flNearZ = 0x416ffe98e8c840c2, // fix
		CEnvProjectedTexture_m_flProjectionSize = 0xc4cbb21055e44a69, // fix
		CEnvProjectedTexture_m_flRotation = 0x53ec849bebf0c315, // fix
		CEnvProjectedTexture_m_hTargetEntity = 0xaa19c58e654a8287, // fix
		CEnvProjectedTexture_m_iStyle = 0x8c8e499284a7b372, // fix
		CEnvProjectedTexture_m_nShadowQuality = 0x6ab17803d202c7b4, // fix
		CEnvProjectedTexture_m_nSpotlightTextureFrame = 0xc73d39f0421fa17e, // fix
		CEnvQuadraticBeam_m_controlPosition = 0x25930b16921238d6, // fix
		CEnvQuadraticBeam_m_flWidth = 0x4d742ecc3d9d3b14, // fix
		CEnvQuadraticBeam_m_scrollRate = 0x1aac732023832b9, // fix
		CEnvQuadraticBeam_m_targetPosition = 0xf79b3cf2ed6da318, // fix
		CEnvScreenEffect_m_flDuration = 0x56fd2d6706e8a78b, // fix
		CEnvScreenEffect_m_nType = 0x1daa23c73ad09981, // fix
		CEnvScreenOverlay_m_bIsActive = 0x3d249256ff671ba1, // fix
		CEnvScreenOverlay_m_flOverlayTimes_0_ = 0xcc1ae221fdbe90d3, // fix
		CEnvScreenOverlay_m_flStartTime = 0xe6a47e1d00ee5987, // fix
		CEnvScreenOverlay_m_iDesiredOverlay = 0x123cd8d89dde868e, // fix
		CEnvScreenOverlay_m_iszOverlayNames_0_ = 0x6f5ac555d1be4602, // fix
		CEnvTonemapController_m_bUseCustomAutoExposureMax = 0x79c05c3f26b8d5c4, // fix
		CEnvTonemapController_m_bUseCustomAutoExposureMin = 0x2b8c6991b98fb75a, // fix
		CEnvTonemapController_m_bUseCustomBloomScale = 0xc92c383482f4a98, // fix
		CEnvTonemapController_m_flBloomExponent = 0xa146c3858af8c7ed, // fix
		CEnvTonemapController_m_flBloomSaturation = 0x43cb3c5a6e8452c, // fix
		CEnvTonemapController_m_flCustomAutoExposureMax = 0xcb93ca001a7f6d65, // fix
		CEnvTonemapController_m_flCustomAutoExposureMin = 0xab87ce33659491e2, // fix
		CEnvTonemapController_m_flCustomBloomScale = 0x4993839903c01990, // fix
		CEnvTonemapController_m_flCustomBloomScaleMinimum = 0xc2f015ca76ad6b4d, // fix
		CEnvTonemapController_m_flTonemapMinAvgLum = 0xf40a78cd90b0d3be, // fix
		CEnvTonemapController_m_flTonemapPercentBrightPixels = 0x33c3ab2854264d09, // fix
		CEnvTonemapController_m_flTonemapPercentTarget = 0xf0a0d475a0483729, // fix
		CEnvTonemapController_m_flTonemapRate = 0xfc21baa7357d02fa, // fix
		CEnvWind_m_EnvWindShared = 0xbc1693a8fe18d3e2, // fix
		CEnvWind_m_flGustDuration = 0x8a0d5ed050dfe398, // fix
		CEnvWind_m_flInitialWindSpeed = 0x5939775f30920913, // fix
		CEnvWind_m_flMaxGustDelay = 0xdff18110bf841650, // fix
		CEnvWind_m_flMinGustDelay = 0xcffc49ca929bdbb2, // fix
		CEnvWind_m_flStartTime = 0xe8da7d8c3e65ab90, // fix
		CEnvWind_m_iGustDirChange = 0x5f4d1f431e2c790d, // fix
		CEnvWind_m_iInitialWindDir = 0x884e4dc656d27c7c, // fix
		CEnvWind_m_iMaxGust = 0x48048c9c091d75f4, // fix
		CEnvWind_m_iMaxWind = 0x67913e25a4c9703c, // fix
		CEnvWind_m_iMinGust = 0x81ed26f5e3f9b949, // fix
		CEnvWind_m_iMinWind = 0x367a53a3a43e2767, // fix
		CEnvWind_m_iWindSeed = 0x9de66c3320f6ca1a, // fix
		CFEPlayerDecal_m_flCreationTime = 0x1244701970137602, // fix
		CFEPlayerDecal_m_nEntity = 0xea7f795971d1dd6d, // fix
		CFEPlayerDecal_m_nHitbox = 0x5c0eeac42a6e3f0f, // fix
		CFEPlayerDecal_m_nPlayer = 0x58089ce68e95d6e8, // fix
		CFEPlayerDecal_m_nTintID = 0x7f7aed1e2ece0a19, // fix
		CFEPlayerDecal_m_nUniqueID = 0xc0807cd85d520681, // fix
		CFEPlayerDecal_m_nVersion = 0xd41fac5e429e6053, // fix
		CFEPlayerDecal_m_rtGcTime = 0x7c819a30d3c700c8, // fix
		CFEPlayerDecal_m_ubSignature = 0xf60dfd280be3f4e0, // fix
		CFEPlayerDecal_m_unAccountID = 0x986c5e285d9f3a69, // fix
		CFEPlayerDecal_m_unTraceID = 0x66a1500486471abc, // fix
		CFEPlayerDecal_m_vecEndPos = 0xcb818e57d059a853, // fix
		CFEPlayerDecal_m_vecNormal = 0xabdb46edd0fe5c12, // fix
		CFEPlayerDecal_m_vecRight = 0x3d034adbcf60e82a, // fix
		CFEPlayerDecal_m_vecStart = 0x1c0e94ac7b9af2dd, // fix
		CFireSmoke_m_flScale = 0xd8f099403e16cd7, // fix
		CFireSmoke_m_flScaleTime = 0xff707af4dd2d911b, // fix
		CFireSmoke_m_flStartScale = 0x8c69030ff1a831aa, // fix
		CFireSmoke_m_nFlags = 0x56aa80adb8f9be79, // fix
		CFireSmoke_m_nFlameFromAboveModelIndex = 0xede57c519f79a9a6, // fix
		CFireSmoke_m_nFlameModelIndex = 0xb179c39016856447, // fix
		CFireTrail_m_flLifetime = 0x987a9085bde70f76, // fix
		CFireTrail_m_nAttachment = 0x6881a66ad809a4c0, // fix
		CFish_m_angle = 0xd1f87343a54507d6, // fix
		CFish_m_lifeState = 0xa94cf7bdbf787cb1, // fix
		CFish_m_nModelIndex = 0x1c18b32c9630923c, // fix
		CFish_m_poolOrigin = 0xe8210ca623268972, // fix
		CFish_m_waterLevel = 0x391ff21213ac1db, // fix
		CFish_m_x = 0xbe0dae585eea6481, // fix
		CFish_m_y = 0x366c12dcd8ef9f1c, // fix
		CFish_m_z = 0x1db701a22f480535, // fix
		CFists_m_bPlayingUninterruptableAct = 0x887e9bcf896eec9c, // fix
		CFogController_m_fog_HDRColorScale = 0x703faf8b3cb39a9e, // fix
		CFogController_m_fog_ZoomFogScale = 0x6f834a185932b79f, // fix
		CFogController_m_fog_blend = 0x3bcd00b33ed43b18, // fix
		CFogController_m_fog_colorPrimary = 0x29fda88c118c77a6, // fix
		CFogController_m_fog_colorPrimaryLerpTo = 0xe192ff76b4647c74, // fix
		CFogController_m_fog_colorSecondary = 0x59b8b7238e9f220c, // fix
		CFogController_m_fog_colorSecondaryLerpTo = 0xf00c8075985097bb, // fix
		CFogController_m_fog_dirPrimary = 0x59f752d5bffa26c2, // fix
		CFogController_m_fog_duration = 0x217467036d5ecd80, // fix
		CFogController_m_fog_enable = 0x92361fb9a35d4e00, // fix
		CFogController_m_fog_end = 0x27c4d80d0226badc, // fix
		CFogController_m_fog_endLerpTo = 0xc1f0a50c414369a2, // fix
		CFogController_m_fog_farz = 0xc600c4897bf755d8, // fix
		CFogController_m_fog_lerptime = 0xb498d7143615ea0, // fix
		CFogController_m_fog_maxdensity = 0xb8201d6ed89a89e4, // fix
		CFogController_m_fog_maxdensityLerpTo = 0xa295fdce0817825, // fix
		CFogController_m_fog_start = 0x2d94ea9530db6b4b, // fix
		CFogController_m_fog_startLerpTo = 0xe6a64bc5d8f5a1ba, // fix
		CFootstepControl_m_destination = 0x2c5209c8035d99d6, // fix
		CFootstepControl_m_source = 0x9ad1c7e6eae4a614, // fix
		CFuncAreaPortalWindow_m_flFadeDist = 0xdf03618011323fc6, // fix
		CFuncAreaPortalWindow_m_flFadeStartDist = 0xbccc91162966016d, // fix
		CFuncAreaPortalWindow_m_flTranslucencyLimit = 0x2ec738d05c7f6115, // fix
		CFuncAreaPortalWindow_m_iBackgroundModelIndex = 0x680eabb15eda6396, // fix
		CFuncConveyor_m_flConveyorSpeed = 0x5b47eb9b492a0224, // fix
		CFuncLadder_m_bFakeLadder = 0x1d2966f4048c145c, // fix
		CFuncLadder_m_vecLadderDir = 0xa3be7321f79c902c, // fix
		CFuncLadder_m_vecPlayerMountPositionBottom = 0x2b1e2adfa21fbc4a, // fix
		CFuncLadder_m_vecPlayerMountPositionTop = 0xcc321596b51b5e0f, // fix
		CFuncMoveLinear_m_fFlags = 0x36bf5f81fc98c191, // fix
		CFuncMoveLinear_m_vecVelocity = 0xba39431d95ccdcd, // fix
		CFuncOccluder_m_bActive = 0xdcd2f3dbccded5bd, // fix
		CFuncOccluder_m_nOccluderIndex = 0x705b0ba84dfaf25c, // fix
		CFuncRotating_m_angRotation_0_ = 0x6f0c13c0d1a211be, // fix
		CFuncRotating_m_angRotation_1_ = 0x4106f652625fa2c6, // fix
		CFuncRotating_m_angRotation_2_ = 0x3cb9b30318a278ed, // fix
		CFuncRotating_m_flSimulationTime = 0xb6d05c0050a096bc, // fix
		CFuncRotating_m_vecOrigin = 0x883f2eead2b16a82, // fix
		CFuncSmokeVolume_m_Collision = 0x675219f716752be4, // fix
		CFuncSmokeVolume_m_Color1 = 0x4451bb4ce717f9f0, // fix
		CFuncSmokeVolume_m_Color2 = 0x56d2e01274643ff4, // fix
		CFuncSmokeVolume_m_Density = 0x19b9abcac76848fa, // fix
		CFuncSmokeVolume_m_DensityRampSpeed = 0xc14f76b9b396e78c, // fix
		CFuncSmokeVolume_m_MaterialName = 0xcd867fa6da22841d, // fix
		CFuncSmokeVolume_m_MovementSpeed = 0x27625aec46eb2ade, // fix
		CFuncSmokeVolume_m_ParticleDrawWidth = 0x7b4cfb92506a4770, // fix
		CFuncSmokeVolume_m_ParticleSpacingDistance = 0x3b2248d4d0111a4f, // fix
		CFuncSmokeVolume_m_RotationSpeed = 0x5643640607c3845a, // fix
		CFuncSmokeVolume_m_maxDrawDistance = 0xd20cf4520ac6b2f2, // fix
		CFuncSmokeVolume_m_nSolidType = 0xb242e4d69f82881c, // fix
		CFuncSmokeVolume_m_nSurroundType = 0xb315356027b8f8ca, // fix
		CFuncSmokeVolume_m_spawnflags = 0x60e78ee91e8cc0ae, // fix
		CFuncSmokeVolume_m_triggerBloat = 0xc703020b47df53ab, // fix
		CFuncSmokeVolume_m_usSolidFlags = 0x61a00644f66480df, // fix
		CFuncSmokeVolume_m_vecMaxs = 0x4e3a2207fb0aa32, // fix
		CFuncSmokeVolume_m_vecMins = 0x9ddb2bec19c57443, // fix
		CFuncSmokeVolume_m_vecSpecifiedSurroundingMaxs = 0x70599379a1e19276, // fix
		CFuncSmokeVolume_m_vecSpecifiedSurroundingMins = 0xf7cb5cc470d530b3, // fix
		CFunc_Dust_m_Collision = 0xe1882e6c429c500d, // fix
		CFunc_Dust_m_Color = 0x126ba8fbd1de19f6, // fix
		CFunc_Dust_m_DistMax = 0xe5a61a762e0211ac, // fix
		CFunc_Dust_m_DustFlags = 0xcb12ae026d5eb1e9, // fix
		CFunc_Dust_m_FallSpeed = 0xd421d09b920c6ed1, // fix
		CFunc_Dust_m_LifetimeMax = 0x93fa79a6a02a9eb0, // fix
		CFunc_Dust_m_LifetimeMin = 0x983a19bd493dadd8, // fix
		CFunc_Dust_m_SpawnRate = 0x84e6fe9c2fa34fd, // fix
		CFunc_Dust_m_SpeedMax = 0xaacbce0c8ecea6e4, // fix
		CFunc_Dust_m_bAffectedByWind = 0xd46dcf2b6d3db8b8, // fix
		CFunc_Dust_m_flSizeMax = 0x6c067de64ba6911a, // fix
		CFunc_Dust_m_flSizeMin = 0xd608a56dff604f28, // fix
		CFunc_Dust_m_nModelIndex = 0x68943cf0ab76b1e1, // fix
		CFunc_Dust_m_nSolidType = 0x89d14f88f0e144f2, // fix
		CFunc_Dust_m_nSurroundType = 0xd8a9fa8868d9091e, // fix
		CFunc_Dust_m_triggerBloat = 0xbdc50551f6da5f46, // fix
		CFunc_Dust_m_usSolidFlags = 0xf6fe532f1b023591, // fix
		CFunc_Dust_m_vecMaxs = 0xe1051c06d5f9739b, // fix
		CFunc_Dust_m_vecMins = 0x7058a1914744451f, // fix
		CFunc_Dust_m_vecSpecifiedSurroundingMaxs = 0x38b74f2ce5691405, // fix
		CFunc_Dust_m_vecSpecifiedSurroundingMins = 0x9cf795df13ac1225, // fix
		CFunc_LOD_m_nDisappearMaxDist = 0x5e861c6fd1dddea8, // fix
		CFunc_LOD_m_nDisappearMinDist = 0x3ea2e96e0dbff3f3, // fix
		CGrassBurn_m_flGrassBurnClearTime = 0xa33b8a64bc8fc1b6, // fix
		CHandleTest_m_Handle = 0xe2073029c27f8229, // fix
		CHandleTest_m_bSendHandle = 0xf561f6391fc3dc17, // fix
		CHostage_m_fFlags = 0xa7480e851722974d, // fix
		CHostage_m_flDropStartTime = 0xd4f9756a018476bf, // fix
		CHostage_m_flGrabSuccessTime = 0x939a0d057a805566, // fix
		CHostage_m_flRescueStartTime = 0x484458d335a38126, // fix
		CHostage_m_iHealth = 0x21451014c9a73e3f, // fix
		CHostage_m_iMaxHealth = 0xaf2f9ebcea6caf4b, // fix
		CHostage_m_isRescued = 0x1bd8a30092fd523b, // fix
		CHostage_m_jumpedThisFrame = 0x82d1b2d14c016144, // fix
		CHostage_m_leader = 0xc9b7e681e8398c56, // fix
		CHostage_m_lifeState = 0x2fd16c328b91734a, // fix
		CHostage_m_nHostageState = 0xa9997433da247426, // fix
		CHostage_m_vel = 0xc45b4bee1f471d76, // fix
		CInferno_m_bFireIsBurning = 0x12a6e8beffb731ee, // fix
		CInferno_m_fireCount = 0x2a80b2ec65b018cd, // fix
		CInferno_m_fireXDelta = 0xfba3ba2a6837ddde, // fix
		CInferno_m_fireYDelta = 0xd9e750d271335752, // fix
		CInferno_m_fireZDelta = 0x7f98e503cbe6c075, // fix
		CInferno_m_nFireEffectTickBegin = 0xf9c30ed058710a6a, // fix
		CInfoMapRegion_m_flRadius = 0x94d4036e348d242a, // fix
		CInfoMapRegion_m_szLocToken = 0xcb686dc84437ef0f, // fix
		CInfoOverlayAccessor_m_iOverlayID = 0x4594dc2923888a04, // fix
		CInfoOverlayAccessor_m_iTextureFrameIndex = 0xaa8e7abf64056d51, // fix
		CItemAssaultSuitUseable_m_bIsHeavyAssaultSuit = 0x18a1a84ed2f1b1a5, // fix
		CItemAssaultSuitUseable_m_nArmorValue = 0x55293a74cef24ec3, // fix
		CItemDogtags_m_KillingPlayer = 0x5f2fad9970bfdff2, // fix
		CItemDogtags_m_OwningPlayer = 0xa6a1daa5b04c259c, // fix
		CItem_m_bShouldGlow = 0x9807f03811858048, // fix
		CLightGlow_m_angRotation = 0x428986484faca76e, // fix
		CLightGlow_m_clrRender = 0x13bda46bc8199bb7, // fix
		CLightGlow_m_flGlowProxySize = 0x98abaf182a7150c0, // fix
		CLightGlow_m_nHorizontalSize = 0xcc221962b627b0b6, // fix
		CLightGlow_m_nMaxDist = 0x5e72a2a19c1975c4, // fix
		CLightGlow_m_nMinDist = 0xa695ef7ea066bdea, // fix
		CLightGlow_m_nOuterMaxDist = 0x93bb19071275804c, // fix
		CLightGlow_m_nVerticalSize = 0x784ecf32bca6bbbb, // fix
		CLightGlow_m_spawnflags = 0x8ec91826932eceac, // fix
		CLightGlow_m_vecOrigin = 0x126871957ba5ab41, // fix
		CLightGlow_moveparent = 0xf4b3b7b716a7064b, // fix
		CMapVetoPickController_m_nAccountIDs = 0x11c4098511fd1579, // fix
		CMapVetoPickController_m_nCurrentPhase = 0x897ed7cb803f545f, // fix
		CMapVetoPickController_m_nDraftType = 0x36b2e09012456207, // fix
		CMapVetoPickController_m_nMapId0 = 0x8176db41358c49f9, // fix
		CMapVetoPickController_m_nMapId1 = 0xc759fd14339c2d2, // fix
		CMapVetoPickController_m_nMapId2 = 0xa29d22104b2c06d0, // fix
		CMapVetoPickController_m_nMapId3 = 0xf18498adde58d737, // fix
		CMapVetoPickController_m_nMapId4 = 0x9d28dd09b545a2a2, // fix
		CMapVetoPickController_m_nMapId5 = 0x1ea38ca06ef0b04c, // fix
		CMapVetoPickController_m_nPhaseDurationTicks = 0x699e46fbe2fdb3e1, // fix
		CMapVetoPickController_m_nPhaseStartTick = 0xfd87f83209e56aea, // fix
		CMapVetoPickController_m_nStartingSide0 = 0x410bcd411186b09a, // fix
		CMapVetoPickController_m_nTeamWinningCoinToss = 0x2140b2f1be5be90d, // fix
		CMapVetoPickController_m_nTeamWithFirstChoice = 0x709a2ed07c338e82, // fix
		CMapVetoPickController_m_nVoteMapIdsList = 0x7f723135fb09b66a, // fix
		CMaterialModifyControl_m_bFloatLerpWrap = 0xe8a39432a27f34d6, // fix
		CMaterialModifyControl_m_bNewAnimCommandsSemaphore = 0xc96eeb201d626483, // fix
		CMaterialModifyControl_m_bWrap = 0xc487d2a3315e68b3, // fix
		CMaterialModifyControl_m_flFloatLerpEndValue = 0x5094a51fd9c1e6ad, // fix
		CMaterialModifyControl_m_flFloatLerpStartValue = 0x87be91a59c4ef9fb, // fix
		CMaterialModifyControl_m_flFloatLerpTransitionTime = 0x293cba2b1cc6bc66, // fix
		CMaterialModifyControl_m_flFramerate = 0x73265f966f5ff066, // fix
		CMaterialModifyControl_m_iFrameEnd = 0x874cdb78508cbf1e, // fix
		CMaterialModifyControl_m_iFrameStart = 0x72c6e59db5b55901, // fix
		CMaterialModifyControl_m_nModifyMode = 0x70d654285745131, // fix
		CMaterialModifyControl_m_szMaterialName = 0xf2d530cf560db3c4, // fix
		CMaterialModifyControl_m_szMaterialVar = 0x311c3209e5ab1aa1, // fix
		CMaterialModifyControl_m_szMaterialVarValue = 0x23ad7c29fcb9887, // fix
		CMelee_m_flThrowAt = 0x8de28266b6028a88, // fix
		CMolotovProjectile_m_bIsIncGrenade = 0xf57f0922347329f8, // fix
		CMovieDisplay_m_bEnabled = 0xd1d41208ad0dedc3, // fix
		CMovieDisplay_m_bForcedSlave = 0x9b2c3eb730cf36ad, // fix
		CMovieDisplay_m_bLooping = 0xc8c188653fa097c4, // fix
		CMovieDisplay_m_bStretchToFill = 0x2faa9967c486a722, // fix
		CMovieDisplay_m_bUseCustomUVs = 0x7652fdc4faa70042, // fix
		CMovieDisplay_m_flUMax = 0x2dbc6c9253ab9ac7, // fix
		CMovieDisplay_m_flUMin = 0x2f6b3e1fae5fc753, // fix
		CMovieDisplay_m_flVMax = 0xd185a021ed154438, // fix
		CMovieDisplay_m_flVMin = 0x3a7bf839cf5d436c, // fix
		CMovieDisplay_m_szGroupName = 0x6e6142fca16d08c4, // fix
		CMovieDisplay_m_szMovieFilename = 0xa35e53854ceab900, // fix
		CParadropChopper_m_hCallingPlayer = 0x13cfe58616ca1c27, // fix
		CParadropChopper_m_vecOrigin = 0x882c0a5958cd7466, // fix
		CParadropChopper_m_vecOrigin_2_ = 0xf7f8e8443e23e604, // fix
		CParticleFire_m_vDirection = 0xb68f4a60fb97a4e2, // fix
		CParticleFire_m_vOrigin = 0x88985d9cd6ec67ec, // fix
		CParticlePerformanceMonitor_m_bDisplayPerf = 0x392318d2451ebd55, // fix
		CParticlePerformanceMonitor_m_bMeasurePerf = 0x1ed4811f530884ce, // fix
		CParticleSystem_m_angRotation = 0x36f08733af863344, // fix
		CParticleSystem_m_bActive = 0xc374358666ebd20a, // fix
		CParticleSystem_m_fEffects = 0x11a914f3ade420f4, // fix
		CParticleSystem_m_flStartTime = 0x944abd9fc7740048, // fix
		CParticleSystem_m_hControlPointEnts = 0x135c6eb4a62f8ca9, // fix
		CParticleSystem_m_hOwnerEntity = 0xcb7c1f9d1642e675, // fix
		CParticleSystem_m_iControlPointParents = 0xb6d958f30d1db2d5, // fix
		CParticleSystem_m_iEffectIndex = 0xa7fb895a94c8c823, // fix
		CParticleSystem_m_iParentAttachment = 0xf697e36a169dbc8b, // fix
		CParticleSystem_m_iServerControlPointAssignments = 0x54df283ec70d410b, // fix
		CParticleSystem_m_nStopType = 0x353c8d83f1c23995, // fix
		CParticleSystem_m_szSnapshotFileName = 0x257a34500f2028e0, // fix
		CParticleSystem_m_vServerControlPoints = 0xd28105a2619bf9ea, // fix
		CParticleSystem_m_vecOrigin = 0x8eab67a7a763ec6d, // fix
		CParticleSystem_moveparent = 0xe074d2a84c5ad8b8, // fix
		CPhysBoxMultiplayer_m_fMass = 0xed434e023db15103, // fix
		CPhysBoxMultiplayer_m_iPhysicsMode = 0x3f94bf2361bee867, // fix
		CPhysBox_m_mass = 0xc3c00c896efc10c, // fix
		CPhysPropLootCrate_m_bRenderInPSPM = 0xa338d6ea148931af, // fix
		CPhysPropLootCrate_m_bRenderInTablet = 0xb47a1e0db0e9a1a6, // fix
		CPhysPropLootCrate_m_iHealth = 0x3312d6bd031590e8, // fix
		CPhysPropLootCrate_m_iMaxHealth = 0xa393df0bed11f186, // fix
		CPhysicsPropMultiplayer_m_collisionMaxs = 0x385dfe27e2c88283, // fix
		CPhysicsPropMultiplayer_m_collisionMins = 0xde00c2f992da3dd3, // fix
		CPhysicsPropMultiplayer_m_fMass = 0xd82dafd9f1895209, // fix
		CPhysicsPropMultiplayer_m_iPhysicsMode = 0x7c74aa3dab89a0c1, // fix
		CPhysicsProp_m_bAwake = 0xb7069e69f57c1530, // fix
		CPhysicsProp_m_spawnflags = 0xaf0eba6a476f4cbf, // fix
		CPlantedC4_m_bBombDefused = 0xb9df21ba3dfd5808, // fix
		CPlantedC4_m_bBombTicking = 0x83d9240d1d4841b6, // fix
		CPlantedC4_m_flC4Blow = 0x444082d3a1736b34, // fix
		CPlantedC4_m_flDefuseCountDown = 0x780837477f0e42e7, // fix
		CPlantedC4_m_flDefuseLength = 0xfb582689429a0303, // fix
		CPlantedC4_m_flTimerLength = 0xe6a6f001f744d015, // fix
		CPlantedC4_m_hBombDefuser = 0xf75c503a414d0d1d, // fix
		CPlantedC4_m_nBombSite = 0xffa5be476c9e0954, // fix
		CPlasma_m_flScale = 0xd0db4b58c761f846, // fix
		CPlasma_m_flScaleTime = 0xfcb19e3130d3992a, // fix
		CPlasma_m_flStartScale = 0x35eac3bcd35e6ac7, // fix
		CPlasma_m_nFlags = 0x78618c8c36949c60, // fix
		CPlasma_m_nGlowModelIndex = 0x5b9bf8180a51528c, // fix
		CPlasma_m_nPlasmaModelIndex = 0x9a528d90cbbf7e4, // fix
		CPlasma_m_nPlasmaModelIndex2 = 0x127183a7d36e8596, // fix
		CPlayerPing_m_bUrgent = 0xe2c3e6550b15ff23, // fix
		CPlayerPing_m_hPingedEntity = 0xed9f3c370ebb0cdd, // fix
		CPlayerPing_m_hPlayer = 0x1a05c1f195aefb7c, // fix
		CPlayerPing_m_iType = 0x21e0c2db94fa573b, // fix
		CPlayerPing_m_szPlaceName = 0xbf8aa0e537f2d2ac, // fix
		CPlayerResource_m_bAlive = 0x77798aabdc696703, // fix
		CPlayerResource_m_bConnected = 0x9ed80821ccba5da4, // fix
		CPlayerResource_m_iAssists = 0x45bcf82121bf58ce, // fix
		CPlayerResource_m_iCoachingTeam = 0xd135f720c1e945d2, // fix
		CPlayerResource_m_iDeaths = 0x3eefca395d257ab6, // fix
		CPlayerResource_m_iHealth = 0xc3ac89bc16c0a7bf, // fix
		CPlayerResource_m_iKills = 0xe8ab41fd9d6b408, // fix
		CPlayerResource_m_iPendingTeam = 0xc09fece40571a283, // fix
		CPlayerResource_m_iPing = 0x6f4bc696531702f9, // fix
		CPlayerResource_m_iTeam = 0x506b72a6285ebdf2, // fix
		CPointCamera_m_FOV = 0x57fa778a4ed83020, // fix
		CPointCamera_m_FogColor = 0xe0d46a00cfd1f487, // fix
		CPointCamera_m_Resolution = 0xd9354ffecaded1aa, // fix
		CPointCamera_m_bActive = 0xd4506190635d10e3, // fix
		CPointCamera_m_bFogEnable = 0xe4596a94cf521de2, // fix
		CPointCamera_m_bUseScreenAspectRatio = 0xe12f9e227c3272eb, // fix
		CPointCamera_m_flFogEnd = 0x77242aa6f053d2af, // fix
		CPointCamera_m_flFogMaxDensity = 0x67402ebb0a7660bd, // fix
		CPointCamera_m_flFogStart = 0x8e196a0d0843cb74, // fix
		CPointCommentaryNode_m_bActive = 0x78ffe6fac57d9dbd, // fix
		CPointCommentaryNode_m_flStartTime = 0x119c811bc16df92d, // fix
		CPointCommentaryNode_m_hViewPosition = 0x85131d3a0757f1d1, // fix
		CPointCommentaryNode_m_iNodeNumber = 0x8746f310ada555a7, // fix
		CPointCommentaryNode_m_iNodeNumberMax = 0x7cf7af8553a9d26c, // fix
		CPointCommentaryNode_m_iszCommentaryFile = 0x20c64fcd5ddad6ae, // fix
		CPointCommentaryNode_m_iszCommentaryFileNoHDR = 0xec821cf3ecd8ef8, // fix
		CPointCommentaryNode_m_iszSpeakers = 0x867bf9e83c7e005b, // fix
		CPointWorldText_m_flTextSize = 0x67ba6b68eb682c5, // fix
		CPointWorldText_m_szText = 0x5b88a2b8d1b98d47, // fix
		CPointWorldText_m_textColor = 0x7d3b87eee6590353, // fix
		CPoseController_m_bInterpolationWrap = 0xf26739c7127735e, // fix
		CPoseController_m_bPoseValueParity = 0xaee835f6d6efb5e8, // fix
		CPoseController_m_chPoseIndex = 0x8b8e1db15f06e5e9, // fix
		CPoseController_m_fCycleFrequency = 0x3c1d4ffcea11f041, // fix
		CPoseController_m_fFModAmplitude = 0x84b089328485ca81, // fix
		CPoseController_m_fFModRate = 0x381573674c1d504c, // fix
		CPoseController_m_fFModTimeOffset = 0x32b4836727c9ffb8, // fix
		CPoseController_m_fInterpolationTime = 0xd40e3b351729c068, // fix
		CPoseController_m_fPoseValue = 0x1c314b5161eb4e3b, // fix
		CPoseController_m_hProps = 0xa668e5ef5cb9aea3, // fix
		CPoseController_m_nFModType = 0x831d022df63b2430, // fix
		CPostProcessController_m_bMaster = 0x1e9e8efb30b36e80, // fix
		CPostProcessController_m_flPostProcessParameters = 0x68a0c2b0e89aa274, // fix
		CPrecipitation_m_nPrecipType = 0x8cc6c9ffd68d2665, // fix
		CPropCounter_m_flDisplayValue = 0xb553cce1fefe4f78, // fix
		CPropJeep_m_bHeadlightIsOn = 0x34cb48f75b19ec1a, // fix
		CPropVehicleChoreoGeneric_m_bEnterAnimOn = 0xeb440decc5fb2e96, // fix
		CPropVehicleChoreoGeneric_m_bExitAnimOn = 0xeeffba6f3481d112, // fix
		CPropVehicleChoreoGeneric_m_bForceEyesToAttachment = 0x72211557ec5b155d, // fix
		CPropVehicleChoreoGeneric_m_hPlayer = 0x500c255dcffbfeb7, // fix
		CPropVehicleChoreoGeneric_m_vecEyeExitEndpoint = 0x180cc4f9e68302db, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_bClampEyeAngles = 0xaed5569031ff0d34, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flFOV = 0x47ab3ff3065b3fb4, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveLinear = 0x7fd4f97c401ea18f, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchCurveZero = 0x8996080f1334a74f, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchMax = 0x7805a224886aa142, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flPitchMin = 0x6b2bc1e895539221, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveLinear = 0x18122c2279fb58f3, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flRollCurveZero = 0x85b3648cb0fa9da3, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flYawMax = 0x394099a9f4482369, // fix
		CPropVehicleChoreoGeneric_m_vehicleView_flYawMin = 0xd853df21eadf4c2e, // fix
		CPropVehicleDriveable_m_bEnterAnimOn = 0x33ed9ccbb4c5477, // fix
		CPropVehicleDriveable_m_bExitAnimOn = 0x417096f1ac5c6c3b, // fix
		CPropVehicleDriveable_m_bHasGun = 0x9fae514206b8a6b1, // fix
		CPropVehicleDriveable_m_bUnableToFire = 0x96b48d84b7118784, // fix
		CPropVehicleDriveable_m_flThrottle = 0x8926fe7843223a5b, // fix
		CPropVehicleDriveable_m_hPlayer = 0x7414334fd81fd229, // fix
		CPropVehicleDriveable_m_nBoostTimeLeft = 0xf8f6f26514232019, // fix
		CPropVehicleDriveable_m_nHasBoost = 0xaaf9d8af09b0150f, // fix
		CPropVehicleDriveable_m_nRPM = 0x6b178926a9fe5bf4, // fix
		CPropVehicleDriveable_m_nScannerDisabledVehicle = 0xd09507ad36e91bd6, // fix
		CPropVehicleDriveable_m_nScannerDisabledWeapons = 0xc11cec600d916a2c, // fix
		CPropVehicleDriveable_m_nSpeed = 0x4d23d80435f49d4d, // fix
		CPropVehicleDriveable_m_vecEyeExitEndpoint = 0x64727b908a52ba3e, // fix
		CPropVehicleDriveable_m_vecGunCrosshair = 0x36b97162c9ad79d1, // fix
		CProp_Hallucination_m_bEnabled = 0x29d84e43de321083, // fix
		CProp_Hallucination_m_fRechargeTime = 0x522c87f5686dbe6c, // fix
		CProp_Hallucination_m_fVisibleTime = 0x83f02405397fb2de, // fix
		CRagdollManager_m_iCurrentMaxRagdollCount = 0x8485a92cdf8cf3fe, // fix
		CRagdollPropAttached_m_attachmentPointBoneSpace = 0x6ff1cc95a0f1b13e, // fix
		CRagdollPropAttached_m_attachmentPointRagdollSpace = 0x2e020f5b7d03adad, // fix
		CRagdollPropAttached_m_boneIndexAttached = 0x4b88fd8a5b363975, // fix
		CRagdollPropAttached_m_ragdollAttachedObjectIndex = 0xba3b8699438a461, // fix
		CRagdollProp_m_flBlendWeight = 0xb6f49b19e8c640ce, // fix
		CRagdollProp_m_hUnragdoll = 0xc9636fea621f295b, // fix
		CRagdollProp_m_nOverlaySequence = 0x8afd7f827bcc42e, // fix
		CRagdollProp_m_ragAngles_0_ = 0xdf06b42ace146b9a, // fix
		CRagdollProp_m_ragPos_0_ = 0x75bec7ffd5630a81, // fix
		CRopeKeyframe_m_RopeFlags = 0x806d448d8b19bc7b, // fix
		CRopeKeyframe_m_RopeLength = 0xb1b5a98738a475ae, // fix
		CRopeKeyframe_m_Slack = 0xb34cbaf0ddf4f5b2, // fix
		CRopeKeyframe_m_Subdiv = 0x48a4bbd5d8ff86a0, // fix
		CRopeKeyframe_m_TextureScale = 0xdba83b1a8714aca5, // fix
		CRopeKeyframe_m_Width = 0x7f06a3f05dfa7d8f, // fix
		CRopeKeyframe_m_bConstrainBetweenEndpoints = 0x2b9f8021008cfd94, // fix
		CRopeKeyframe_m_fLockedPoints = 0xbc5c13f8f13e8c03, // fix
		CRopeKeyframe_m_flScrollSpeed = 0xc3b481c3ee4d9f4c, // fix
		CRopeKeyframe_m_hEndPoint = 0x12cfde645dd936d4, // fix
		CRopeKeyframe_m_hStartPoint = 0x99b09db76606bcbd, // fix
		CRopeKeyframe_m_iDefaultRopeMaterialModelIndex = 0xd2f94fd59d8ab05b, // fix
		CRopeKeyframe_m_iEndAttachment = 0x326706894a70cd8d, // fix
		CRopeKeyframe_m_iParentAttachment = 0xf7b20e083d278010, // fix
		CRopeKeyframe_m_iRopeMaterialModelIndex = 0x2e4141f5c3d0089d, // fix
		CRopeKeyframe_m_iStartAttachment = 0x825a64a4aac21f4d, // fix
		CRopeKeyframe_m_nChangeCount = 0x2ab101cfdc18ef8a, // fix
		CRopeKeyframe_m_nMaxCPULevel = 0xc8e448268a3b1ce5, // fix
		CRopeKeyframe_m_nMaxGPULevel = 0xa56ad50e8a790550, // fix
		CRopeKeyframe_m_nMinCPULevel = 0x355b7e7fab3a6262, // fix
		CRopeKeyframe_m_nMinGPULevel = 0xa32eb304c840e837, // fix
		CRopeKeyframe_m_nSegments = 0x1e09ad1083e49917, // fix
		CRopeKeyframe_m_vecOrigin = 0xd97c4edaec3bf4f0, // fix
		CRopeKeyframe_moveparent = 0x5b6c733730cc9b22, // fix
		CSceneEntity_m_bIsPlayingBack = 0x128926092432d0f9, // fix
		CSceneEntity_m_bMultiplayer = 0xcf10c477f6f412fa, // fix
		CSceneEntity_m_bPaused = 0x2927b9f2a88ec536, // fix
		CSceneEntity_m_flForceClientTime = 0xfff7a4d2c0b352e0, // fix
		CSceneEntity_m_nSceneStringIndex = 0x1b64802dfd25c852, // fix
		CShadowControl_m_bDisableShadows = 0x1b1d8460450fb6c, // fix
		CShadowControl_m_bEnableLocalLightShadows = 0x595c082aea00dbc2, // fix
		CShadowControl_m_flShadowMaxDist = 0xb024f69d6872d24a, // fix
		CShadowControl_m_shadowColor = 0xebcbc13296a228f4, // fix
		CShadowControl_m_shadowDirection = 0xc07269b40bf10b28, // fix
		CSlideshowDisplay_m_bEnabled = 0xa3db1793e4f42506, // fix
		CSlideshowDisplay_m_bNoListRepeats = 0xed49461366a2ad67, // fix
		CSlideshowDisplay_m_chCurrentSlideLists = 0x499e1dfa8e327049, // fix
		CSlideshowDisplay_m_fMaxSlideTime = 0xbcae45cb40d0f6ef, // fix
		CSlideshowDisplay_m_fMinSlideTime = 0xa091f458fe838b40, // fix
		CSlideshowDisplay_m_iCycleType = 0xda00d9193b633bb3, // fix
		CSlideshowDisplay_m_szDisplayText = 0xdb256aada30ff254, // fix
		CSlideshowDisplay_m_szSlideshowDirectory = 0x7dbfbea642d588b, // fix
		CSmokeGrenadeProjectile_m_bDidSmokeEffect = 0x176d487b9670354e, // fix
		CSmokeGrenadeProjectile_m_nSmokeEffectTickBegin = 0x7e3859f7a3f7021b, // fix
		CSmokeStack_m_AmbientLight_m_flIntensity = 0x9b0351126abdcef2, // fix
		CSmokeStack_m_AmbientLight_m_vColor = 0xf4d703b2fee35423, // fix
		CSmokeStack_m_AmbientLight_m_vPos = 0x9a396fc47fdd8f9a, // fix
		CSmokeStack_m_DirLight_m_flIntensity = 0xa20123e000b5041a, // fix
		CSmokeStack_m_DirLight_m_vColor = 0x4f51f37d91ec5eb, // fix
		CSmokeStack_m_DirLight_m_vPos = 0x259ba63a00450eed, // fix
		CSmokeStack_m_EndSize = 0x90cd19f49b21bfe5, // fix
		CSmokeStack_m_JetLength = 0x7c54f89afa454ae8, // fix
		CSmokeStack_m_Rate = 0x75ed894135efdcb0, // fix
		CSmokeStack_m_Speed = 0x553b65e8c5b06782, // fix
		CSmokeStack_m_SpreadSpeed = 0xd7b8c2a694d51fb1, // fix
		CSmokeStack_m_StartSize = 0xf36305aa947ecae3, // fix
		CSmokeStack_m_bEmit = 0x9871745979c007f4, // fix
		CSmokeStack_m_flBaseSpread = 0x2c612777b1ef5cfa, // fix
		CSmokeStack_m_flRollSpeed = 0x9b321e6cf2b261e9, // fix
		CSmokeStack_m_flTwist = 0x303b18bc81b8456e, // fix
		CSmokeStack_m_iMaterialModel = 0x87625bd3b0f2a538, // fix
		CSmokeStack_m_vWind = 0xbd9b2312ab99d78e, // fix
		CSpatialEntity_m_bEnabled = 0xf2f1ee6e44dee9e4, // fix
		CSpatialEntity_m_flCurWeight = 0x7f4f9c102d3e822, // fix
		CSpatialEntity_m_maxFalloff = 0x588b7dca0ee5e8ae, // fix
		CSpatialEntity_m_minFalloff = 0x8439d0277e52b16d, // fix
		CSpatialEntity_m_vecOrigin = 0xab385a0552038e72, // fix
		CSpotlightEnd_m_Radius = 0x4422c86ddc4b1a93, // fix
		CSpotlightEnd_m_flLightScale = 0x50ef21f0df7dd251, // fix
		CSpriteTrail_m_flEndWidth = 0xa1bc785846ddef76, // fix
		CSpriteTrail_m_flLifeTime = 0xf419304e62d51add, // fix
		CSpriteTrail_m_flMinFadeLength = 0x510f0e274c50b6c0, // fix
		CSpriteTrail_m_flSkyboxScale = 0x193d7a917f29dce9, // fix
		CSpriteTrail_m_flStartWidth = 0x65964ba55f8a2218, // fix
		CSpriteTrail_m_flStartWidthVariance = 0x20a4d5376cc91cde, // fix
		CSpriteTrail_m_flTextureRes = 0x79d4577cadac16a4, // fix
		CSpriteTrail_m_vecSkyboxOrigin = 0x64f367a7bcd6bc54, // fix
		CSprite_m_bWorldSpaceScale = 0xd551154b3b56be69, // fix
		CSprite_m_flBrightnessTime = 0x81bf5479fe9b4b4, // fix
		CSprite_m_flFrame = 0x4a595be44d171832, // fix
		CSprite_m_flGlowProxySize = 0xba1a9f3af0e6960a, // fix
		CSprite_m_flHDRColorScale = 0x3bf8906c558516a1, // fix
		CSprite_m_flScaleTime = 0x14d51a40d029205b, // fix
		CSprite_m_flSpriteFramerate = 0x3b9682de31c6c799, // fix
		CSprite_m_flSpriteScale = 0x178c837245f1af0b, // fix
		CSprite_m_hAttachedToEntity = 0x315cf014bbe38703, // fix
		CSprite_m_nAttachment = 0xb5bd9f523a4b407e, // fix
		CSprite_m_nBrightness = 0xa7444715129beb11, // fix
		CStatueProp_m_bShatter = 0xfb7c7a6048277ab1, // fix
		CStatueProp_m_hInitBaseAnimating = 0xf4047c51f5935611, // fix
		CStatueProp_m_nShatterFlags = 0xa7e49635915bdbce, // fix
		CStatueProp_m_vShatterForce = 0xeafc6c63a8e2e108, // fix
		CStatueProp_m_vShatterPosition = 0x92bc28b2b2f28858, // fix
		CSteamJet_m_EndSize = 0x3f25466fb061e81d, // fix
		CSteamJet_m_JetLength = 0x3804dd9d33972bb7, // fix
		CSteamJet_m_Rate = 0x220523bf2dce690e, // fix
		CSteamJet_m_Speed = 0x546c752d76a36303, // fix
		CSteamJet_m_SpreadSpeed = 0xc63d2ddfc66c9ce1, // fix
		CSteamJet_m_StartSize = 0x2bd7b4f62aa88d2f, // fix
		CSteamJet_m_bEmit = 0x70a4a972795a5727, // fix
		CSteamJet_m_bFaceLeft = 0x6100e9f23bf98c53, // fix
		CSteamJet_m_flRollSpeed = 0x17a5c376372d11b5, // fix
		CSteamJet_m_nType = 0x1a961485d00ccab5, // fix
		CSteamJet_m_spawnflags = 0x953cf5141c3e642d, // fix
		CSun_m_bOn = 0xb63a59b110d1e939, // fix
		CSun_m_clrOverlay = 0xb95bcf2b8f229e10, // fix
		CSun_m_clrRender = 0xba0fb02d483aba0f, // fix
		CSun_m_nMaterial = 0x5a7babd2435e4f41, // fix
		CSun_m_nOverlayMaterial = 0xd449292989489ed9, // fix
		CSun_m_nOverlaySize = 0x985f2193f973618f, // fix
		CSun_m_nSize = 0x5737c0747df0e1c6, // fix
		CSun_m_vDirection = 0xab5686d70a25d2ce, // fix
		CSunlightShadowControl_m_LightColor = 0x5f89bea6cdac292d, // fix
		CSunlightShadowControl_m_TextureName = 0x9773a5884e9c37bd, // fix
		CSunlightShadowControl_m_bEnableShadows = 0xefb23ea66cb7d1a8, // fix
		CSunlightShadowControl_m_bEnabled = 0xa5a11d0128dd3f87, // fix
		CSunlightShadowControl_m_flColorTransitionTime = 0xf3482ebfcbaf47af, // fix
		CSunlightShadowControl_m_flFOV = 0xf6db475753842aa8, // fix
		CSunlightShadowControl_m_flNearZ = 0x5429c9aa63a47d24, // fix
		CSunlightShadowControl_m_flNorthOffset = 0xc179a31f0120c0ac, // fix
		CSunlightShadowControl_m_flSunDistance = 0x230e056abd91e30, // fix
		CSunlightShadowControl_m_shadowDirection = 0x9be848c4d2aab60e, // fix
		CSurvivalSpawnChopper_m_vecOrigin = 0x265a169ba464d77a, // fix
		CSurvivalSpawnChopper_m_vecOrigin_2_ = 0x5c0a901027dcd44, // fix
		CTEBSPDecal_m_nEntity = 0xe75ac1f00eb25741, // fix
		CTEBSPDecal_m_nIndex = 0xb1d425116829b2a8, // fix
		CTEBSPDecal_m_vecOrigin = 0x2e3fdba90e2469eb, // fix
		CTEBaseBeam_a = 0x803b117f7b583edd, // fix
		CTEBaseBeam_b = 0xe82eb88ca3a69e0c, // fix
		CTEBaseBeam_g = 0xa25a30ffb91a4f9a, // fix
		CTEBaseBeam_m_fAmplitude = 0x3ea01fae79fb1cc1, // fix
		CTEBaseBeam_m_fEndWidth = 0x3c4b29d4aa7d3e8c, // fix
		CTEBaseBeam_m_fLife = 0xbd00a224ef56c457, // fix
		CTEBaseBeam_m_fWidth = 0x7297a8e9a178b155, // fix
		CTEBaseBeam_m_nFadeLength = 0x257ce0025ad52584, // fix
		CTEBaseBeam_m_nFlags = 0x57c34090d89dd81f, // fix
		CTEBaseBeam_m_nFrameRate = 0x1e8aa9cf57143f72, // fix
		CTEBaseBeam_m_nHaloIndex = 0xb9ae5856c5e5340f, // fix
		CTEBaseBeam_m_nModelIndex = 0x7109ea13c37daf3, // fix
		CTEBaseBeam_m_nSpeed = 0x95620cf37cc572ac, // fix
		CTEBaseBeam_m_nStartFrame = 0x85e15e5a8be2e6ce, // fix
		CTEBaseBeam_r = 0xed2f917e61e34380, // fix
		CTEBeamEntPoint_m_nEndEntity = 0x78ee153250c41a3f, // fix
		CTEBeamEntPoint_m_nStartEntity = 0x4a54c1bca14ee1a5, // fix
		CTEBeamEntPoint_m_vecEndPoint = 0xcfc159a32e4cd6a2, // fix
		CTEBeamEntPoint_m_vecStartPoint = 0x52bc4b6d86c9f2f8, // fix
		CTEBeamEnts_m_nEndEntity = 0xb0032b342ef32185, // fix
		CTEBeamEnts_m_nStartEntity = 0x31956b165e961520, // fix
		CTEBeamFollow_m_iEntIndex = 0x43807652e07a59e0, // fix
		CTEBeamLaser_m_nEndEntity = 0x8f1e784b29a02eb3, // fix
		CTEBeamLaser_m_nStartEntity = 0x13899a7d38f38e3, // fix
		CTEBeamPoints_m_vecEndPoint = 0xef3f44677d7cd4a6, // fix
		CTEBeamPoints_m_vecStartPoint = 0xce1c5e22490f23fa, // fix
		CTEBeamRingPoint_m_flEndRadius = 0x191548a9d586cc41, // fix
		CTEBeamRingPoint_m_flStartRadius = 0xc3396e76749760dc, // fix
		CTEBeamRingPoint_m_vecCenter = 0xd74788730bf3dbb7, // fix
		CTEBeamRing_m_nEndEntity = 0xbf2dffa7f64ceea9, // fix
		CTEBeamRing_m_nStartEntity = 0xb86427f894358dcb, // fix
		CTEBeamSpline_m_nPoints = 0x72620b595bea37d5, // fix
		CTEBeamSpline_m_vecPoints_0_ = 0x94de1a932fc2a213, // fix
		CTEBloodSprite_a = 0x6f93df5844df1bd6, // fix
		CTEBloodSprite_b = 0x4da3a572f05cd361, // fix
		CTEBloodSprite_g = 0x2c38de7c24a00fdd, // fix
		CTEBloodSprite_m_nDropModel = 0xc87f205ccd13ee0d, // fix
		CTEBloodSprite_m_nSize = 0xfc632b094b906089, // fix
		CTEBloodSprite_m_nSprayModel = 0x2c01338d692db7a2, // fix
		CTEBloodSprite_m_vecDirection = 0x17b12508de69f0f3, // fix
		CTEBloodSprite_m_vecOrigin = 0x20494727753dd679, // fix
		CTEBloodSprite_r = 0x8830d3ff7c3195b7, // fix
		CTEBloodStream_a = 0xa3feda619969513c, // fix
		CTEBloodStream_b = 0xc838fb87d1e7bf24, // fix
		CTEBloodStream_g = 0x59e4885151b3c4b, // fix
		CTEBloodStream_m_nAmount = 0xa5259904afd4bb5d, // fix
		CTEBloodStream_m_vecDirection = 0xec0fc3851679b91e, // fix
		CTEBloodStream_r = 0xa4f778630c78c68e, // fix
		CTEBreakModel_m_angRotation_0_ = 0x3a8b6572275a7cf2, // fix
		CTEBreakModel_m_angRotation_1_ = 0xd932f42685f9aecb, // fix
		CTEBreakModel_m_angRotation_2_ = 0x4e67452c6deae601, // fix
		CTEBreakModel_m_fTime = 0xdb6c09e51b182578, // fix
		CTEBreakModel_m_nCount = 0xfc5c9c1bdcc10aa1, // fix
		CTEBreakModel_m_nFlags = 0x8b04f95763c9fc51, // fix
		CTEBreakModel_m_nModelIndex = 0x2139e6453ace89aa, // fix
		CTEBreakModel_m_nRandomization = 0xb73f0aeb75d798fe, // fix
		CTEBreakModel_m_vecOrigin = 0x18dcba67f7257262, // fix
		CTEBreakModel_m_vecSize = 0xcf9efc8bfe7dc704, // fix
		CTEBreakModel_m_vecVelocity = 0xbf62aa97cf554c6, // fix
		CTEBubbleTrail_m_fSpeed = 0xf6dfbcd6ff009b60, // fix
		CTEBubbleTrail_m_flWaterZ = 0xecdf9627a4fd2445, // fix
		CTEBubbleTrail_m_nCount = 0xbb83c242c1aa6eba, // fix
		CTEBubbleTrail_m_nModelIndex = 0xf2d924730e7dd9a7, // fix
		CTEBubbleTrail_m_vecMaxs = 0x249b422465f04af4, // fix
		CTEBubbleTrail_m_vecMins = 0x29453a1f8c5c0db6, // fix
		CTEBubbles_m_fHeight = 0xd1f8e74d52633257, // fix
		CTEBubbles_m_fSpeed = 0x64d9f1c0495a1725, // fix
		CTEBubbles_m_nCount = 0xbac6a88624252152, // fix
		CTEBubbles_m_nModelIndex = 0x28e6fc8a73c6aa02, // fix
		CTEBubbles_m_vecMaxs = 0x30f0bce4be214f41, // fix
		CTEBubbles_m_vecMins = 0x9d0eeb219837d168, // fix
		CTEClientProjectile_m_hOwner = 0xf9a7d8f651218e43, // fix
		CTEClientProjectile_m_nLifeTime = 0xed22dbb79880314b, // fix
		CTEClientProjectile_m_nModelIndex = 0x2a071755445f4481, // fix
		CTEClientProjectile_m_vecOrigin = 0x3149913f5e4f5c15, // fix
		CTEClientProjectile_m_vecVelocity = 0x93c80c78ea331f49, // fix
		CTEDecal_m_nEntity = 0x883db7234a1af072, // fix
		CTEDecal_m_nHitbox = 0x8fd2bc7c37f7ca51, // fix
		CTEDecal_m_nIndex = 0xc6629c49166b9594, // fix
		CTEDecal_m_vecOrigin = 0x8763036f43b98c78, // fix
		CTEDecal_m_vecStart = 0xcb88ba915abb2217, // fix
		CTEDust_m_flSize = 0x725ae4d54fa69206, // fix
		CTEDust_m_flSpeed = 0xf230306226cc9209, // fix
		CTEDust_m_vecDirection = 0xe14783416111dbd4, // fix
		CTEDynamicLight_b = 0x58557ce8b26f6308, // fix
		CTEDynamicLight_exponent = 0xb2a4e5de6aafd6b6, // fix
		CTEDynamicLight_g = 0x6315b8f4621236de, // fix
		CTEDynamicLight_m_fDecay = 0x96edd688265b1e13, // fix
		CTEDynamicLight_m_fRadius = 0xe1507325053f4aca, // fix
		CTEDynamicLight_m_fTime = 0x1b3805f3688ba8de, // fix
		CTEDynamicLight_m_vecOrigin = 0x42a80de57c788f2e, // fix
		CTEDynamicLight_r = 0xd99b048e5da6494c, // fix
		CTEEffectDispatch_entindex = 0x792b93e59a6f096a, // fix
		CTEEffectDispatch_m_EffectData = 0x1245cc7952461273, // fix
		CTEEffectDispatch_m_bPositionsAreRelativeToEntity = 0x9b27cff60121f71d, // fix
		CTEEffectDispatch_m_fFlags = 0x3a7828a12dbb9d2, // fix
		CTEEffectDispatch_m_flMagnitude = 0xdda4694c42d6fa09, // fix
		CTEEffectDispatch_m_flRadius = 0xe235331f7d831e60, // fix
		CTEEffectDispatch_m_flScale = 0x656776e6fe6dba00, // fix
		CTEEffectDispatch_m_iEffectName = 0x9428ffa158d1eb4b, // fix
		CTEEffectDispatch_m_nAttachmentIndex = 0xa666852cfecb9a1e, // fix
		CTEEffectDispatch_m_nColor = 0x2bcd0c168170cdcc, // fix
		CTEEffectDispatch_m_nDamageType = 0x1e7a3d2efb4aaca2, // fix
		CTEEffectDispatch_m_nHitBox = 0xb5309a5344c5dbda, // fix
		CTEEffectDispatch_m_nMaterial = 0xade4d3c370a10bf5, // fix
		CTEEffectDispatch_m_nOtherEntIndex = 0x4277434e221833b7, // fix
		CTEEffectDispatch_m_nSurfaceProp = 0xbebee4f7a7479055, // fix
		CTEEffectDispatch_m_vAngles = 0x8b5158f4adda6ce2, // fix
		CTEEffectDispatch_m_vNormal = 0x39831144abc0bf58, // fix
		CTEEffectDispatch_m_vOrigin_x = 0xeb96fd9b5bc0c0c5, // fix
		CTEEffectDispatch_m_vOrigin_y = 0x65eaafe6e624168, // fix
		CTEEffectDispatch_m_vOrigin_z = 0x24a218c7a45ba7d0, // fix
		CTEEffectDispatch_m_vStart_x = 0xb62b63930e6d6933, // fix
		CTEEffectDispatch_m_vStart_y = 0xb27984db1a4ac429, // fix
		CTEEffectDispatch_m_vStart_z = 0xeee3d23af0a5730a, // fix
		CTEEnergySplash_m_bExplosive = 0x69e470ae655b01b8, // fix
		CTEEnergySplash_m_vecDir = 0x4f48de4e46bd1173, // fix
		CTEEnergySplash_m_vecPos = 0xc8b6e54f7308a55a, // fix
		CTEExplosion_m_chMaterialType = 0x22170e462e6d6b44, // fix
		CTEExplosion_m_fScale = 0x7b98bc955f9e5532, // fix
		CTEExplosion_m_nFlags = 0xdd9a9f8721092403, // fix
		CTEExplosion_m_nFrameRate = 0x6d06f6b8f15de20c, // fix
		CTEExplosion_m_nMagnitude = 0xdf5f360edf9a6fd1, // fix
		CTEExplosion_m_nModelIndex = 0xecf2d92e71de300f, // fix
		CTEExplosion_m_nRadius = 0x68bfee7ac46db74e, // fix
		CTEExplosion_m_vecNormal = 0xefb56f7e8cfe8ba4, // fix
		CTEFireBullets_m_fInaccuracy = 0x5cf5901351bf6328, // fix
		CTEFireBullets_m_fSpread = 0x5fa19c2df21aad4f, // fix
		CTEFireBullets_m_flRecoilIndex = 0x400e1f489257a717, // fix
		CTEFireBullets_m_iMode = 0x57f4afdec43851aa, // fix
		CTEFireBullets_m_iPlayer = 0xca03f21ae012cefb, // fix
		CTEFireBullets_m_iSeed = 0x577e2cd01e5c05c5, // fix
		CTEFireBullets_m_iSoundType = 0x30ca744e23bc5e80, // fix
		CTEFireBullets_m_iWeaponID = 0x6c7eb86226eab4bb, // fix
		CTEFireBullets_m_nItemDefIndex = 0xfb15b334ce40a762, // fix
		CTEFireBullets_m_vecAngles_0_ = 0x13dfd73b387350c6, // fix
		CTEFireBullets_m_vecAngles_1_ = 0x6e39b23421afca11, // fix
		CTEFireBullets_m_vecOrigin = 0x991c59d8cbf9bf1c, // fix
		CTEFireBullets_m_weapon = 0x830059f72fc1115f, // fix
		CTEFizz_m_nCurrent = 0x173d8ba5872c506e, // fix
		CTEFizz_m_nDensity = 0xa95cdcaa8bc811c7, // fix
		CTEFizz_m_nEntity = 0xa431ffebf6ca23c, // fix
		CTEFizz_m_nModelIndex = 0xbfebb7daefe57c9e, // fix
		CTEFootprintDecal_m_chMaterialType = 0xb1679c7b23bbc814, // fix
		CTEFootprintDecal_m_nEntity = 0xf246dda610c88733, // fix
		CTEFootprintDecal_m_nIndex = 0x3c2b4869ec5f0649, // fix
		CTEFootprintDecal_m_vecDirection = 0x8ccf55828daaf800, // fix
		CTEFootprintDecal_m_vecOrigin = 0xfbfb31256922ff4d, // fix
		CTEFoundryHelpers_m_iEntity = 0xadb5296efe1ec935, // fix
		CTEGaussExplosion_m_nType = 0x3c9d0799e2c9788a, // fix
		CTEGaussExplosion_m_vecDirection = 0x645d10142cf54006, // fix
		CTEGlowSprite_m_fLife = 0x3d777d5cc3a2287, // fix
		CTEGlowSprite_m_fScale = 0x6926256a602cc134, // fix
		CTEGlowSprite_m_nBrightness = 0x1e31973ef61ea877, // fix
		CTEGlowSprite_m_nModelIndex = 0x4671c6b464b342c2, // fix
		CTEGlowSprite_m_vecOrigin = 0x6989879bb9ae38b4, // fix
		CTEImpact_m_iType = 0x9cba74b1e9a29443, // fix
		CTEImpact_m_ucFlags = 0x2da6d654b9b8c886, // fix
		CTEImpact_m_vecNormal = 0x19df801b7aeeb5f7, // fix
		CTEImpact_m_vecOrigin = 0x9952ef1953a73762, // fix
		CTEKillPlayerAttachments_m_nPlayer = 0x6a20120c63da6acc, // fix
		CTELargeFunnel_m_nModelIndex = 0x9a5f52ce5c3e556c, // fix
		CTELargeFunnel_m_nReversed = 0xac676142325a3f7, // fix
		CTEMetalSparks_m_vecDir = 0x13984836b519fad0, // fix
		CTEMetalSparks_m_vecPos = 0xc8f7ee756cf6d376, // fix
		CTEMuzzleFlash_m_flScale = 0x4eee10424b316e29, // fix
		CTEMuzzleFlash_m_nType = 0x1b771205b185a44e, // fix
		CTEMuzzleFlash_m_vecAngles = 0x361ab90c58e0950, // fix
		CTEMuzzleFlash_m_vecOrigin = 0x5362cb611f559b91, // fix
		CTEParticleSystem_m_vecOrigin_0_ = 0xc8e3db8988844462, // fix
		CTEParticleSystem_m_vecOrigin_1_ = 0x486dbc68693c8980, // fix
		CTEParticleSystem_m_vecOrigin_2_ = 0xe7e8752b28a84982, // fix
		CTEPhysicsProp_m_angRotation_0_ = 0x7cbf0194c50ebacd, // fix
		CTEPhysicsProp_m_angRotation_1_ = 0xdfda73a37ec7b0f8, // fix
		CTEPhysicsProp_m_angRotation_2_ = 0x23048c65193da0e1, // fix
		CTEPhysicsProp_m_clrRender = 0xb6fc7c21f0f2c1c3, // fix
		CTEPhysicsProp_m_nEffects = 0x1389db5321e850ff, // fix
		CTEPhysicsProp_m_nFlags = 0xccab4b3facf4879e, // fix
		CTEPhysicsProp_m_nModelIndex = 0xb2ee0db3c53edcc6, // fix
		CTEPhysicsProp_m_nSkin = 0x3efe6c91a5948b1b, // fix
		CTEPhysicsProp_m_vecOrigin = 0x86358611bdc3c303, // fix
		CTEPhysicsProp_m_vecVelocity = 0xc757609d5f43ebcb, // fix
		CTEPlantBomb_m_iPlayer = 0xb0eb1ed6c8dceab9, // fix
		CTEPlantBomb_m_option = 0x9a4dbe1ae21758ab, // fix
		CTEPlantBomb_m_vecOrigin = 0x55a14e1b03bf3215, // fix
		CTEPlayerAnimEvent_m_hPlayer = 0xfa93078637dfa9ce, // fix
		CTEPlayerAnimEvent_m_iEvent = 0x51bc2758c7ebb43, // fix
		CTEPlayerAnimEvent_m_nData = 0x9bd152e873c8034a, // fix
		CTEPlayerDecal_m_nEntity = 0x22dbbf1505ea5a14, // fix
		CTEPlayerDecal_m_nHitbox = 0xbf9485b17e75691b, // fix
		CTEPlayerDecal_m_nPlayer = 0x5245043f3ae9f27, // fix
		CTEPlayerDecal_m_vecOrigin = 0x5431b0409e71949d, // fix
		CTEPlayerDecal_m_vecRight = 0x18e72e78ccac9c8, // fix
		CTEPlayerDecal_m_vecStart = 0x70fe392316857f6c, // fix
		CTEProjectedDecal_m_angRotation = 0x4f50b93886b6f4f4, // fix
		CTEProjectedDecal_m_flDistance = 0xaf18bc205e6b70d8, // fix
		CTEProjectedDecal_m_nIndex = 0xa3f3d62b72a79e83, // fix
		CTEProjectedDecal_m_vecOrigin = 0x69cebbcd1e071c27, // fix
		CTERadioIcon_m_iAttachToClient = 0x13d90f5efc2f06a1, // fix
		CTEShatterSurface_m_flHeight = 0x2f774aa6fc4c3ea8, // fix
		CTEShatterSurface_m_flShardSize = 0x69a0124a656e0364, // fix
		CTEShatterSurface_m_flWidth = 0xb22ebbd25601f66b, // fix
		CTEShatterSurface_m_nSurfaceType = 0x9b6a4d3cc4eae4c9, // fix
		CTEShatterSurface_m_uchBackColor_0_ = 0x3d32ec2422ac306, // fix
		CTEShatterSurface_m_uchBackColor_1_ = 0xb1206d2cda285874, // fix
		CTEShatterSurface_m_uchBackColor_2_ = 0x174b7611847ca47f, // fix
		CTEShatterSurface_m_uchFrontColor_0_ = 0xc08f45eef74c1100, // fix
		CTEShatterSurface_m_uchFrontColor_1_ = 0xbe3cdaafd8f0e3dc, // fix
		CTEShatterSurface_m_uchFrontColor_2_ = 0x59484a2f61b0a760, // fix
		CTEShatterSurface_m_vecAngles = 0x24f08318d08a537c, // fix
		CTEShatterSurface_m_vecForce = 0xe1827e478bdbd254, // fix
		CTEShatterSurface_m_vecForcePos = 0x5607ac0d30e05307, // fix
		CTEShatterSurface_m_vecOrigin = 0x341660443aaefaa, // fix
		CTEShowLine_m_vecEnd = 0x85a732dc897f5f21, // fix
		CTESmoke_m_fScale = 0xaecf3187da8dc21a, // fix
		CTESmoke_m_nFrameRate = 0x967d9da3dffd3fb4, // fix
		CTESmoke_m_nModelIndex = 0xeded141269ffe256, // fix
		CTESmoke_m_vecOrigin = 0x62b70e18a10bbc82, // fix
		CTESparks_m_nMagnitude = 0x194b1e2b6c577296, // fix
		CTESparks_m_nTrailLength = 0x3589c67dd0aed560, // fix
		CTESparks_m_vecDir = 0x98bb042df86e0cf, // fix
		CTESpriteSpray_m_fNoise = 0x487faefdece4e0d8, // fix
		CTESpriteSpray_m_nCount = 0x9e47a58f634aa51, // fix
		CTESpriteSpray_m_nModelIndex = 0x393f94d8eebadf95, // fix
		CTESpriteSpray_m_nSpeed = 0x41d8b73e9ff3c63b, // fix
		CTESpriteSpray_m_vecDirection = 0xd2327d34d57dcf14, // fix
		CTESpriteSpray_m_vecOrigin = 0x850665f97f498fd8, // fix
		CTESprite_m_fScale = 0x2cd04089a6960d21, // fix
		CTESprite_m_nBrightness = 0xa11b1f3eac187c83, // fix
		CTESprite_m_nModelIndex = 0x2487d1e547546d2d, // fix
		CTESprite_m_vecOrigin = 0xeb51726e748778b6, // fix
		CTEWorldDecal_m_nIndex = 0x4a78095b44d05693, // fix
		CTEWorldDecal_m_vecOrigin = 0xf658bd987c23da50, // fix
		CTablet_m_bTabletReceptionIsBlocked = 0x2461808e3d03542e, // fix
		CTablet_m_flBootTime = 0xb1badc9c543a237d, // fix
		CTablet_m_flScanProgress = 0x69b068e540a79bac, // fix
		CTablet_m_flShowMapTime = 0x3452fa0c53a69c3d, // fix
		CTablet_m_flUpgradeExpirationTime_0_ = 0x7bfad4891758b1fa, // fix
		CTablet_m_nContractKillGridHighResIndex = 0x35635fd9005f7fec, // fix
		CTablet_m_nContractKillGridIndex = 0xb95cafca9743209d, // fix
		CTablet_m_nLastPurchaseIndex = 0x33ce730717b8d7fd, // fix
		CTablet_m_vecLocalHexFlags_0_ = 0x6c56b654c7c55da3, // fix
		CTablet_m_vecNearestMetalCratePos = 0x59a1ecdd4ac284ce, // fix
		CTablet_m_vecNotificationIds_0_ = 0x69052887a7d3360f, // fix
		CTablet_m_vecNotificationTimestamps_0_ = 0xbcaef5eb051302de, // fix
		CTablet_m_vecPlayerPositionHistory_0_ = 0x18857281440bf4e4, // fix
		CTeam_m_bSurrendered = 0x361088b51fe30413, // fix
		CTeam_m_iClanID = 0x20cefd0f628561da, // fix
		CTeam_m_iTeamNum = 0x598f2fa9096f5750, // fix
		CTeam_m_nGGLeaderEntIndex_CT = 0xed47eff57faa8088, // fix
		CTeam_m_nGGLeaderEntIndex_T = 0xe5de73625676cc1d, // fix
		CTeam_m_numMapVictories = 0x2db841fdf07b8d35, // fix
		CTeam_m_scoreFirstHalf = 0x8e6bf4cd7c09c93a, // fix
		CTeam_m_scoreOvertime = 0xfe19fe8cc4b99d92, // fix
		CTeam_m_scoreSecondHalf = 0xfa8c2a206f8df686, // fix
		CTeam_m_scoreTotal = 0x34113fa76ed1f9b, // fix
		CTeam_m_szClanTeamname = 0xd902b1804e224f24, // fix
		CTeam_m_szTeamFlagImage = 0x24ab9363902b67c4, // fix
		CTeam_m_szTeamLogoImage = 0xf22b1bf5c1f1f043, // fix
		CTeam_m_szTeamMatchStat = 0x83c9797b567abaf0, // fix
		CTeam_m_szTeamname = 0x1b5ac04a96caf291, // fix
		CTeamplayRoundBasedRulesProxy_m_TeamRespawnWaveTimes = 0xfe2f0a2d7ab692e, // fix
		CTeamplayRoundBasedRulesProxy_m_bAwaitingReadyRestart = 0xd8e3914205a5ab94, // fix
		CTeamplayRoundBasedRulesProxy_m_bInOvertime = 0x6606622c925ab465, // fix
		CTeamplayRoundBasedRulesProxy_m_bInSetup = 0x401a31b1da6ef51, // fix
		CTeamplayRoundBasedRulesProxy_m_bInWaitingForPlayers = 0x6951626a02c9b69, // fix
		CTeamplayRoundBasedRulesProxy_m_bStopWatch = 0x1f889cbe12438fb5, // fix
		CTeamplayRoundBasedRulesProxy_m_bSwitchedTeamsThisRound = 0x2bb964f831df979b, // fix
		CTeamplayRoundBasedRulesProxy_m_bTeamReady = 0xb518e985db811f15, // fix
		CTeamplayRoundBasedRulesProxy_m_flMapResetTime = 0x74c54b67ce0f583d, // fix
		CTeamplayRoundBasedRulesProxy_m_flNextRespawnWave = 0x6e0558a6841c6502, // fix
		CTeamplayRoundBasedRulesProxy_m_flRestartRoundTime = 0x3039ab05f70ba3aa, // fix
		CTeamplayRoundBasedRulesProxy_m_iRoundState = 0x8257aec3d96927b5, // fix
		CTeamplayRoundBasedRulesProxy_m_iWinningTeam = 0x315e0245959c040e, // fix
		CTesla_m_SoundName = 0xa5b9cc7e408058c, // fix
		CTesla_m_iszSpriteName = 0x2ada6c0a2c7e8903, // fix
		CTestTraceline_m_angRotation_0_ = 0x776117d766dbf107, // fix
		CTestTraceline_m_angRotation_1_ = 0x43f146dcfa7d30fb, // fix
		CTestTraceline_m_angRotation_2_ = 0x5b12862581d8ca96, // fix
		CTestTraceline_m_clrRender = 0xefe8ecc6984894e9, // fix
		CTestTraceline_m_vecOrigin = 0x5d232f1059528efd, // fix
		CTestTraceline_moveparent = 0x657d331bc77f5df4, // fix
		CTest_ProxyToggle_Networkable_m_WithProxy = 0xaec4a34b164f29a6, // fix
		CTriggerSoundOperator_m_nSoundOperator = 0xfe952738bcc9378e, // fix
		CVGuiScreen_m_fScreenFlags = 0x55f09eacc83b7f6c, // fix
		CVGuiScreen_m_flHeight = 0x4d5218948519cbf7, // fix
		CVGuiScreen_m_flWidth = 0xc854a47a4d535692, // fix
		CVGuiScreen_m_hPlayerOwner = 0xa47c44d30bd6f045, // fix
		CVGuiScreen_m_nAttachmentIndex = 0xac1c1cdc473712df, // fix
		CVGuiScreen_m_nOverlayMaterial = 0x3db6100463de932e, // fix
		CVGuiScreen_m_nPanelName = 0x53009476f2cd619, // fix
		CVoteController_m_bIsYesNoVote = 0x2a9ab7eccbac29b4, // fix
		CVoteController_m_iActiveIssueIndex = 0xb35a6ca23957009a, // fix
		CVoteController_m_iOnlyTeamToVote = 0x7305d8a314b6d7f1, // fix
		CVoteController_m_nPotentialVotes = 0xff808f47b3f89415, // fix
		CVoteController_m_nVoteOptionCount = 0xc14db084380927fc, // fix
		CWaterLODControl_m_flCheapWaterEndDistance = 0xf941f58001c2785e, // fix
		CWaterLODControl_m_flCheapWaterStartDistance = 0x627b1fe1ce844c0c, // fix
		CWeaponBaseItem_m_bRedraw = 0x300dca9d7a50e6c6, // fix
		CWeaponCSBaseGun_m_iBurstShotsRemaining = 0x334ba8ae78967fa0, // fix
		CWeaponCSBaseGun_m_zoomLevel = 0xa5a361f02977da2, // fix
		CWeaponCSBase_m_bBurstMode = 0x8869271a20309516, // fix
		CWeaponCSBase_m_bReloadVisuallyComplete = 0xc2ca19388d7d3e38, // fix
		CWeaponCSBase_m_bSilencerOn = 0x2c247064f77e460a, // fix
		CWeaponCSBase_m_fAccuracyPenalty = 0xe59404b7fffd6610, // fix
		CWeaponCSBase_m_fLastShotTime = 0x5b7cf4b76fabb6d9, // fix
		CWeaponCSBase_m_flDoneSwitchingSilencer = 0xbd750a9a30e795ac, // fix
		CWeaponCSBase_m_flPostponeFireReadyTime = 0xccba599f38b3ef3c, // fix
		CWeaponCSBase_m_flRecoilIndex = 0x198cc435a1055c8f, // fix
		CWeaponCSBase_m_hPrevOwner = 0xeac4691e129b1a92, // fix
		CWeaponCSBase_m_iIronSightMode = 0x6458f840df8101a7, // fix
		CWeaponCSBase_m_iOriginalTeamNumber = 0x164ccadd1b1b563c, // fix
		CWeaponCSBase_m_iRecoilIndex = 0x19de318720e4ad3d, // fix
		CWeaponCSBase_m_weaponMode = 0x15993d7a1334b2a7, // fix
		CWeaponM3_m_reloadState = 0x8744ea80f114bdb9, // fix
		CWeaponNOVA_m_reloadState = 0xeae6b71a493df03e, // fix
		CWeaponSawedoff_m_reloadState = 0x5d099ff1a5b4c8d8, // fix
		CWeaponShield_m_flDisplayHealth = 0x32fc0320a3bdf53a, // fix
		CWeaponTaser_m_fFireTime = 0x934d1d1dd91fa5c3, // fix
		CWeaponXM1014_m_reloadState = 0xa88e1a4ea3cdd999, // fix
		CWorldVguiText_m_bEnabled = 0x44e3115572b819f5, // fix
		CWorldVguiText_m_clrText = 0xb59d47560bae25d7, // fix
		CWorldVguiText_m_iTextPanelWidth = 0xbb1411958a68cd33, // fix
		CWorldVguiText_m_szDisplayText = 0x13b4a8a9d996682b, // fix
		CWorldVguiText_m_szDisplayTextOption = 0xe64fb605ee37950a, // fix
		CWorldVguiText_m_szFont = 0xd0b7563d455f5ee6, // fix
		CWorld_m_WorldMaxs = 0xe60477fb19c205f7, // fix
		CWorld_m_WorldMins = 0xf405bdf3cd445669, // fix
		CWorld_m_bColdWorld = 0xf5ff9d813e7c4c4f, // fix
		CWorld_m_bStartDark = 0x516276f6ac0cb64b, // fix
		CWorld_m_flMaxOccludeeArea = 0xc57aaa1585172095, // fix
		CWorld_m_flMaxPropScreenSpaceWidth = 0x5c30910aa44c25f6, // fix
		CWorld_m_flMinOccluderArea = 0x1a0d43c54a7c9a7f, // fix
		CWorld_m_flMinPropScreenSpaceWidth = 0xec6f8f04a9c7c809, // fix
		CWorld_m_flWaveHeight = 0x3b91dc9042ec3b35, // fix
		CWorld_m_iTimeOfDay = 0x30b489c7a70566, // fix
		CWorld_m_iszDetailSpriteMaterial = 0x126e51af2f4ee0, // fix
		DustTrail_m_Color = 0x9dc662f492a5c9c4, // fix
		DustTrail_m_EndSize = 0x4d1be212d06b75ad, // fix
		DustTrail_m_MaxDirectedSpeed = 0xad58d91f02bee701, // fix
		DustTrail_m_MaxSpeed = 0x822cd9aa8f037b5b, // fix
		DustTrail_m_MinDirectedSpeed = 0x49021b308ded89fa, // fix
		DustTrail_m_MinSpeed = 0x17664c1582141773, // fix
		DustTrail_m_Opacity = 0xcd6918903d065b19, // fix
		DustTrail_m_ParticleLifetime = 0x252bff61e148cde5, // fix
		DustTrail_m_SpawnRadius = 0xea2b160b7a2406eb, // fix
		DustTrail_m_SpawnRate = 0xce795cd0823f61db, // fix
		DustTrail_m_StartSize = 0xce44ebbda973dd5, // fix
		DustTrail_m_StopEmitTime = 0xb5cf9d531d0a07ca, // fix
		DustTrail_m_bEmit = 0x207facf0ea97b625, // fix
		ParticleSmokeGrenade_m_CurrentStage = 0xd42b1abb34047a9b, // fix
		ParticleSmokeGrenade_m_FadeEndTime = 0x1c31dcb537770483, // fix
		ParticleSmokeGrenade_m_FadeStartTime = 0x7bd100ca99ff7224, // fix
		ParticleSmokeGrenade_m_MaxColor = 0x3ca9123a5f603ce6, // fix
		ParticleSmokeGrenade_m_MinColor = 0xa56503e03b05608a, // fix
		ParticleSmokeGrenade_m_flSpawnTime = 0x354fd9122c36e46c, // fix
		RocketTrail_m_EndColor = 0xbef9a0e7efd94372, // fix
		RocketTrail_m_EndSize = 0x63cd4625177e6055, // fix
		RocketTrail_m_MaxSpeed = 0xdc1efda9f5920955, // fix
		RocketTrail_m_MinSpeed = 0x1facae033a1e5527, // fix
		RocketTrail_m_Opacity = 0xe69769b09128fe55, // fix
		RocketTrail_m_ParticleLifetime = 0xea648e457224487, // fix
		RocketTrail_m_SpawnRadius = 0x76ac5307fa2d346, // fix
		RocketTrail_m_SpawnRate = 0x9668b05728122b64, // fix
		RocketTrail_m_StartColor = 0xbdb3f99ebb87fc3a, // fix
		RocketTrail_m_StartSize = 0xfb3d503e86f52b82, // fix
		RocketTrail_m_StopEmitTime = 0x1af383bed80e25cd, // fix
		RocketTrail_m_bDamaged = 0xe3454e0e4d4b4cc7, // fix
		RocketTrail_m_bEmit = 0x408d97a9966acf08, // fix
		RocketTrail_m_flFlareScale = 0xb25d13abc1bd781f, // fix
		RocketTrail_m_nAttachment = 0x198248160599ad6e, // fix
		SmokeTrail_m_EndColor = 0x73f22472f9120ccf, // fix
		SmokeTrail_m_EndSize = 0x1146422c9970fb7c, // fix
		SmokeTrail_m_MaxDirectedSpeed = 0x1a2fda9a7546a6ce, // fix
		SmokeTrail_m_MaxSpeed = 0xa278d95e49cd9d90, // fix
		SmokeTrail_m_MinDirectedSpeed = 0x189e183c4e1f525d, // fix
		SmokeTrail_m_MinSpeed = 0xc49d9681d2baeafe, // fix
		SmokeTrail_m_Opacity = 0xdbd5889f6910d4d2, // fix
		SmokeTrail_m_ParticleLifetime = 0x4084819ec96b13b6, // fix
		SmokeTrail_m_SpawnRadius = 0x21863073992e73ec, // fix
		SmokeTrail_m_SpawnRate = 0xc05a9c609337963e, // fix
		SmokeTrail_m_StartColor = 0xcf0b814419565998, // fix
		SmokeTrail_m_StartSize = 0x7bfbf11f66b4f76f, // fix
		SmokeTrail_m_StopEmitTime = 0xc1860a00a1db37b, // fix
		SmokeTrail_m_bEmit = 0x57fe68186df3b78f, // fix
		SmokeTrail_m_nAttachment = 0x7f50c6d8e4917c86, // fix
		SporeExplosion_m_bDontRemove = 0x19d8aa5321d2c559, // fix
		SporeExplosion_m_bEmit = 0x58e82619351b43ea, // fix
		SporeExplosion_m_flEndSize = 0xaa3d930f2c416906, // fix
		SporeExplosion_m_flParticleLifetime = 0xe0ff7f50ae6fb81c, // fix
		SporeExplosion_m_flSpawnRadius = 0x46d0c3b0f64fc54e, // fix
		SporeExplosion_m_flSpawnRate = 0x3e3f47f93a3e8b46, // fix
		SporeExplosion_m_flStartSize = 0xf6b3333a934a2868, // fix
		SporeTrail_m_bEmit = 0x1794221d3c307c8b, // fix
		SporeTrail_m_flEndSize = 0x640a43a31e95bcf3, // fix
		SporeTrail_m_flParticleLifetime = 0xed4df615a1a80f84, // fix
		SporeTrail_m_flSpawnRadius = 0xec58d7c03914f76f, // fix
		SporeTrail_m_flSpawnRate = 0xd2dc6af7e986f5b5, // fix
		SporeTrail_m_flStartSize = 0xe37e4ee1ab291072, // fix
		SporeTrail_m_vecEndColor = 0x4482e3d5303efa73, // fix
		string_CCSPlayer_m_bWaitForNoAttack = 0xda811616ad7dedcd, // fix
		string_CCSPlayer_m_iMoveState = 0x180ea4410af59856, // fix
		string_CCSPlayer_m_bStrafing = 0xee1abc1fa5bb3711, // fix
		string_CCSPlayer_m_flVelocityModifier = 0x2d42d42cbc7a2d33, // fix
		string_CCSPlayer_m_flThirdpersonRecoil = 0xc9cad953b1441565, // fix
		string_CBaseCSGrenade_m_fThrowTime = 0x3edefe4582a7b24f, // fix
		string_CBaseCSGrenade_m_bIsHeldByPlayer = 0xcdf1ebdbc4451787, // fix
		COUNT
	};

	enum class module_names : int32_t
	{
		NONE = -1, // fix
		client, // fix
		engine, // fix
		materialsystem, // fix
		vstdlib, // fix
		vphysics, // fix
		vguimatsurface, // fix
		tier0, // fix
		vgui2, // fix
		localize, // fix
		datacache, // fix
		studiorender, // fix
		filesystem_stdio, // fix
		panorama, // fix
		gameoverlayrenderer, // fix
		server, // fix
		v8, // fix
		inputsystem, // fix
		shaderapidx9, // fix
		COUNT // fix
	}; 
}
