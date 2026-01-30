#include "Kongregate_ItemInstanceType.h"

IL2CPP::Il2CppClass* Kartridge::Kongregate::ItemInstanceType::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Kartridge.dll", "Kongregate", "ItemInstanceType");
	return il2cppclass;
}
mscorlib::System::Type* Kartridge::Kongregate::ItemInstanceType::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
