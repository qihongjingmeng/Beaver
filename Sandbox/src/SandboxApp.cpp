#include <Beaver.h>


class Sandbox : public bv::Application {
 public:
  Sandbox() {}
  ~Sandbox() {}
};

bv::Application* bv::CreateApplication() {
  return new Sandbox;
}