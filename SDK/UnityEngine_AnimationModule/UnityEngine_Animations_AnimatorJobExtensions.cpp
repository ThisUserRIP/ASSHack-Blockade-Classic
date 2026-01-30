#include "UnityEngine_Animations_AnimatorJobExtensions.h"

IL2CPP::Il2CppClass* UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.AnimationModule.dll", "UnityEngine.Animations", "AnimatorJobExtensions");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::BindStreamTransform(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BindStreamTransform", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)transform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle));
		return ret;
	}
	return static_cast<UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle>(*(UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle*)il2cpp_object_unbox(returnValue));
}
UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::BindSceneTransform(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BindSceneTransform", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)transform;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle));
		return ret;
	}
	return static_cast<UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle>(*(UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle*)il2cpp_object_unbox(returnValue));
}
UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, mscorlib::System::String* property)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BindSceneProperty", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform", "System.Type", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)transform;
	params[2] = (intptr_t)type;
	params[3] = (intptr_t)property;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle));
		return ret;
	}
	return static_cast<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle>(*(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle*)il2cpp_object_unbox(returnValue));
}
UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::BindSceneProperty(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, mscorlib::System::String* property, bool isObjectReference)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BindSceneProperty", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform", "System.Type", "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)transform;
	params[2] = (intptr_t)type;
	params[3] = (intptr_t)property;
	params[4] = (intptr_t)&isObjectReference;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle ret;
		std::memset(&ret, 0, sizeof(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle));
		return ret;
	}
	return static_cast<UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle>(*(UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::InternalBindStreamTransform(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_AnimationModule::UnityEngine::Animations::TransformStreamHandle& transformStreamHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalBindStreamTransform", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform", "UnityEngine.Animations.TransformStreamHandle&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)transform;
	params[2] = (intptr_t)&transformStreamHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneTransform(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, UnityEngine_AnimationModule::UnityEngine::Animations::TransformSceneHandle& transformSceneHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalBindSceneTransform", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform", "UnityEngine.Animations.TransformSceneHandle&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)transform;
	params[2] = (intptr_t)&transformSceneHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_AnimationModule::UnityEngine::Animations::AnimatorJobExtensions::InternalBindSceneProperty(UnityEngine_AnimationModule::UnityEngine::Animator* animator, UnityEngine_CoreModule::UnityEngine::Transform* transform, mscorlib::System::Type* type, mscorlib::System::String* property, bool isObjectReference, UnityEngine_AnimationModule::UnityEngine::Animations::PropertySceneHandle& propertySceneHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalBindSceneProperty", std::vector<std::string> { "UnityEngine.Animator", "UnityEngine.Transform", "System.Type", "System.String", "System.Boolean", "UnityEngine.Animations.PropertySceneHandle&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)animator;
	params[1] = (intptr_t)transform;
	params[2] = (intptr_t)type;
	params[3] = (intptr_t)property;
	params[4] = (intptr_t)&isObjectReference;
	params[5] = (intptr_t)&propertySceneHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
