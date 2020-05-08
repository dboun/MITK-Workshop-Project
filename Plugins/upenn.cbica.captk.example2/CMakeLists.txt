project(upenn_cbica_captk_example2)

include_directories(${CTK_INCLUDE_DIRS})

mitk_create_plugin(
	EXPORT_DIRECTIVE UPENN_CBICA_CAPTK_EXAMPLE2
)