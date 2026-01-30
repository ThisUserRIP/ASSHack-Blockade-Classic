#include "UnityEngine_UI_GraphicRaycaster.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "GraphicRaycaster");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::get_sortOrderPriority()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_sortOrderPriority");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::get_renderOrderPriority()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_renderOrderPriority");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::get_ignoreReversedGraphics()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ignoreReversedGraphics");
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
void UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::set_ignoreReversedGraphics(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ignoreReversedGraphics", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::get_blockingObjects()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_blockingObjects");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects>(*(UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::set_blockingObjects(UnityEngine_UI::UnityEngine::UI::GraphicRaycaster_BlockingObjects value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_blockingObjects", std::vector<std::string> { "UnityEngine.UI.GraphicRaycaster/BlockingObjects" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::LayerMask UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::get_blockingMask()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_blockingMask");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::LayerMask ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::LayerMask));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::LayerMask>(*(UnityEngine_CoreModule::UnityEngine::LayerMask*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::set_blockingMask(UnityEngine_CoreModule::UnityEngine::LayerMask value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_blockingMask", std::vector<std::string> { "UnityEngine.LayerMask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UIModule::UnityEngine::Canvas* UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::get_canvas()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_canvas");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UIModule::UnityEngine::Canvas*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::Raycast(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::RaycastResult>* resultAppendList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData", "System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventData;
	params[1] = (intptr_t)resultAppendList;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Camera* UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::get_eventCamera()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_eventCamera");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Camera*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::Raycast(UnityEngine_UIModule::UnityEngine::Canvas* canvas, UnityEngine_CoreModule::UnityEngine::Camera* eventCamera, UnityEngine_CoreModule::UnityEngine::Vector2 pointerPosition, mscorlib::System::Collections::Generic::IList_1<UnityEngine_UI::UnityEngine::UI::Graphic>* foundGraphics, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Graphic>* results)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Raycast", std::vector<std::string> { "UnityEngine.Canvas", "UnityEngine.Camera", "UnityEngine.Vector2", "System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>", "System.Collections.Generic.List`1<UnityEngine.UI.Graphic>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)canvas;
	params[1] = (intptr_t)eventCamera;
	params[2] = (intptr_t)&pointerPosition;
	params[3] = (intptr_t)foundGraphics;
	params[4] = (intptr_t)results;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::GraphicRaycaster::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
