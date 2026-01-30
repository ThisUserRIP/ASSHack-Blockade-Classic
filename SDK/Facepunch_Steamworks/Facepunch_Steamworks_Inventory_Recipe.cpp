#include "Facepunch_Steamworks_Inventory_Recipe.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facepunch_Steamworks::Facepunch::Steamworks::Inventory::GetIl2CppClass(), "Recipe");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe::FromString(mscorlib::System::String* part, IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition*>* definitions, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* Result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromString", std::vector<std::string> { "System.String", "Facepunch.Steamworks.Inventory/Definition[]", "Facepunch.Steamworks.Inventory/Definition" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)part;
	params[1] = (intptr_t)definitions;
	params[2] = (intptr_t)Result;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe>(*(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe*)il2cpp_object_unbox(returnValue));
}
