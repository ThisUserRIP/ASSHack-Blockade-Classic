#include "Doozy_Engine_UI_Base_UIAction.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.UI.Base", "UIAction");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::get_AnimatorEventsCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AnimatorEventsCount");
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
int32_t Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::get_GameEventsCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GameEventsCount");
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
bool Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::get_HasAnimatorEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasAnimatorEvents");
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
bool Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::get_HasEffect()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasEffect");
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
bool Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::get_HasGameEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasGameEvents");
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
bool Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::get_HasSound()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasSound");
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
bool Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::get_HasUnityEvent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_HasUnityEvent");
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
int32_t Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::get_UnityEventListenerCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UnityEventListenerCount");
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
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::AddAnimatorEvent(Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent* animatorEvent)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAnimatorEvent", std::vector<std::string> { "Doozy.Engine.Events.AnimatorEvent" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)animatorEvent;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Base::UIAction*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::AddAnimatorEvents(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent>* animatorEvents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAnimatorEvents", std::vector<std::string> { "System.Collections.Generic.List`1<Doozy.Engine.Events.AnimatorEvent>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)animatorEvents;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Base::UIAction*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::AddGameEvent(mscorlib::System::String* gameEvent, bool clearGameEventsList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddGameEvent", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameEvent;
	params[1] = (intptr_t)&clearGameEventsList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Base::UIAction*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::AddGameEvents(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* gameEvents, bool clearGameEventsList)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddGameEvents", std::vector<std::string> { "System.Collections.Generic.List`1<System.String>", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)gameEvents;
	params[1] = (intptr_t)&clearGameEventsList;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Base::UIAction*)returnValue;
}
UnityEngine_UIModule::UnityEngine::Canvas* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::GetCanvas(UnityEngine_CoreModule::UnityEngine::GameObject* source, bool refresh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCanvas", std::vector<std::string> { "UnityEngine.GameObject", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&refresh;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UIModule::UnityEngine::Canvas*)returnValue;
}
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::Invoke(UnityEngine_CoreModule::UnityEngine::GameObject* source, bool playSound, bool playEffect, bool playAnimatorEvents, bool sendGameEvents, bool invokeUnityEvent, bool invokeAction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "UnityEngine.GameObject", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)source;
	params[1] = (intptr_t)&playSound;
	params[2] = (intptr_t)&playEffect;
	params[3] = (intptr_t)&playAnimatorEvents;
	params[4] = (intptr_t)&sendGameEvents;
	params[5] = (intptr_t)&invokeUnityEvent;
	params[6] = (intptr_t)&invokeAction;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::InvokeAction(UnityEngine_CoreModule::UnityEngine::GameObject* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeAction", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::InvokeUnityEvent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeUnityEvent");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::InvokeAnimatorEvents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeAnimatorEvents");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::ExecuteEffect(UnityEngine_UIModule::UnityEngine::Canvas* canvas)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ExecuteEffect", std::vector<std::string> { "UnityEngine.Canvas" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)canvas;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::PlaySound()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PlaySound");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::Reset()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::SendGameEvents(UnityEngine_CoreModule::UnityEngine::GameObject* source)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendGameEvents", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)source;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::SetAction(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::GameObject>* action)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetAction", std::vector<std::string> { "System.Action`1<UnityEngine.GameObject>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)action;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Base::UIAction*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::SetEffect(Assembly_CSharp::Doozy::Engine::UI::Base::UIEffect* effect)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetEffect", std::vector<std::string> { "Doozy.Engine.UI.Base.UIEffect" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)effect;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Base::UIAction*)returnValue;
}
Assembly_CSharp::Doozy::Engine::UI::Base::UIAction* Assembly_CSharp::Doozy::Engine::UI::Base::UIAction::SetSoundyData(Assembly_CSharp::Doozy::Engine::Soundy::SoundyData* soundyData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSoundyData", std::vector<std::string> { "Doozy.Engine.Soundy.SoundyData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)soundyData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::UI::Base::UIAction*)returnValue;
}
