﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PutStorageConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutStorageConfigurationResult::PutStorageConfigurationResult() : 
    m_storageType(StorageType::NOT_SET),
    m_disassociatedDataStorage(DisassociatedDataStorageState::NOT_SET)
{
}

PutStorageConfigurationResult::PutStorageConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_storageType(StorageType::NOT_SET),
    m_disassociatedDataStorage(DisassociatedDataStorageState::NOT_SET)
{
  *this = result;
}

PutStorageConfigurationResult& PutStorageConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("storageType"));

  }

  if(jsonValue.ValueExists("multiLayerStorage"))
  {
    m_multiLayerStorage = jsonValue.GetObject("multiLayerStorage");

  }

  if(jsonValue.ValueExists("disassociatedDataStorage"))
  {
    m_disassociatedDataStorage = DisassociatedDataStorageStateMapper::GetDisassociatedDataStorageStateForName(jsonValue.GetString("disassociatedDataStorage"));

  }

  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = jsonValue.GetObject("configurationStatus");

  }



  return *this;
}
