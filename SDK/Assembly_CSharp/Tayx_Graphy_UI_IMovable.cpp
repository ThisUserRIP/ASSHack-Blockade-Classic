#include "Tayx_Graphy_UI_IMovable.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Tayx::Graphy::UI::IMovable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Tayx.Graphy.UI", "IMovable");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Tayx::Graphy::UI::IMovable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Tayx::Graphy::UI::IMovable::SetPosition(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetPosition", std::vector<std::string> { "Tayx.Graphy.GraphyManager/ModulePosition" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&newModulePosition;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
