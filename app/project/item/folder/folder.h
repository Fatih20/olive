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

#ifndef FOLDER_H
#define FOLDER_H

#include "project/item/item.h"

/**
 * @brief The Folder class representing a directory in a project structure
 *
 * The Item base class already has support for children, but this functionality is disabled by default
 * (see CanHaveChildren() override). The Folder is a specific type that enables this functionality.
 */
class Folder : public Item
{
public:
  Folder();

  virtual Type type() const override;

  virtual bool CanHaveChildren() const override;

private:

};

#endif // FOLDER_H
