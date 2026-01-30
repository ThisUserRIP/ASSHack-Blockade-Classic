#include "UnityEngine_SliderHandler.h"

IL2CPP::Il2CppClass* UnityEngine_IMGUIModule::UnityEngine::SliderHandler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.IMGUIModule.dll", "UnityEngine", "SliderHandler");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_IMGUIModule::UnityEngine::SliderHandler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_IMGUIModule::UnityEngine::SliderHandler::_ctor(UnityEngine_CoreModule::UnityEngine::Rect position, float currentValue, float size, float start, float end, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb, bool horiz, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumbExtent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Rect", "System.Single", "System.Single", "System.Single", "System.Single", "UnityEngine.GUIStyle", "UnityEngine.GUIStyle", "System.Boolean", "System.Int32", "UnityEngine.GUIStyle" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&currentValue;
	params[2] = (intptr_t)&size;
	params[3] = (intptr_t)&start;
	params[4] = (intptr_t)&end;
	params[5] = (intptr_t)slider;
	params[6] = (intptr_t)thumb;
	params[7] = (intptr_t)&horiz;
	params[8] = (intptr_t)&id;
	params[9] = (intptr_t)thumbExtent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::Handle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Handle");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::OnMouseDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMouseDown");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::OnMouseDrag()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMouseDrag");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::OnMouseUp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMouseUp");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::OnRepaint()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnRepaint");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
UnityEngine_IMGUIModule::UnityEngine::EventType UnityEngine_IMGUIModule::UnityEngine::SliderHandler::CurrentEventType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CurrentEventType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_IMGUIModule::UnityEngine::EventType ret;
		std::memset(&ret, 0, sizeof(UnityEngine_IMGUIModule::UnityEngine::EventType));
		return ret;
	}
	return static_cast<UnityEngine_IMGUIModule::UnityEngine::EventType>(*(UnityEngine_IMGUIModule::UnityEngine::EventType*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_IMGUIModule::UnityEngine::SliderHandler::CurrentScrollTroughSide()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CurrentScrollTroughSide");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_IMGUIModule::UnityEngine::SliderHandler::IsEmptySlider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsEmptySlider");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_IMGUIModule::UnityEngine::SliderHandler::SupportsPageMovements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SupportsPageMovements");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::PageMovementValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PageMovementValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::PageUpMovementBound()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PageUpMovementBound");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
UnityEngine_IMGUIModule::UnityEngine::Event* UnityEngine_IMGUIModule::UnityEngine::SliderHandler::CurrentEvent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CurrentEvent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::Event*)returnValue;
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::ValueForCurrentMousePosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValueForCurrentMousePosition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::Clamp(float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clamp", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::SliderHandler::ThumbSelectionRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThumbSelectionRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_IMGUIModule::UnityEngine::SliderHandler::StartDraggingWithValue(float dragStartValue)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartDraggingWithValue", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dragStartValue;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_IMGUIModule::UnityEngine::SliderState* UnityEngine_IMGUIModule::UnityEngine::SliderHandler::SliderState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SliderState");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_IMGUIModule::UnityEngine::SliderState*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::SliderHandler::ThumbExtRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThumbExtRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::SliderHandler::ThumbRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThumbRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::SliderHandler::VerticalThumbRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "VerticalThumbRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Rect UnityEngine_IMGUIModule::UnityEngine::SliderHandler::HorizontalThumbRect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HorizontalThumbRect");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rect ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rect));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rect>(*(UnityEngine_CoreModule::UnityEngine::Rect*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::ClampedCurrentValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClampedCurrentValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::MousePosition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MousePosition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::ValuesPerPixel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ValuesPerPixel");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::ThumbSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThumbSize");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::MaxValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MaxValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_IMGUIModule::UnityEngine::SliderHandler::MinValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MinValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
