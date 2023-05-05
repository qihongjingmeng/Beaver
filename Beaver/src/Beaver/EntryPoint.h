#pragma once

#ifdef BV_PLATFORM_WINDOWS

extern bv::Application* bv::CreateApplication();

void main(int argc, char** argv) {
  auto app = bv::CreateApplication();
  app->Run();
  delete app;
}

#endif