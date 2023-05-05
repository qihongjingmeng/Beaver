#pragma once

#include "Core.h"

namespace bv {
class BV_API Application {
 public:
  Application();

  virtual ~Application();
  void Run();
};

// To be defined in CLIENT
Application* CreateApplication();
}  // namespace bv
