#include "Rewired_Demos_TouchControls1_ManipulateCube.h"

IL2CPP::Il2CppClass* Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "Rewired.Demos", "TouchControls1_ManipulateCube");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnEnable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnEnable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnDisable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnDisable");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnMoveReceivedX(Rewired_Core::Rewired::InputActionEventData data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMoveReceivedX", std::vector<std::string> { "Rewired.InputActionEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnMoveReceivedY(Rewired_Core::Rewired::InputActionEventData data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMoveReceivedY", std::vector<std::string> { "Rewired.InputActionEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnRotationReceivedX(Rewired_Core::Rewired::InputActionEventData data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnRotationReceivedX", std::vector<std::string> { "Rewired.InputActionEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnRotationReceivedY(Rewired_Core::Rewired::InputActionEventData data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnRotationReceivedY", std::vector<std::string> { "Rewired.InputActionEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnCycleColor(Rewired_Core::Rewired::InputActionEventData data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCycleColor", std::vector<std::string> { "Rewired.InputActionEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnCycleColorReverse(Rewired_Core::Rewired::InputActionEventData data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCycleColorReverse", std::vector<std::string> { "Rewired.InputActionEventData" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnMoveReceived(UnityEngine_CoreModule::UnityEngine::Vector2 move)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnMoveReceived", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&move;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnRotationReceived(UnityEngine_CoreModule::UnityEngine::Vector2 rotate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnRotationReceived", std::vector<std::string> { "UnityEngine.Vector2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rotate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnCycleColor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCycleColor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::OnCycleColorReverse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCycleColorReverse");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::Rewired::Demos::TouchControls1_ManipulateCube::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
