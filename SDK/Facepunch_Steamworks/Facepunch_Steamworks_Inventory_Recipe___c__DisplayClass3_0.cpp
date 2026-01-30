#include "Facepunch_Steamworks_Inventory_Recipe___c__DisplayClass3_0.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe___c__DisplayClass3_0::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe::GetIl2CppClass(), "<>c__DisplayClass3_0");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe___c__DisplayClass3_0::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe___c__DisplayClass3_0::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe___c__DisplayClass3_0::_FromString_b__0(mscorlib::System::String* x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<FromString>b__0", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient>(*(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient*)il2cpp_object_unbox(returnValue));
}
