#include "Rewired_Platforms_PS4_PS4InputSource_CATOejTgWmUuZEyrjfrCBvXIXiC.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_CATOejTgWmUuZEyrjfrCBvXIXiC::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Platforms::PS4::PS4InputSource::GetIl2CppClass(), "CATOejTgWmUuZEyrjfrCBvXIXiC");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_CATOejTgWmUuZEyrjfrCBvXIXiC::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_CATOejTgWmUuZEyrjfrCBvXIXiC::_ctor(mscorlib::System::String* name, int32_t playerId, int32_t unityJoystickId, int32_t handle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&playerId;
	params[2] = (intptr_t)&unityJoystickId;
	params[3] = (intptr_t)&handle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_CATOejTgWmUuZEyrjfrCBvXIXiC::UpdateElementValues()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateElementValues");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
