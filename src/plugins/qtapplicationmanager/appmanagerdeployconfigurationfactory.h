// Copyright (C) 2019 Luxoft Sweden AB
// Copyright (C) 2018 Pelagicore AG
// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

#pragma once

#include <projectexplorer/deployconfiguration.h>

namespace AppManager {
namespace Internal {

class AppManagerDeployConfigurationFactory : public ProjectExplorer::DeployConfigurationFactory
{
public:
    AppManagerDeployConfigurationFactory();
};

} // namespace Internal
} // namespace AppManager
