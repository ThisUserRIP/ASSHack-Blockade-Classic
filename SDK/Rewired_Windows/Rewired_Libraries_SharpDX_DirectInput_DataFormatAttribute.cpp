#include "Rewired_Libraries_SharpDX_DirectInput_DataFormatAttribute.h"

IL2CPP::Il2CppClass* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataFormatAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "Rewired.Libraries.SharpDX.DirectInput", "DataFormatAttribute");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataFormatAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DataFormatAttribute::_ctor(Rewired_Windows::MwHnOEVofawqfRTFpPHRuBdwHZE flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "MwHnOEVofawqfRTFpPHRuBdwHZE" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
