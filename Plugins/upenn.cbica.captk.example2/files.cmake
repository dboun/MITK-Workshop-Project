set(SRC_CPP_FILES
  
)

set(INTERNAL_CPP_FILES
  mitkPluginActivator.cpp
  QmitkCaPTkExample2View.cpp
)

set(UI_FILES
  src/internal/QmitkCaPTkExample2Controls.ui
)

set(MOC_H_FILES
  src/internal/mitkPluginActivator.h
  src/internal/QmitkCaPTkExample2View.h
)

set(CACHED_RESOURCE_FILES
  resources/icon1.svg
  plugin.xml
)

set(QRC_FILES

)

### Don't change below

set(CPP_FILES)

foreach(file ${SRC_CPP_FILES})
  set(CPP_FILES ${CPP_FILES} src/${file})
endforeach(file ${SRC_CPP_FILES})

foreach(file ${INTERNAL_CPP_FILES})
  set(CPP_FILES ${CPP_FILES} src/internal/${file})
endforeach(file ${INTERNAL_CPP_FILES})
