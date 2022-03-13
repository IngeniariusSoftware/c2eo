#ifndef __UNIT_TRANSPILER__
#define __UNIT_TRANSPILER__
#include "string"
#include "set"
#include "iostream"
#include "memory_manager.h"
#include "function_manager.h"

class UnitTranspiler{
 public:
  UnitTranspiler() = default;
  MemoryManager glob{"global-ram"}, ret {"return-ram"};
  FunctionManager func_manager;
  friend std::ostream& operator <<(std::ostream& os, UnitTranspiler unit);

  std::string name;
  // Коллекция для составления списка алиасов
  std::set<std::string> used_external_objects;

  void SetPackageName(std::string package_name);
  //std::vector<EOObject>

 private:
  std::string package_name;
  std::string tmp;
  std::vector<EOObject> objects;
  void GenerateResult();


};



#endif //__UNIT_TRANSPILER__
