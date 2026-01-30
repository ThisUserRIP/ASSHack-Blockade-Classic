#include "OnBkaeQFBPHkmsyZIeMdGYIHYHo.h"

IL2CPP::Il2CppClass* Rewired_Core::OnBkaeQFBPHkmsyZIeMdGYIHYHo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "OnBkaeQFBPHkmsyZIeMdGYIHYHo");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::OnBkaeQFBPHkmsyZIeMdGYIHYHo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::OnBkaeQFBPHkmsyZIeMdGYIHYHo::_ctor(Rewired_Core::Rewired::Config::UpdateLoopSetting updateLoopSetting, Rewired_Core::Rewired::Keyboard* keyboard)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Config.UpdateLoopSetting", "Rewired.Keyboard" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&updateLoopSetting;
	params[1] = (intptr_t)keyboard;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::OnBkaeQFBPHkmsyZIeMdGYIHYHo::rzxcwQaQDJsOGhoApWnDOXVkvyqu(Rewired_Core::Rewired::UpdateLoopType A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rzxcwQaQDJsOGhoApWnDOXVkvyqu");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::OnBkaeQFBPHkmsyZIeMdGYIHYHo::FlxrubFLKGfrfcQlUMgPqkfvoNgy(Rewired_Core::Rewired::KeyboardMap* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FlxrubFLKGfrfcQlUMgPqkfvoNgy");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::OnBkaeQFBPHkmsyZIeMdGYIHYHo::gLsmbwCYRCcqMFlBRGIfXKnZuda(Rewired_Core::Rewired::KeyboardKeyCode A_1, Rewired_Core::Rewired::ModifierKeyFlags A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "gLsmbwCYRCcqMFlBRGIfXKnZuda");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
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
void Rewired_Core::OnBkaeQFBPHkmsyZIeMdGYIHYHo::RVmVHnmrefqJCLIeZpYvEzXemxN()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RVmVHnmrefqJCLIeZpYvEzXemxN");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
