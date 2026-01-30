#include "Rewired_ComponentControls_TouchInteractable.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::ComponentControls::TouchInteractable::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.ComponentControls", "TouchInteractable");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::ComponentControls::TouchInteractable::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::add_InteractionStateSetEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_InteractionStateSetEvent", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<Rewired.ComponentControls.TouchInteractable/InteractionStateTransitionArgs>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateSetEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_InteractionStateSetEvent", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<Rewired.ComponentControls.TouchInteractable/InteractionStateTransitionArgs>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::add_VisibilityChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_VisibilityChangedEvent", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<System.Boolean>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::remove_VisibilityChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_VisibilityChangedEvent", std::vector<std::string> { "UnityEngine.Events.UnityAction`1<System.Boolean>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToNormal(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_InteractionStateChangedToNormal", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToNormal(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_InteractionStateChangedToNormal", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToHighlighted(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_InteractionStateChangedToHighlighted", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToHighlighted(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_InteractionStateChangedToHighlighted", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToPressed(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_InteractionStateChangedToPressed", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToPressed(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_InteractionStateChangedToPressed", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::add_InteractionStateChangedToDisabled(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "add_InteractionStateChangedToDisabled", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::remove_InteractionStateChangedToDisabled(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "remove_InteractionStateChangedToDisabled", std::vector<std::string> { "UnityEngine.Events.UnityAction" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2<Rewired_Core::Rewired::UI::IVisibilityChangedHandler, mscorlib::System::Boolean>* Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_hierarchyVisibilityChangedHandlers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hierarchyVisibilityChangedHandlers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2<Rewired_Core::Rewired::UI::IVisibilityChangedHandler, mscorlib::System::Boolean>*)returnValue;
}
Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_hierarchyInteractionStateTransitionHandlers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hierarchyInteractionStateTransitionHandlers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_HierarchyEventHelper_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>*)returnValue;
}
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_interactable()
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
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_interactable(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_interactable", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_visible()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_visible");
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
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_visible(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_visible", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_hideWhenIdle()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_hideWhenIdle");
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
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_hideWhenIdle(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_hideWhenIdle", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_allowedMouseButtons()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_allowedMouseButtons");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags>(*(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_allowedMouseButtons(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_allowedMouseButtons", std::vector<std::string> { "Rewired.ComponentControls.TouchInteractable/MouseButtonFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_transitionType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_transitionType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags>(*(Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_transitionType(Rewired_Core::Rewired::ComponentControls::TouchInteractable_TransitionTypeFlags value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_transitionType", std::vector<std::string> { "Rewired.ComponentControls.TouchInteractable/TransitionTypeFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::ColorBlock Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_transitionColorTint()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_transitionColorTint");
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
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_transitionColorTint(UnityEngine_UI::UnityEngine::UI::ColorBlock value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_transitionColorTint", std::vector<std::string> { "UnityEngine.UI.ColorBlock" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::SpriteState Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_transitionSpriteState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_transitionSpriteState");
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
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_transitionSpriteState(UnityEngine_UI::UnityEngine::UI::SpriteState value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_transitionSpriteState", std::vector<std::string> { "UnityEngine.UI.SpriteState" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::AnimationTriggers* Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_transitionAnimationTriggers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_transitionAnimationTriggers");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::AnimationTriggers*)returnValue;
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_transitionAnimationTriggers(UnityEngine_UI::UnityEngine::UI::AnimationTriggers* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_transitionAnimationTriggers", std::vector<std::string> { "UnityEngine.UI.AnimationTriggers" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::Graphic* Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_targetGraphic()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_targetGraphic");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Graphic*)returnValue;
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_targetGraphic(UnityEngine_UI::UnityEngine::UI::Graphic* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_targetGraphic", std::vector<std::string> { "UnityEngine.UI.Graphic" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UI::UnityEngine::UI::Image* Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_image()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_image");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UI::UnityEngine::UI::Image*)returnValue;
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::set_image(UnityEngine_UI::UnityEngine::UI::Image* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_image", std::vector<std::string> { "UnityEngine.UI.Image" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_AnimationModule::UnityEngine::Animator* Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_animator()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_animator");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_AnimationModule::UnityEngine::Animator*)returnValue;
}
Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_interactionState()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_interactionState");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState>(*(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState*)il2cpp_object_unbox(returnValue));
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnCanvasGroupChanged()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCanvasGroupChanged");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnDidApplyAnimationProperties()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDidApplyAnimationProperties");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnValidate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnValidate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnSetProperty()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnSetProperty");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::FindEventHandlers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindEventHandlers");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::QrhSpImDqemlPrGVtExXDrAegvfz()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "QrhSpImDqemlPrGVtExXDrAegvfz");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::vyidWgTvvtvkFppuCJXcWEKrawx(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vyidWgTvvtvkFppuCJXcWEKrawx");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::rubLWkswTLaJMJqpClHtFCkJRkI(UnityEngine_CoreModule::UnityEngine::Color A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rubLWkswTLaJMJqpClHtFCkJRkI");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::odCTFrAAyNZjFjlugKcCcsScVxf(UnityEngine_CoreModule::UnityEngine::Sprite* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "odCTFrAAyNZjFjlugKcCcsScVxf");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::hMgbOIIpTSBeYgAkhHlKHmZYhdlQ(mscorlib::System::String* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "hMgbOIIpTSBeYgAkhHlKHmZYhdlQ");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::CskfctlPhTUqoQbafglMKMYOgFH(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CskfctlPhTUqoQbafglMKMYOgFH");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::IsInteractable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInteractable");
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::IsPressed()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsPressed");
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
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::StEcmAOdazdjBVdQLUNhIADbEHy(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StEcmAOdazdjBVdQLUNhIADbEHy");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::IsThisOrTouchRegionGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsThisOrTouchRegionGameObject");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::qgvhvUcJcMVmyLUhkmvVClxLgMP(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qgvhvUcJcMVmyLUhkmvVClxLgMP");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::qgvhvUcJcMVmyLUhkmvVClxLgMP(bool A_1, UnityEngine_CoreModule::UnityEngine::GameObject* A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qgvhvUcJcMVmyLUhkmvVClxLgMP");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)A_2;
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
Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState Rewired_Core::Rewired::ComponentControls::TouchInteractable::RMZvJoJJWOeMBmZYSlMHLaIeZyf(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RMZvJoJJWOeMBmZYSlMHLaIeZyf");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState ret;
		std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState));
		return ret;
	}
	return static_cast<Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState>(*(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState*)il2cpp_object_unbox(returnValue));
}
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::rsRQRBkAYGrfANKnYaReCTlhEvQ(Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionState A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "rsRQRBkAYGrfANKnYaReCTlhEvQ");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
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
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::ycozgRzaKDvfaZiVNvmyZXfNANP()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ycozgRzaKDvfaZiVNvmyZXfNANP");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::wTWyVSRUMhOESAowPotkmfxWday()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "wTWyVSRUMhOESAowPotkmfxWday");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::zQEHtkoBJdZYFoCgnVsiufzUmau(bool A_1, bool A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zQEHtkoBJdZYFoCgnVsiufzUmau");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_1;
	params[1] = (intptr_t)&A_2;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::HSQyPoafrXnwZfBKOphUBULlEBC()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HSQyPoafrXnwZfBKOphUBULlEBC");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::FTCpAHsLZSiWeeRGdJfhaiamjxh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FTCpAHsLZSiWeeRGdJfhaiamjxh");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::wBrTiliAvAcGwpCaTcbWiYYrYyr()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "wBrTiliAvAcGwpCaTcbWiYYrYyr");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::HmLeqIZjlmpKvJCGDLPUynxetOv()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HmLeqIZjlmpKvJCGDLPUynxetOv");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPointerDown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPointerUp");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPointerEnter");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnPointerExit");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnBeginDrag");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDrag");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEndDrag");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IBeginDragHandler_OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IDragHandler_OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.EventSystems.IDragHandler.OnDrag", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::UnityEngine_EventSystems_IEndDragHandler_OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnityEngine.EventSystems.IEndDragHandler.OnEndDrag", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::mOrGUZAhoXitQEhfSlOyjvjPeLmG(int32_t A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "mOrGUZAhoXitQEhfSlOyjvjPeLmG");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
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
UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_Core::Rewired::ComponentControls::TouchInteractable::HCHDrVBjqSbmVEYEFAjlaFnaupHa(int32_t A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HCHDrVBjqSbmVEYEFAjlaFnaupHa");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::xTbAecYpqAPYTJxrjDRnUxWIOXF(int32_t A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "xTbAecYpqAPYTJxrjDRnUxWIOXF");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::qFUqHutQvENSCXxlYCqVFMfdoGx(int32_t A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "qFUqHutQvENSCXxlYCqVFMfdoGx");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
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
int32_t Rewired_Core::Rewired::ComponentControls::TouchInteractable::EaJmBamiHTJAPfTKPAoNeyYGKhu(int32_t A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EaJmBamiHTJAPfTKPAoNeyYGKhu");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::YlAiDHLlNscXKmvQmFvDryhlDDV(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_0, int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YlAiDHLlNscXKmvQmFvDryhlDDV");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::eSskPHKGGZARmItaBTjJQWxudcWr(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_0, int32_t A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "eSskPHKGGZARmItaBTjJQWxudcWr");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
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
int32_t Rewired_Core::Rewired::ComponentControls::TouchInteractable::RhBJaQRAoGhVCOUZufUncRIfpeZf(int32_t A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RhBJaQRAoGhVCOUZufUncRIfpeZf");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::LfZngrmYmviivlzASSDaOEmLlCV(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_0, int32_t& A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LfZngrmYmviivlzASSDaOEmLlCV", std::vector<std::string> { "Rewired.ComponentControls.TouchInteractable/MouseButtonFlags", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::YlAiDHLlNscXKmvQmFvDryhlDDV(int32_t A_0, Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_1, UnityEngine_UI::UnityEngine::EventSystems::EventTriggerType A_2)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "YlAiDHLlNscXKmvQmFvDryhlDDV");
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&A_0;
	params[1] = (intptr_t)&A_1;
	params[2] = (intptr_t)&A_2;
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
bool Rewired_Core::Rewired::ComponentControls::TouchInteractable::FNXFuRHvCWHQnbXInVRJBXVvAWfb(Rewired_Core::Rewired::ComponentControls::TouchInteractable_MouseButtonFlags A_0)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FNXFuRHvCWHQnbXInVRJBXVvAWfb");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_0;
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
Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>* Rewired_Core::Rewired::ComponentControls::TouchInteractable::get_interactionStateTransitionHandlerDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_interactionStateTransitionHandlerDelegate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Rewired_Core::rJHfEhelMTTyXpbBWRvTDEOhMroD_EventFunction_2<Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs>*)returnValue;
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::ePfAfYLjdBDKsIJVHRhfTPHweuLx(bool A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ePfAfYLjdBDKsIJVHRhfTPHweuLx");
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::sGOcSNBqLqaCNQZKiCvuxVUCjja(Rewired_Core::Rewired::ComponentControls::TouchInteractable_IInteractionStateTransitionHandler* A_0, Rewired_Core::Rewired::ComponentControls::TouchInteractable_InteractionStateTransitionArgs* A_1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "sGOcSNBqLqaCNQZKiCvuxVUCjja");
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)A_0;
	params[1] = (intptr_t)A_1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::ComponentControls::TouchInteractable::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
