#include "Kongregate_KartridgeBindings_ItemInstance.h"

IL2CPP::Il2CppClass* Kartridge::Kongregate::KartridgeBindings_ItemInstance::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Kartridge::Kongregate::KartridgeBindings::GetIl2CppClass(), "ItemInstance");
	return il2cppclass;
}
mscorlib::System::Type* Kartridge::Kongregate::KartridgeBindings_ItemInstance::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Kartridge::Kongregate::KartridgeBindings_ItemInstance::_ctor(Kartridge::Kongregate::ItemInstanceType item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Kongregate.ItemInstanceType" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
