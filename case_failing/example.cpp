#include "mlir/IR/MLIRContext.h"
#include <iostream>

int main() {
  mlir::MLIRContext context;

  auto dialects = context.getAvailableDialects();

  for (auto &dialect : dialects)
  {  
      std::cout << dialect.size();
      const char * name = dialect.begin();
      std::cout << name;
  }
  return 0;
}
