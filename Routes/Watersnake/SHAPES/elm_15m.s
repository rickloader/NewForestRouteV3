SIMISA@@@@@@@@@@JINX0s1t______
 
shape (
	shape_header ( 00000000 00000000 )
	volumes ( 1
		vol_sphere (
			vector ( -0.2007737 7.292 -0.132802 ) 9.303113
		)
	)
	shader_names ( 1
		named_shader ( BlendATexDiff )
	)
	texture_filter_names ( 1
		named_filter_mode ( MipLinear )
	)
	points ( 8
		point ( -5.700774 -0.2080002 -4.260063E-02 )
		point ( -5.700774 14.792 -4.260063E-02 )
		point ( 5.299226 14.792 -4.260063E-02 )
		point ( 5.299226 -0.2080002 -4.260063E-02 )
		point ( 5.5 7.5 -5.5 )
		point ( 5.5 -7.5 -5.5 )
		point ( 5.5 -7.5 5.5 )
		point ( 5.5 7.5 5.5 )
	)
	uv_points ( 5
		uv_point ( 0 0 )
		uv_point ( -1 0 )
		uv_point ( -1 -1 )
		uv_point ( -0.2753 -1 )
		uv_point ( -0.2753 0 )
	)
	normals ( 4
		vector ( 0 0 -1 )
		vector ( 0 0 1 )
		vector ( 1 0 0 )
		vector ( -1 0 0 )
	)
	sort_vectors ( 0
	)
	colours ( 0 )
	matrices ( 2
		matrix MAIN ( 1 0 0 0 1 0 0 0 1 0 0 0 )
		matrix TRANSPARENCY ( 1 0 0 0 1 0 0 0 1 -5.481875 7.292 -0.1328025 )
	)
	images ( 1
		image ( Elm_01.ace )
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
	vtx_states ( 2
		vtx_state ( 00000000 0 -5 0 00000002 )
		vtx_state ( 00000000 1 -5 0 00000002 )
	)
	prim_states ( 2
		prim_state ( 00000000 0
			tex_idxs ( 1 0 ) 0 0 1 0 1
		)
		prim_state ( 00000000 0
			tex_idxs ( 1 0 ) 0 1 1 0 1
		)
	)
	lod_controls ( 1
		lod_control (
			distance_levels_header ( 0 )
			distance_levels ( 1
				distance_level (
					distance_level_header (
						dlevel_selection ( 2000 )
						hierarchy ( 2 -1 0 )
					)
					sub_objects ( 1
						sub_object (
							sub_object_header ( 00000400 -1 -1 000001d2 000001c4
								geometry_info ( 8 2 0 24 0 0 2 0 0 0
									geometry_nodes ( 2
										geometry_node ( 1 0 0 0 0
											cullable_prims ( 1 4 12 )
										)
										geometry_node ( 1 0 0 0 0
											cullable_prims ( 1 4 12 )
										)
									)
									geometry_node_map ( 2 0 1 )
								)
								subobject_shaders ( 1 0 )
								subobject_light_cfgs ( 1 0 ) 0
							)
							vertices ( 16
								vertex ( 00000000 0 0 ffffffff ff000000
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 1 0 ffffffff ff000000
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 2 0 ffffffff ff000000
									vertex_uvs ( 1 3 )
								)
								vertex ( 00000000 3 0 ffffffff ff000000
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 3 1 ffffffff ff000000
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 2 1 ffffffff ff000000
									vertex_uvs ( 1 3 )
								)
								vertex ( 00000000 1 1 ffffffff ff000000
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 0 1 ffffffff ff000000
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 5 2 ffffffff ff000000
									vertex_uvs ( 1 1 )
								)
								vertex ( 00000000 4 2 ffffffff ff000000
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 7 2 ffffffff ff000000
									vertex_uvs ( 1 3 )
								)
								vertex ( 00000000 6 2 ffffffff ff000000
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 6 3 ffffffff ff000000
									vertex_uvs ( 1 4 )
								)
								vertex ( 00000000 7 3 ffffffff ff000000
									vertex_uvs ( 1 3 )
								)
								vertex ( 00000000 4 3 ffffffff ff000000
									vertex_uvs ( 1 2 )
								)
								vertex ( 00000000 5 3 ffffffff ff000000
									vertex_uvs ( 1 1 )
								)
							)
							vertex_sets ( 2
								vertex_set ( 0 0 8 )
								vertex_set ( 1 8 8 )
							)
							primitives ( 4
								prim_state_idx ( 0 )
								indexed_trilist ( 
									vertex_idxs ( 12 0 1 2 0 2 3 4 5 6 4 6 7 )
									normal_idxs ( 4 0 3 0 3 1 3 1 3 )
									flags ( 4 00000000 00000000 00000000 00000000 )
								)
								prim_state_idx ( 1 )
								indexed_trilist ( 
									vertex_idxs ( 12 8 9 10 8 10 11 12 13 14 12 14 15 )
									normal_idxs ( 4 2 3 2 3 3 3 3 3 )
									flags ( 4 00000000 00000000 00000000 00000000 )
								)
							)
						)
					)
				)
			)
		)
	)
)
