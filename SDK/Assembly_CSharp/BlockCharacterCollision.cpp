#include "BlockCharacterCollision.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BlockCharacterCollision::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "BlockCharacterCollision");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BlockCharacterCollision::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Nullable_1<Assembly_CSharp::Contact> Assembly_CSharp::BlockCharacterCollision::GetContactBlockCharacter(UnityEngine_CoreModule::UnityEngine::Vector3 blockPos, UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_PhysicsModule::UnityEngine::CharacterController* collider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetContactBlockCharacter", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3", "UnityEngine.CharacterController" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&blockPos;
	params[1] = (intptr_t)&pos;
	params[2] = (intptr_t)collider;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Nullable_1<Assembly_CSharp::Contact> ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Nullable_1<Assembly_CSharp::Contact>));
		return ret;
	}
	return static_cast<mscorlib::System::Nullable_1<Assembly_CSharp::Contact>>(*(mscorlib::System::Nullable_1<Assembly_CSharp::Contact>*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::Contact Assembly_CSharp::BlockCharacterCollision::GetClosestPoint(UnityEngine_CoreModule::UnityEngine::Vector3 blockPos, UnityEngine_CoreModule::UnityEngine::Vector3 point)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetClosestPoint", std::vector<std::string> { "UnityEngine.Vector3", "UnityEngine.Vector3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&blockPos;
	params[1] = (intptr_t)&point;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Assembly_CSharp::Contact ret;
		std::memset(&ret, 0, sizeof(Assembly_CSharp::Contact));
		return ret;
	}
	return static_cast<Assembly_CSharp::Contact>(*(Assembly_CSharp::Contact*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BlockCharacterCollision::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
