#include "UnityEngine_StateMachineBehaviour.h"

IL2CPP::Il2CppClass* UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine", "StateMachineBehaviour");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateEnter(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateEnter", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateUpdate(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateUpdate", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateExit(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateExit", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateMove(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateMove", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateIK(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateIK", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateMachineEnter(UnityEngine_AnimationModule::UnityEngine::Animator* animator, int32_t stateMachinePathHash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateMachineEnter", std::vector<std::string> { "UnityEngine.Animator", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateMachinePathHash;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateMachineExit(UnityEngine_AnimationModule::UnityEngine::Animator* animator, int32_t stateMachinePathHash)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateMachineExit", std::vector<std::string> { "UnityEngine.Animator", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateMachinePathHash;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateEnter(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateEnter", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32", "UnityEngine.Animations.AnimatorControllerPlayable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	params[3] = (intptr_t)&controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateUpdate(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateUpdate", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32", "UnityEngine.Animations.AnimatorControllerPlayable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	params[3] = (intptr_t)&controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateExit(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateExit", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32", "UnityEngine.Animations.AnimatorControllerPlayable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	params[3] = (intptr_t)&controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateMove(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateMove", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32", "UnityEngine.Animations.AnimatorControllerPlayable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	params[3] = (intptr_t)&controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateIK(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_AnimationModule::UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateIK", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.AnimatorStateInfo", "System.Int32", "UnityEngine.Animations.AnimatorControllerPlayable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateInfo;
	params[2] = (intptr_t)&layerIndex;
	params[3] = (intptr_t)&controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateMachineEnter(UnityEngine_AnimationModule::UnityEngine::Animator* animator, int32_t stateMachinePathHash, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateMachineEnter", std::vector<std::string> { "UnityEngine.Animator", "System.Int32", "UnityEngine.Animations.AnimatorControllerPlayable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateMachinePathHash;
	params[2] = (intptr_t)&controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::OnStateMachineExit(UnityEngine_AnimationModule::UnityEngine::Animator* animator, int32_t stateMachinePathHash, UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorControllerPlayable controller)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnStateMachineExit", std::vector<std::string> { "UnityEngine.Animator", "System.Int32", "UnityEngine.Animations.AnimatorControllerPlayable" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)&stateMachinePathHash;
	params[2] = (intptr_t)&controller;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::StateMachineBehaviour::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
