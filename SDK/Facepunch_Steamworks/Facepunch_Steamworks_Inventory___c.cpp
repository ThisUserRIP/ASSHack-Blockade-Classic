#include "Facepunch_Steamworks_Inventory___c.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Inventory___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facepunch_Steamworks::Facepunch::Steamworks::Inventory::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Inventory___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::Facepunch::Steamworks::Inventory___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Inventory___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* Facepunch_Steamworks::Facepunch::Steamworks::Inventory___c::_ApplyResult_b__24_0(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* oldItem, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* newItem)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<ApplyResult>b__24_0", std::vector<std::string> { "Facepunch.Steamworks.Inventory/Item", "Facepunch.Steamworks.Inventory/Item" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)oldItem;
	params[1] = (intptr_t)newItem;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*)returnValue;
}
