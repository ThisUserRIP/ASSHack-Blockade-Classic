#include "UnityEngine_AnimationCurve.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::AnimationCurve::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "AnimationCurve");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::AnimationCurve::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::Internal_Destroy(intptr_t ptr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Destroy", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ptr;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::Internal_Create(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* keys)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Create", std::vector<std::string> { "UnityEngine.Keyframe[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keys;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::AnimationCurve::Internal_Equals(intptr_t other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Equals", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
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
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
float UnityEngine_CoreModule::UnityEngine::AnimationCurve::Evaluate(float time)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Evaluate", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&time;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* UnityEngine_CoreModule::UnityEngine::AnimationCurve::get_keys()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_keys");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::set_keys(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_keys", std::vector<std::string> { "UnityEngine.Keyframe[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::AddKey(float time, float value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddKey", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&time;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::AddKey(UnityEngine_CoreModule::UnityEngine::Keyframe key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddKey", std::vector<std::string> { "UnityEngine.Keyframe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::AddKey_Internal(UnityEngine_CoreModule::UnityEngine::Keyframe key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddKey_Internal", std::vector<std::string> { "UnityEngine.Keyframe" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::MoveKey(int32_t index, UnityEngine_CoreModule::UnityEngine::Keyframe key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveKey", std::vector<std::string> { "System.Int32", "UnityEngine.Keyframe" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::RemoveKey(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveKey", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Keyframe UnityEngine_CoreModule::UnityEngine::AnimationCurve::get_Item(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Keyframe ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Keyframe));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Keyframe>(*(UnityEngine_CoreModule::UnityEngine::Keyframe*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::get_length()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_length");
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
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::SetKeys(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* keys)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetKeys", std::vector<std::string> { "UnityEngine.Keyframe[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keys;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Keyframe UnityEngine_CoreModule::UnityEngine::AnimationCurve::GetKey(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKey", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Keyframe ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Keyframe));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Keyframe>(*(UnityEngine_CoreModule::UnityEngine::Keyframe*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* UnityEngine_CoreModule::UnityEngine::AnimationCurve::GetKeys()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeys");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::SmoothTangents(int32_t index, float weight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SmoothTangents", std::vector<std::string> { "System.Int32", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&weight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::AnimationCurve* UnityEngine_CoreModule::UnityEngine::AnimationCurve::Linear(float timeStart, float valueStart, float timeEnd, float valueEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Linear", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&timeStart;
	params[1] = (intptr_t)&valueStart;
	params[2] = (intptr_t)&timeEnd;
	params[3] = (intptr_t)&valueEnd;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AnimationCurve*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::AnimationCurve* UnityEngine_CoreModule::UnityEngine::AnimationCurve::EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EaseInOut", std::vector<std::string> { "System.Single", "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&timeStart;
	params[1] = (intptr_t)&valueStart;
	params[2] = (intptr_t)&timeEnd;
	params[3] = (intptr_t)&valueEnd;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::AnimationCurve*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::WrapMode UnityEngine_CoreModule::UnityEngine::AnimationCurve::get_preWrapMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_preWrapMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::WrapMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::WrapMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::WrapMode>(*(UnityEngine_CoreModule::UnityEngine::WrapMode*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::set_preWrapMode(UnityEngine_CoreModule::UnityEngine::WrapMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_preWrapMode", std::vector<std::string> { "UnityEngine.WrapMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::WrapMode UnityEngine_CoreModule::UnityEngine::AnimationCurve::get_postWrapMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_postWrapMode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::WrapMode ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::WrapMode));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::WrapMode>(*(UnityEngine_CoreModule::UnityEngine::WrapMode*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::set_postWrapMode(UnityEngine_CoreModule::UnityEngine::WrapMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_postWrapMode", std::vector<std::string> { "UnityEngine.WrapMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::_ctor(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Keyframe>* keys)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "UnityEngine.Keyframe[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keys;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::AnimationCurve::Equals(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
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
bool UnityEngine_CoreModule::UnityEngine::AnimationCurve::Equals(UnityEngine_CoreModule::UnityEngine::AnimationCurve* other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.AnimationCurve" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)other;
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
int32_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
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
int32_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::AddKey_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Keyframe& key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddKey_Internal_Injected", std::vector<std::string> { "UnityEngine.Keyframe&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t UnityEngine_CoreModule::UnityEngine::AnimationCurve::MoveKey_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::Keyframe& key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveKey_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.Keyframe&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void UnityEngine_CoreModule::UnityEngine::AnimationCurve::GetKey_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::Keyframe& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKey_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.Keyframe&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
