#include "Rewired_UI_UIPivot.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::UI::UIPivot::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.UI", "UIPivot");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::UI::UIPivot::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::UI::UIPivot::_ctor(float min, float max)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&min;
	params[1] = (intptr_t)&max;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_Core::Rewired::UI::UIPivot::op_Implicit(Rewired_Core::Rewired::UI::UIPivot x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "Rewired.UI.UIPivot" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::op_Implicit(UnityEngine_CoreModule::UnityEngine::Vector2 x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_TopLeft()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopLeft");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_TopCenter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopCenter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_TopRight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopRight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_MiddleLeft()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MiddleLeft");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_MiddleCenter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MiddleCenter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_MiddleRight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MiddleRight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_BottomLeft()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BottomLeft");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_BottomCenter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BottomCenter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIPivot Rewired_Core::Rewired::UI::UIPivot::get_BottomRight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BottomRight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIPivot ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIPivot));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIPivot>(*(Rewired_Core::Rewired::UI::UIPivot*)il2cpp_object_unbox(returnValue));
}
