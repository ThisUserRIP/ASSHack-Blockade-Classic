#include "UnityEngine_UI_LayoutUtility.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "LayoutUtility");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetMinSize(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinSize", std::vector<std::string> { "UnityEngine.RectTransform", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&axis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetPreferredSize(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreferredSize", std::vector<std::string> { "UnityEngine.RectTransform", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&axis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetFlexibleSize(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFlexibleSize", std::vector<std::string> { "UnityEngine.RectTransform", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&axis;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetMinWidth(UnityEngine_CoreModule::UnityEngine::RectTransform* rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinWidth", std::vector<std::string> { "UnityEngine.RectTransform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetPreferredWidth(UnityEngine_CoreModule::UnityEngine::RectTransform* rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreferredWidth", std::vector<std::string> { "UnityEngine.RectTransform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetFlexibleWidth(UnityEngine_CoreModule::UnityEngine::RectTransform* rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFlexibleWidth", std::vector<std::string> { "UnityEngine.RectTransform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetMinHeight(UnityEngine_CoreModule::UnityEngine::RectTransform* rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMinHeight", std::vector<std::string> { "UnityEngine.RectTransform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetPreferredHeight(UnityEngine_CoreModule::UnityEngine::RectTransform* rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreferredHeight", std::vector<std::string> { "UnityEngine.RectTransform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetFlexibleHeight(UnityEngine_CoreModule::UnityEngine::RectTransform* rect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFlexibleHeight", std::vector<std::string> { "UnityEngine.RectTransform" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetLayoutProperty(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* property, float defaultValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLayoutProperty", std::vector<std::string> { "UnityEngine.RectTransform", "System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)property;
	params[2] = (intptr_t)&defaultValue;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UI::UnityEngine::UI::LayoutUtility::GetLayoutProperty(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* property, float defaultValue, UnityEngine_UI::UnityEngine::UI::ILayoutElement& source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLayoutProperty", std::vector<std::string> { "UnityEngine.RectTransform", "System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>", "System.Single", "UnityEngine.UI.ILayoutElement&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)property;
	params[2] = (intptr_t)&defaultValue;
	params[3] = (intptr_t)&source;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
