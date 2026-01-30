#include "Rewired_UI_UIAnchor.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::UI::UIAnchor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.UI", "UIAnchor");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::UI::UIAnchor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::UI::UIAnchor::_ctor(float minX, float minY, float maxX, float maxY)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&minX;
	params[1] = (intptr_t)&minY;
	params[2] = (intptr_t)&maxX;
	params[3] = (intptr_t)&maxY;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::UI::UIAnchor::_ctor(UnityEngine_CoreModule::UnityEngine::Vector2 min, UnityEngine_CoreModule::UnityEngine::Vector2 max)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&min;
	params[1] = (intptr_t)&max;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_TopLeft()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopLeft");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_TopCenter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopCenter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_TopRight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopRight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_MiddleLeft()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MiddleLeft");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_MiddleCenter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MiddleCenter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_MiddleRight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MiddleRight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_BottomLeft()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BottomLeft");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_BottomCenter()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BottomCenter");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_BottomRight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BottomRight");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_TopHStretch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TopHStretch");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_MiddleHStretch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MiddleHStretch");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_BottomHStretch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_BottomHStretch");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_LeftVStretch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LeftVStretch");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_CenterVStretch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CenterVStretch");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_RightVStretch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_RightVStretch");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::UIAnchor Rewired_Core::Rewired::UI::UIAnchor::get_Stretch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Stretch");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::UI::UIAnchor ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::UI::UIAnchor));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::UI::UIAnchor>(*(Rewired_Core::Rewired::UI::UIAnchor*)il2cpp_object_unbox(returnValue));
}
