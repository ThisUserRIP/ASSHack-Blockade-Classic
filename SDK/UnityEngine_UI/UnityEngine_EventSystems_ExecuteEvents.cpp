#include "UnityEngine_EventSystems_ExecuteEvents.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "ExecuteEvents");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerEnterHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IPointerEnterHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerExitHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IPointerExitHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerDownHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IPointerDownHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerUpHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IPointerUpHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IPointerClickHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IPointerClickHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IInitializePotentialDragHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IInitializePotentialDragHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IBeginDragHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IBeginDragHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IDragHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IDragHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IEndDragHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IEndDragHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IDropHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IDropHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IScrollHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IScrollHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IUpdateSelectedHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IUpdateSelectedHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::ISelectHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.ISelectHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IDeselectHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IDeselectHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::IMoveHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.IMoveHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::ISubmitHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.ISubmitHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::Execute(UnityEngine_UI::UnityEngine::EventSystems::ICancelHandler* handler, UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Execute", std::vector<std::string> { "UnityEngine.EventSystems.ICancelHandler", "UnityEngine.EventSystems.BaseEventData" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)handler;
	params[1] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerEnterHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_pointerEnterHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pointerEnterHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerEnterHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerExitHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_pointerExitHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pointerExitHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerExitHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerDownHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_pointerDownHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pointerDownHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerDownHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerUpHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_pointerUpHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pointerUpHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerUpHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerClickHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_pointerClickHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_pointerClickHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IPointerClickHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IInitializePotentialDragHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_initializePotentialDrag()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_initializePotentialDrag");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IInitializePotentialDragHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IBeginDragHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_beginDragHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_beginDragHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IBeginDragHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDragHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_dragHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_dragHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDragHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IEndDragHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_endDragHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_endDragHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IEndDragHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDropHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_dropHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_dropHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDropHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IScrollHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_scrollHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_scrollHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IScrollHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IUpdateSelectedHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_updateSelectedHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_updateSelectedHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IUpdateSelectedHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ISelectHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_selectHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_selectHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ISelectHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDeselectHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_deselectHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_deselectHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IDeselectHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IMoveHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_moveHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_moveHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::IMoveHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ISubmitHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_submitHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_submitHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ISubmitHandler>*)returnValue;
}
UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ICancelHandler>* UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::get_cancelHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_cancelHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents_EventFunction_1<UnityEngine_UI::UnityEngine::EventSystems::ICancelHandler>*)returnValue;
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::GetEventChain(UnityEngine_CoreModule::UnityEngine::GameObject* root, mscorlib::System::Collections::Generic::IList_1<UnityEngine_CoreModule::UnityEngine::Transform>* eventChain)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetEventChain", std::vector<std::string> { "UnityEngine.GameObject", "System.Collections.Generic.IList`1<UnityEngine.Transform>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)root;
	params[1] = (intptr_t)eventChain;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
