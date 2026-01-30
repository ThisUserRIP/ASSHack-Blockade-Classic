#include "Rewired_Integration_UnityUI_RewiredPointerInputModule.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.Integration.UnityUI", "RewiredPointerInputModule");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultInputSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultInputSource");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*)returnValue;
}
Rewired_Core::Rewired::UI::IMouseInputSource* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultMouseInputSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultMouseInputSource");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::UI::IMouseInputSource*)returnValue;
}
Rewired_Core::Rewired::UI::ITouchInputSource* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultTouchInputSource()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_defaultTouchInputSource");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::UI::ITouchInputSource*)returnValue;
}
bool Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::IsDefaultMouse(Rewired_Core::Rewired::UI::IMouseInputSource* mouse)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefaultMouse", std::vector<std::string> { "Rewired.UI.IMouseInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mouse;
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
Rewired_Core::Rewired::UI::IMouseInputSource* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMouseInputSource(int32_t playerId, int32_t mouseIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseInputSource", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&mouseIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::UI::IMouseInputSource*)returnValue;
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::RemoveMouseInputSource(Rewired_Core::Rewired::UI::IMouseInputSource* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveMouseInputSource", std::vector<std::string> { "Rewired.UI.IMouseInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::AddMouseInputSource(Rewired_Core::Rewired::UI::IMouseInputSource* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMouseInputSource", std::vector<std::string> { "Rewired.UI.IMouseInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMouseInputSourceCount(int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMouseInputSourceCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&playerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Rewired_Core::Rewired::UI::ITouchInputSource* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchInputSource(int32_t playerId, int32_t sourceIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTouchInputSource", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&sourceIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::Rewired::UI::ITouchInputSource*)returnValue;
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::RemoveTouchInputSource(Rewired_Core::Rewired::UI::ITouchInputSource* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveTouchInputSource", std::vector<std::string> { "Rewired.UI.ITouchInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::AddTouchInputSource(Rewired_Core::Rewired::UI::ITouchInputSource* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTouchInputSource", std::vector<std::string> { "Rewired.UI.ITouchInputSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchInputSourceCount(int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTouchInputSourceCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&playerId;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::ClearMouseInputSources()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMouseInputSources");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::get_isMouseSupported()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isMouseSupported");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::IsDefaultPlayer(int32_t playerId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsDefaultPlayer", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&playerId;
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
bool Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetPointerData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData& data, bool create, Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType pointerEventType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPointerData", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "Rewired.Integration.UnityUI.PlayerPointerEventData&", "System.Boolean", "Rewired.Integration.UnityUI.PointerEventType" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&pointerIndex;
	params[2] = (intptr_t)&pointerTypeId;
	params[3] = (intptr_t)&data;
	params[4] = (intptr_t)&create;
	params[5] = (intptr_t)&pointerEventType;
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
Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::CreatePointerEventData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType pointerEventType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreatePointerEventData", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "Rewired.Integration.UnityUI.PointerEventType" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&pointerIndex;
	params[2] = (intptr_t)&pointerTypeId;
	params[3] = (intptr_t)&pointerEventType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData*)returnValue;
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::RemovePointerData(Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemovePointerData", std::vector<std::string> { "Rewired.Integration.UnityUI.PlayerPointerEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchPointerEventData(int32_t playerId, int32_t touchDeviceIndex, UnityEngine_InputLegacyModule::UnityEngine::Touch input, bool& pressed, bool& released)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTouchPointerEventData", std::vector<std::string> { "System.Int32", "System.Int32", "UnityEngine.Touch", "System.Boolean&", "System.Boolean&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&touchDeviceIndex;
	params[2] = (intptr_t)&input;
	params[3] = (intptr_t)&pressed;
	params[4] = (intptr_t)&released;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData*)returnValue;
}
Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMousePointerEventData(int32_t playerId, int32_t mouseIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMousePointerEventData", std::vector<std::string> { "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&mouseIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*)returnValue;
}
Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetLastPointerEventData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, bool ignorePointerTypeId, Assembly_CSharp::Rewired::Integration::UnityUI::PointerEventType pointerEventType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLastPointerEventData", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "Rewired.Integration.UnityUI.PointerEventType" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&pointerIndex;
	params[2] = (intptr_t)&pointerTypeId;
	params[3] = (intptr_t)&ignorePointerTypeId;
	params[4] = (intptr_t)&pointerEventType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData*)returnValue;
}
bool Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::ShouldStartDrag(UnityEngine_CoreModule::UnityEngine::Vector2 pressPos, UnityEngine_CoreModule::UnityEngine::Vector2 currentPos, float threshold, bool useDragThreshold)
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
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::ProcessMove(Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* pointerEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessMove", std::vector<std::string> { "Rewired.Integration.UnityUI.PlayerPointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pointerEvent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::ProcessDrag(Assembly_CSharp::Rewired::Integration::UnityUI::PlayerPointerEventData* pointerEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessDrag", std::vector<std::string> { "Rewired.Integration.UnityUI.PlayerPointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pointerEvent;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::IsPointerOverGameObject(int32_t pointerTypeId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPointerOverGameObject", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pointerTypeId;
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
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::ClearSelection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearSelection");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::DeselectIfSelectionChanged(UnityEngine_CoreModule::UnityEngine::GameObject* currentOverGo, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* pointerEvent)
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
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::CopyFromTo(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* from, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* to)
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
UnityEngine_UI::UnityEngine::EventSystems::PointerEventData_FramePressState Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::StateForMouseButton(int32_t playerId, int32_t mouseIndex, int32_t buttonId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StateForMouseButton", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&playerId;
	params[1] = (intptr_t)&mouseIndex;
	params[2] = (intptr_t)&buttonId;
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
void Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
