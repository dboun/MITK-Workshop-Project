#ifndef QmitkCaPTkExample2View_h
#define QmitkCaPTkExample2View_h

#include <QmitkAbstractView.h>
#include <mitkILifecycleAwarePart.h>

#include "ui_QmitkCaPTkExample2Controls.h"

class QmitkCaPTkExample2View : public QmitkAbstractView, 
                              public mitk::ILifecycleAwarePart
{
  Q_OBJECT

public:
  static const std::string VIEW_ID;

  QmitkCaPTkExample2View();
  virtual ~QmitkCaPTkExample2View();

  // GUI setup
  void CreateQtPartControl(QWidget *parent);

  // ILifecycleAwarePart interface
  void Activated();
  void Deactivated();
  void Visible();
  void Hidden();

protected slots:

  /** \brief "Do Stuff" Button clicked slot */
  void OnDoStuffButtonClicked();

protected:

  // reimplemented from QmitkAbstractView
  void OnSelectionChanged(berry::IWorkbenchPart::Pointer part, const QList<mitk::DataNode::Pointer> &nodes) override;

  // reimplemented from QmitkAbstractView
  void OnPreferencesChanged(const berry::IBerryPreferences *prefs) override;

  // reimplemented from QmitkAbstractView
  void NodeAdded(const mitk::DataNode *node) override;

  // reimplemented from QmitkAbstractView
  void NodeRemoved(const mitk::DataNode *node) override;

  void SetFocus();

  void UpdateControls();

  void InitializeListeners();

  /// \brief the Qt parent of our GUI (NOT of this object)
  QWidget *m_Parent;

  /// \brief Qt GUI file
  Ui::QmitkCaPTkExample2Controls m_Controls;
};

#endif // ! QmitkCaPTkExample2View_h