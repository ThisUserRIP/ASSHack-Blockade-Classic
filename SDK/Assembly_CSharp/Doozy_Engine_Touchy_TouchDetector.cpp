#include "Doozy_Engine_Touchy_TouchDetector.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Doozy.Engine.Touchy", "TouchDetector");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector* Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::get_Instance()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Instance");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector*)returnValue;
}
Assembly_CSharp::Doozy::Engine::Touchy::TouchySettings* Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::get_Settings()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Settings");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Touchy::TouchySettings*)returnValue;
}
bool Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::get_ApplicationIsQuitting()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ApplicationIsQuitting");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::set_ApplicationIsQuitting(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ApplicationIsQuitting", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
float Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::get_SwipeLength()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SwipeLength");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::get_LongTapDuration()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LongTapDuration");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::get_DebugComponent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DebugComponent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::get_TouchInProgress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TouchInProgress");
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
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::set_TouchInProgress(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_TouchInProgress", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::get_CurrentTouchInfo()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentTouchInfo");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo>(*(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::Awake()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Awake");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::Update()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Update");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::OnApplicationQuit()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnApplicationQuit");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnBeginDrag", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDrag", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEndDrag", std::vector<std::string> { "UnityEngine.EventSystems.PointerEventData" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::SetDraggedObject(UnityEngine_CoreModule::UnityEngine::GameObject* target)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDraggedObject", std::vector<std::string> { "UnityEngine.GameObject" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)target;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::Initialize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Initialize");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::DetectTouch()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DetectTouch");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::UpdateCurrentTouchInfo(UnityEngine_InputLegacyModule::UnityEngine::Touch touch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateCurrentTouchInfo", std::vector<std::string> { "UnityEngine.Touch" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&touch;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::HandleSwipe(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleSwipe", std::vector<std::string> { "Doozy.Engine.Touchy.TouchInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&touchInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::HandleTap(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleTap", std::vector<std::string> { "Doozy.Engine.Touchy.TouchInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&touchInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::HandleLongTap(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo touchInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HandleLongTap", std::vector<std::string> { "Doozy.Engine.Touchy.TouchInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&touchInfo;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Vector2 Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::GetCardinalDirection(Assembly_CSharp::Doozy::Engine::Touchy::Swipe swipe)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCardinalDirection", std::vector<std::string> { "Doozy.Engine.Touchy.Swipe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&swipe;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Vector2 ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Vector2));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Vector2>(*(UnityEngine_CoreModule::UnityEngine::Vector2*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Doozy::Engine::Touchy::Swipe Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::GetSwipe(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe simpleSwipe, bool reverse)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSwipe", std::vector<std::string> { "Doozy.Engine.Touchy.SimpleSwipe", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&simpleSwipe;
	params[1] = (intptr_t)&reverse;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::Touchy::Swipe ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::Touchy::Swipe));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::Touchy::Swipe>(*(Assembly_CSharp::Doozy::Engine::Touchy::Swipe*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::GetSimpleSwipe(Assembly_CSharp::Doozy::Engine::Touchy::Swipe swipe, bool reverse)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSimpleSwipe", std::vector<std::string> { "Doozy.Engine.Touchy.Swipe", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&swipe;
	params[1] = (intptr_t)&reverse;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe>(*(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Doozy::Engine::Touchy::Swipe Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::GetSwipeDirection(UnityEngine_CoreModule::UnityEngine::Vector2 direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSwipeDirection", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&direction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::Touchy::Swipe ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::Touchy::Swipe));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::Touchy::Swipe>(*(Assembly_CSharp::Doozy::Engine::Touchy::Swipe*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::GetSimpleSwipeDirection(UnityEngine_CoreModule::UnityEngine::Vector2 direction)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSimpleSwipeDirection", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&direction;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe));
		return ret;
	}
	return static_cast<Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe>(*(Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector* Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector::AddToScene(bool selectGameObjectAfterCreation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddToScene", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&selectGameObjectAfterCreation;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::Doozy::Engine::Touchy::TouchDetector*)returnValue;
}
