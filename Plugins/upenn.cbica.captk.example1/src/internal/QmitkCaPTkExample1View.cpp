#include "QmitkCaPTkExample1View.h"

#include <QMessageBox>


const std::string QmitkCaPTkExample1View::VIEW_ID =
    "upenn.cbica.captk.views.example1";


QmitkCaPTkExample1View::QmitkCaPTkExample1View()
{
  // ---- General setup operations ----
}

QmitkCaPTkExample1View::~QmitkCaPTkExample1View()
{

}

void QmitkCaPTkExample1View::CreateQtPartControl(QWidget *parent)
{
  // ---- Setup the basic GUI of this view ----
  m_Parent = parent;
  m_Controls.setupUi(parent);

  connect(m_Controls.pushButton_DoStuff, SIGNAL(clicked()),
    this, SLOT(OnDoStuffButtonClicked())
  );
}

void QmitkCaPTkExample1View::Activated()
{
  // Not yet implemented
}

void QmitkCaPTkExample1View::Deactivated()
{
  // Not yet implemented
}

void QmitkCaPTkExample1View::Visible()
{
  // Not yet implemented
}

void QmitkCaPTkExample1View::Hidden()
{
  // Not yet implemented
}

/************************************************************************/
/* protected slots                                                      */
/************************************************************************/

void QmitkCaPTkExample1View::OnDoStuffButtonClicked()
{
    QMessageBox msgError;
    msgError.setText("Well, now I'm not doing it.");
    msgError.setIcon(QMessageBox::Critical);
    msgError.setWindowTitle("No!");
    msgError.exec();
}

/************************************************************************/
/* protected                                                            */
/************************************************************************/

void QmitkCaPTkExample1View::OnSelectionChanged(berry::IWorkbenchPart::Pointer, const QList<mitk::DataNode::Pointer>& /*nodes*/)
{

}

void QmitkCaPTkExample1View::OnPreferencesChanged(const berry::IBerryPreferences* /*prefs*/)
{

}

void QmitkCaPTkExample1View::NodeAdded(const mitk::DataNode* /*node*/)
{

}

void QmitkCaPTkExample1View::NodeRemoved(const mitk::DataNode* /*node*/)
{

}

void QmitkCaPTkExample1View::SetFocus()
{

}

void QmitkCaPTkExample1View::UpdateControls()
{
  // Here you can hide views that are not useful and more
}

void QmitkCaPTkExample1View::InitializeListeners()
{

}