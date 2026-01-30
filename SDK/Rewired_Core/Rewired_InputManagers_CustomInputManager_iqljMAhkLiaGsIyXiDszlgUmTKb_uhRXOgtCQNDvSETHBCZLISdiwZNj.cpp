#include "Rewired_InputManagers_CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_uhRXOgtCQNDvSETHBCZLISdiwZNj.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_uhRXOgtCQNDvSETHBCZLISdiwZNj::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb::GetIl2CppClass(), "uhRXOgtCQNDvSETHBCZLISdiwZNj");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_uhRXOgtCQNDvSETHBCZLISdiwZNj::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_uhRXOgtCQNDvSETHBCZLISdiwZNj::_ctor(int32_t rewiredId, mscorlib::System::Nullable_1<mscorlib::System::Int64> systemId, mscorlib::System::String* systemControllerName, int32_t lastInputManagerId, int32_t buttonCount, int32_t axisCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Nullable`1<System.Int64>", "System.String", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&rewiredId;
	params[1] = (intptr_t)&systemId;
	params[2] = (intptr_t)systemControllerName;
	params[3] = (intptr_t)&lastInputManagerId;
	params[4] = (intptr_t)&buttonCount;
	params[5] = (intptr_t)&axisCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_uhRXOgtCQNDvSETHBCZLISdiwZNj::rWQapOtWfZhPThFVxOaoMWVCNCmi(Rewired_Core::Rewired::InputManagers::CustomInputManager_KFwgdyrAewbxRFhuVFIbddLITMtF* A_1, Rewired_Core::Rewired::InputManagers::CustomInputManager_iqljMAhkLiaGsIyXiDszlgUmTKb_FLfAmKtZlKTKoxgCKBfevWSvbdB A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rWQapOtWfZhPThFVxOaoMWVCNCmi");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
