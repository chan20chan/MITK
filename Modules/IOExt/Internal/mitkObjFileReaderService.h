/*============================================================================

The Medical Imaging Interaction Toolkit (MITK)

Copyright (c) German Cancer Research Center (DKFZ)
All rights reserved.

Use of this source code is governed by a 3-clause BSD license that can be
found in the LICENSE file.

============================================================================*/

#ifndef ObjFileReaderService_h
#define ObjFileReaderService_h

#include <mitkAbstractFileReader.h>
#include <mitkIOMimeTypes.h>

namespace mitk
{
  class BaseData;

  /**
  * @brief Used to read surfaces from Wavefront OBJ files.
  *
  * @ingroup IOExt
  */
  class ObjFileReaderService : public AbstractFileReader
  {
  public:
    ObjFileReaderService();
    ~ObjFileReaderService() override;

    using AbstractFileReader::Read;
    std::vector<itk::SmartPointer<BaseData>> Read() override;

    static mitk::CustomMimeType mimeType;

  private:
    ObjFileReaderService *Clone() const override;
  };

} // namespace mitk

#endif /* ObjFileReaderService_h */
