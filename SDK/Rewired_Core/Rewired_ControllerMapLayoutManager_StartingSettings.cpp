#include "Rewired_ControllerMapLayoutManager_StartingSettings.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ControllerMapLayoutManager_StartingSettings::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::ControllerMapLayoutManager::GetIl2CppClass(), "StartingSettings");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ControllerMapLayoutManager_StartingSettings::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ControllerMapLayoutManager_StartingSettings::_ctor(bool enabled, bool loadFromUserDataStore, IL2CPP::Array<Rewired_Core::buwlxqKhUllBBlfaFHEuNozwGtg*>* startingRuleSets)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Boolean", "System.Boolean", "buwlxqKhUllBBlfaFHEuNozwGtg[]" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&enabled;
	params[1] = (intptr_t)&loadFromUserDataStore;
	params[2] = (intptr_t)startingRuleSets;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
