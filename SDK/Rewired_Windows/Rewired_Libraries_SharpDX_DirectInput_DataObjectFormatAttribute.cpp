#include "Rewired_Libraries_SharpDX_DirectInput_DataObjectFormatAttribute.h"

IL2CPP::Il2CppClass* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataObjectFormatAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "Rewired.Libraries.SharpDX.DirectInput", "DataObjectFormatAttribute");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataObjectFormatAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataObjectFormatAttribute::_ctor(mscorlib::System::String* guid, Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN typeFlags, Rewired_Windows::AXdPGKEnqwjSFnNsJUeBcNFnpAN flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "agfBbckzkopIdsLHksRRPOkzsVrN", "AXdPGKEnqwjSFnNsJUeBcNFnpAN" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)guid;
	params[1] = (intptr_t)&typeFlags;
	params[2] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataObjectFormatAttribute::_ctor(mscorlib::System::String* guid, int32_t arrayCount, Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN typeFlags, Rewired_Windows::AXdPGKEnqwjSFnNsJUeBcNFnpAN flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "agfBbckzkopIdsLHksRRPOkzsVrN", "AXdPGKEnqwjSFnNsJUeBcNFnpAN" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)guid;
	params[1] = (intptr_t)&arrayCount;
	params[2] = (intptr_t)&typeFlags;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataObjectFormatAttribute::_ctor(mscorlib::System::String* guid, int32_t arrayCount, Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN typeFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Int32", "agfBbckzkopIdsLHksRRPOkzsVrN" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)guid;
	params[1] = (intptr_t)&arrayCount;
	params[2] = (intptr_t)&typeFlags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataObjectFormatAttribute::_ctor(int32_t arrayCount, Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN typeFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "agfBbckzkopIdsLHksRRPOkzsVrN" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&arrayCount;
	params[1] = (intptr_t)&typeFlags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
