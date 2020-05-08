#include "mitkPluginActivator.h"

#include "QmitkCaPTkExample2View.h"

#include <usModuleInitialization.h>

ctkPluginContext* mitk::PluginActivator::m_Context = nullptr;

US_INITIALIZE_MODULE //("CaPTkExample2", "libupenn_cbica_captk_example2")

void mitk::PluginActivator::start(ctkPluginContext *context)
{
  BERRY_REGISTER_EXTENSION_CLASS(QmitkCaPTkExample2iew, context)

  m_Context = context;
}

void mitk::PluginActivator::stop(ctkPluginContext*)
{
}

ctkPluginContext* mitk::PluginActivator::getContext()
{
  return m_Context;
}
