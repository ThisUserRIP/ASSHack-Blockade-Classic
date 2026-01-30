#include "UnityEngine_EventSystems_PointerInputModule.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "PointerInputModule");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetPointerData(int32_t id, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData& data, bool create)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPointerData", std::vector<std::string> { "System.Int32", "UnityEngine.EventSystems.PointerEventData&", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&id;
	params[1] = (intptr_t)&data;
	params[2] = (intptr_t)&create;
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
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::RemovePointerData(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemovePointerData", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetTouchPointerEventData(UnityEngine_InputLegacyModule::UnityEngine::Touch input, bool& pressed, bool& released)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTouchPointerEventData", std::vector<std::string> { "UnityEngine.Touch", "System.Boolean&", "System.Boolean&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&input;
	params[1] = (intptr_t)&pressed;
	params[2] = (intptr_t)&released;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::PointerEventData*)returnValue;
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::CopyFromTo(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* from, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* to)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CopyFromTo", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData", "UnityEngine.EventSystems.PointerEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)from;
	params[1] = (intptr_t)to;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::StateForMouseButton(int32_t buttonId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StateForMouseButton", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&buttonId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState>(*(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMousePointerEventData");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMousePointerEventData", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule_MouseState*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::GetLastPointerEventData(int32_t id)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLastPointerEventData", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&id;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::PointerEventData*)returnValue;
}
bool UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::ShouldStartDrag(UnityEngine_CoreModule::UnityEngine::Vector2 pressPos, UnityEngine_CoreModule::UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShouldStartDrag", std::vector<std::string> { "UnityEngine.Vector2", "UnityEngine.Vector2", "System.Single", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&pressPos;
	params[1] = (intptr_t)&currentPos;
	params[2] = (intptr_t)&threshold;
	params[3] = (intptr_t)&useDragThreshold;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::ProcessMove(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* pointerEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessMove", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pointerEvent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::ProcessDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* pointerEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessDrag", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pointerEvent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::IsPointerOverGameObject(int32_t pointerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPointerOverGameObject", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pointerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::ClearSelection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearSelection");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::DeselectIfSelectionChanged(UnityEngine_CoreModule::UnityEngine::GameObject* currentOverGo, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* pointerEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DeselectIfSelectionChanged", std::vector<std::string> { "UnityEngine.GameObject", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)currentOverGo;
	params[1] = (intptr_t)pointerEvent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::PointerInputModule::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
