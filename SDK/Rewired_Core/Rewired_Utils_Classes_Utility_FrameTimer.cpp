#include "Rewired_Utils_Classes_Utility_FrameTimer.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Classes.Utility", "FrameTimer");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::_ctor(double inLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Double" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&inLength;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::kuVkVtmjAtGgvPHxoaDdAlMeprIY()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "kuVkVtmjAtGgvPHxoaDdAlMeprIY");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::kuVkVtmjAtGgvPHxoaDdAlMeprIY(double A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "kuVkVtmjAtGgvPHxoaDdAlMeprIY");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::rzxcwQaQDJsOGhoApWnDOXVkvyqu(double A_1, double A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rzxcwQaQDJsOGhoApWnDOXVkvyqu");
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
void Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::YKZBMWjnxRgiKHTlqTUxBHLfkvNW()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YKZBMWjnxRgiKHTlqTUxBHLfkvNW");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::pVfcWanQoHDQHBwHZhIyUOAoBnB(double A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "pVfcWanQoHDQHBwHZhIyUOAoBnB");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer* Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer::rWYvcGEJCUIWpburfJiHEPzmhpX()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rWYvcGEJCUIWpburfJiHEPzmhpX");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::Utils::Classes::Utility::FrameTimer*)returnValue;
}
