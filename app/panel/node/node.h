/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2019 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#ifndef NODEPANEL_H
#define NODEPANEL_H

#include "widget/nodeview/nodeview.h"
#include "widget/panel/panel.h"

/**
 * @brief A PanelWidget wrapper around a NodeView
 */
class NodePanel : public PanelWidget
{
  Q_OBJECT
public:
  NodePanel(QWidget* parent);

  void SetGraph(NodeGraph* graph);

protected:
  virtual void changeEvent(QEvent* e) override;

private:
  void Retranslate();

  NodeView* node_view_;
};

#endif // NODEPANEL_H
