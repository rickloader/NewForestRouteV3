SIMISA@@@@@@@@@@JINX0s1t______
 
shape (
	shape_header ( 00000000 00000000 )
	volumes ( 1
		vol_sphere (
			vector ( -0.2515554 -0.1045723 -10.26592 ) 10.25084
		)
	)
	shader_names ( 1
		named_shader ( BlendATexDiff )
	)
	texture_filter_names ( 1
		named_filter_mode ( MipLinear )
	)
	points ( 7
		point ( 2.002285 -0.1045723 -0.2659245 )
		point ( -2.507055 -0.1045723 -0.2951756 )
		point ( -2.505397 -0.1045723 -20.26592 )
		point ( 2.003944 -0.1045723 -20.23667 )
		point ( -0.2523854 -0.1045723 -0.28055 )
		point ( 2.003114 -0.1045723 -10.25129 )
		point ( -2.506227 -0.1045723 -10.28055 )
	)
	uv_points ( 5
		uv_point ( -0.9389 -0.3995 )
		uv_point ( -0.7473 -0.9932 )
		uv_point ( -0.9389 -0.9914865 )
		uv_point ( -0.8431 -0.9923433 )
		uv_point ( -0.7473 -0.4012133 )
	)
	normals ( 1
		vector ( -4.133068E-10 1 -6.049254E-11 )
	)
	sort_vectors ( 0
	)
	colours ( 0 )
	matrices ( 1
		matrix MAIN ( 1 0 0 0 1 0 0 0 1 0 0 0 )
	)
	images ( 1
		image ( Sleeper_Base_15.ace )
	)
	textures ( 1
		texture ( 0 0 -3 ff000000 )
	)
	light_materials ( 0 )
	light_model_cfgs ( 1
		light_model_cfg ( 00000000
			uv_ops ( 1
				uv_op_copy ( 1 0 )
			)
		)
	)
	vtx_states ( 1
		vtx_state ( 00000000 0 -5 0 00000002 )
	)
	prim_states ( 1
		prim_state ( 00000000 0
			tex_idxs ( 1 0 ) 0 0 1 0 1
		)
	)
	lod_controls ( 1
		lod_control (
			distance_levels_header ( 0 )
			distance_levels ( 1
				distance_level (
					distance_level_header (
						dlevel_selection ( 2000 )
						hierarchy ( 1 -1 )
					)
					sub_objects ( 1
						sub_object (
							sub_object_header ( 00000400 -1 -1 000001d2 000001c4
								geometry_info ( 2 1 0 6 0 0 1 0 0 0
									geometry_nodes ( 1
										geometry_node ( 1 0 0 0 0
											cullable_prims ( 1 2 6 )
										)
									)
									geometry_node_map ( 1 0 )
								)
								subobject_shaders ( 1 0 )
								subobject_light_cfgs ( 1 0 ) 0
							)
							vertices ( 4
								vertex ( 00000000 2 0 ffffffff ff000000
									vertex_uvs ( 1 0 )
								)
								vertex ( 00000000 1 0 ffffffff ff000000
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 0 0 ffffffff ff000000
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 3 0 ffffffff ff000000
									vertex_uvs ( 1 4 )
								)
							)
							vertex_sets ( 1
								vertex_set ( 0 0 4 )
							)
							primitives ( 2
								prim_state_idx ( 0 )
								indexed_trilist ( 
									vertex_idxs ( 6 0 1 2 2 3 0 )
									normal_idxs ( 2 0 3 0 3 )
									flags ( 2 00000000 00000000 )
								)
							)
						)
					)
				)
			)
		)
	)
)
