#pragma once
#include "Modules/ModuleInterface.h"
#include "Engine.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGridly, Log, Log);

class FGridlyModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
