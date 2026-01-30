#include "UnityEngine_UI_Selectable.h"

IL2CPP::Il2CppClass* UnityEngine_UI::UnityEngine::UI::Selectable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UI.dll", "UnityEngine.UI", "Selectable");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UI::UnityEngine::UI::Selectable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<UnityEngine_UI::UnityEngine::UI::Selectable*>* UnityEngine_UI::UnityEngine::UI::Selectable::get_allSelectablesArray()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allSelectablesArray");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_UI::UnityEngine::UI::Selectable*>*)returnValue;
}
int32_t UnityEngine_UI::UnityEngine::UI::Selectable::get_allSelectableCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allSelectableCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Selectable>* UnityEngine_UI::UnityEngine::UI::Selectable::get_allSelectables()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allSelectables");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Selectable>*)returnValue;
}
int32_t UnityEngine_UI::UnityEngine::UI::Selectable::AllSelectablesNoAlloc(IL2CPP::Array<UnityEngine_UI::UnityEngine::UI::Selectable*>* selectables)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AllSelectablesNoAlloc", std::vector<std::string> { "UnityEngine.UI.Selectable[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)selectables;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_UI::UnityEngine::UI::Navigation UnityEngine_UI::UnityEngine::UI::Selectable::get_navigation()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_navigation");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::UI::Navigation ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::UI::Navigation));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::UI::Navigation>(*(UnityEngine_UI::UnityEngine::UI::Navigation*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::Selectable::set_navigation(UnityEngine_UI::UnityEngine::UI::Navigation value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_navigation", std::vector<std::string> { "UnityEngine.UI.Navigation" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::Selectable_Transition UnityEngine_UI::UnityEngine::UI::Selectable::get_transition()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_transition");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::UI::Selectable_Transition ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::UI::Selectable_Transition));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::UI::Selectable_Transition>(*(UnityEngine_UI::UnityEngine::UI::Selectable_Transition*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::Selectable::set_transition(UnityEngine_UI::UnityEngine::UI::Selectable_Transition value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_transition", std::vector<std::string> { "UnityEngine.UI.Selectable/Transition" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::ColorBlock UnityEngine_UI::UnityEngine::UI::Selectable::get_colors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_colors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::UI::ColorBlock ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::UI::ColorBlock));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::UI::ColorBlock>(*(UnityEngine_UI::UnityEngine::UI::ColorBlock*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::Selectable::set_colors(UnityEngine_UI::UnityEngine::UI::ColorBlock value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_colors", std::vector<std::string> { "UnityEngine.UI.ColorBlock" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::SpriteState UnityEngine_UI::UnityEngine::UI::Selectable::get_spriteState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_spriteState");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::UI::SpriteState ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::UI::SpriteState));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::UI::SpriteState>(*(UnityEngine_UI::UnityEngine::UI::SpriteState*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::Selectable::set_spriteState(UnityEngine_UI::UnityEngine::UI::SpriteState value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_spriteState", std::vector<std::string> { "UnityEngine.UI.SpriteState" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::AnimationTriggers* UnityEngine_UI::UnityEngine::UI::Selectable::get_animationTriggers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_animationTriggers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::AnimationTriggers*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::Selectable::set_animationTriggers(UnityEngine_UI::UnityEngine::UI::AnimationTriggers* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_animationTriggers", std::vector<std::string> { "UnityEngine.UI.AnimationTriggers" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::Graphic* UnityEngine_UI::UnityEngine::UI::Selectable::get_targetGraphic()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_targetGraphic");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Graphic*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::Selectable::set_targetGraphic(UnityEngine_UI::UnityEngine::UI::Graphic* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_targetGraphic", std::vector<std::string> { "UnityEngine.UI.Graphic" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::Selectable::get_interactable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_interactable");
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
void UnityEngine_UI::UnityEngine::UI::Selectable::set_interactable(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_interactable", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::Selectable::get_isPointerInside()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isPointerInside");
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
void UnityEngine_UI::UnityEngine::UI::Selectable::set_isPointerInside(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_isPointerInside", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::Selectable::get_isPointerDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isPointerDown");
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
void UnityEngine_UI::UnityEngine::UI::Selectable::set_isPointerDown(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_isPointerDown", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::Selectable::get_hasSelection()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hasSelection");
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
void UnityEngine_UI::UnityEngine::UI::Selectable::set_hasSelection(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hasSelection", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::Image* UnityEngine_UI::UnityEngine::UI::Selectable::get_image()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_image");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Image*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::Selectable::set_image(UnityEngine_UI::UnityEngine::UI::Image* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_image", std::vector<std::string> { "UnityEngine.UI.Image" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_AnimationModule::UnityEngine::Animator* UnityEngine_UI::UnityEngine::UI::Selectable::get_animator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_animator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::Animator*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::Selectable::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnCanvasGroupChanged()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCanvasGroupChanged");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::Selectable::IsInteractable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInteractable");
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
void UnityEngine_UI::UnityEngine::UI::Selectable::OnDidApplyAnimationProperties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDidApplyAnimationProperties");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnTransformParentChanged()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnTransformParentChanged");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnSetProperty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSetProperty");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState UnityEngine_UI::UnityEngine::UI::Selectable::get_currentSelectionState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_currentSelectionState");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState));
		return ret;
	}
	return static_cast<UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState>(*(UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::Selectable::InstantClearState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InstantClearState");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::DoStateTransition(UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState state, bool instant)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoStateTransition", std::vector<std::string> { "UnityEngine.UI.Selectable/SelectionState", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&state;
	params[1] = (intptr_t)&instant;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::Selectable* UnityEngine_UI::UnityEngine::UI::Selectable::FindSelectable(UnityEngine_CoreModule::UnityEngine::Vector3 dir)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSelectable", std::vector<std::string> { "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dir;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Selectable*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Vector3 UnityEngine_UI::UnityEngine::UI::Selectable::GetPointOnRectEdge(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, UnityEngine_CoreModule::UnityEngine::Vector2 dir)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPointOnRectEdge", std::vector<std::string> { "UnityEngine.RectTransform", "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rect;
	params[1] = (intptr_t)&dir;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector3 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector3));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector3>(*(UnityEngine_CoreModule::UnityEngine::Vector3*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UI::UnityEngine::UI::Selectable::Navigate(UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* eventData, UnityEngine_UI::UnityEngine::UI::Selectable* sel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Navigate", std::vector<std::string> { "UnityEngine.EventSystems.AxisEventData", "UnityEngine.UI.Selectable" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventData;
	params[1] = (intptr_t)sel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::Selectable* UnityEngine_UI::UnityEngine::UI::Selectable::FindSelectableOnLeft()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSelectableOnLeft");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Selectable*)returnValue;
}
UnityEngine_UI::UnityEngine::UI::Selectable* UnityEngine_UI::UnityEngine::UI::Selectable::FindSelectableOnRight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSelectableOnRight");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Selectable*)returnValue;
}
UnityEngine_UI::UnityEngine::UI::Selectable* UnityEngine_UI::UnityEngine::UI::Selectable::FindSelectableOnUp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSelectableOnUp");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Selectable*)returnValue;
}
UnityEngine_UI::UnityEngine::UI::Selectable* UnityEngine_UI::UnityEngine::UI::Selectable::FindSelectableOnDown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindSelectableOnDown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Selectable*)returnValue;
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnMove(UnityEngine_UI::UnityEngine::EventSystems::AxisEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMove", std::vector<std::string> { "UnityEngine.EventSystems.AxisEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::StartColorTween(UnityEngine_CoreModule::UnityEngine::Color targetColor, bool instant)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartColorTween", std::vector<std::string> { "UnityEngine.Color", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&targetColor;
	params[1] = (intptr_t)&instant;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::DoSpriteSwap(UnityEngine_CoreModule::UnityEngine::Sprite* newSprite)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DoSpriteSwap", std::vector<std::string> { "UnityEngine.Sprite" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)newSprite;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::TriggerAnimation(mscorlib::System::String* triggername)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TriggerAnimation", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)triggername;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UI::UnityEngine::UI::Selectable::IsHighlighted()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsHighlighted");
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
bool UnityEngine_UI::UnityEngine::UI::Selectable::IsPressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPressed");
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
void UnityEngine_UI::UnityEngine::UI::Selectable::EvaluateAndTransitionToSelectionState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EvaluateAndTransitionToSelectionState");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPointerDown", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPointerUp", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPointerEnter", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPointerExit", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSelect", std::vector<std::string> { "UnityEngine.EventSystems.BaseEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::OnDeselect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDeselect", std::vector<std::string> { "UnityEngine.EventSystems.BaseEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::Select()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Select");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UI::UnityEngine::UI::Selectable::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
