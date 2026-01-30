#include "zKWTVmdlLkGjYoiksgnQfoEclKeo.h"

IL2CPP::Il2CppClass* Rewired_Windows::zKWTVmdlLkGjYoiksgnQfoEclKeo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "zKWTVmdlLkGjYoiksgnQfoEclKeo");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::zKWTVmdlLkGjYoiksgnQfoEclKeo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::zKWTVmdlLkGjYoiksgnQfoEclKeo::_ctor(Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput* directInput, mscorlib::System::Guid deviceGuid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Libraries.SharpDX.DirectInput.DirectInput", "System.Guid" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)directInput;
	params[1] = (intptr_t)&deviceGuid;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
