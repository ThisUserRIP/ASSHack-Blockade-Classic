#include "UnityEngine_MonoBehaviour.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "MonoBehaviour");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool UnityEngine_CoreModule::UnityEngine::MonoBehaviour::IsInvoking()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInvoking");
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
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::CancelInvoke()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CancelInvoke");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::Invoke(mscorlib::System::String* methodName, float time)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "System.String", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)methodName;
	params[1] = (intptr_t)&time;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::InvokeRepeating(mscorlib::System::String* methodName, float time, float repeatRate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeRepeating", std::vector<std::string> { "System.String", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)methodName;
	params[1] = (intptr_t)&time;
	params[2] = (intptr_t)&repeatRate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::CancelInvoke(mscorlib::System::String* methodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CancelInvoke", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)methodName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::MonoBehaviour::IsInvoking(mscorlib::System::String* methodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInvoking", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)methodName;
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
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StartCoroutine(mscorlib::System::String* methodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartCoroutine", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)methodName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StartCoroutine(mscorlib::System::String* methodName, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartCoroutine", std::vector<std::string> { "System.String", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)methodName;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StartCoroutine(mscorlib::System::Collections::IEnumerator* routine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartCoroutine", std::vector<std::string> { "System.Collections.IEnumerator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)routine;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StartCoroutine_Auto(mscorlib::System::Collections::IEnumerator* routine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartCoroutine_Auto", std::vector<std::string> { "System.Collections.IEnumerator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)routine;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StopCoroutine(mscorlib::System::Collections::IEnumerator* routine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopCoroutine", std::vector<std::string> { "System.Collections.IEnumerator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)routine;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StopCoroutine(UnityEngine_CoreModule::UnityEngine::Coroutine* routine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopCoroutine", std::vector<std::string> { "UnityEngine.Coroutine" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)routine;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StopCoroutine(mscorlib::System::String* methodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopCoroutine", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)methodName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StopAllCoroutines()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopAllCoroutines");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::MonoBehaviour::get_useGUILayout()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_useGUILayout");
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
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::set_useGUILayout(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_useGUILayout", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::print(mscorlib::System::Object* message)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "print", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)message;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::Internal_CancelInvokeAll(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_CancelInvokeAll", std::vector<std::string> { "UnityEngine.MonoBehaviour" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)self;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::MonoBehaviour::Internal_IsInvokingAll(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_IsInvokingAll", std::vector<std::string> { "UnityEngine.MonoBehaviour" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)self;
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
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::InvokeDelayed(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self, mscorlib::System::String* methodName, float time, float repeatRate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InvokeDelayed", std::vector<std::string> { "UnityEngine.MonoBehaviour", "System.String", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)self;
	params[1] = (intptr_t)methodName;
	params[2] = (intptr_t)&time;
	params[3] = (intptr_t)&repeatRate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::CancelInvoke(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self, mscorlib::System::String* methodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CancelInvoke", std::vector<std::string> { "UnityEngine.MonoBehaviour", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)self;
	params[1] = (intptr_t)methodName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::MonoBehaviour::IsInvoking(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* self, mscorlib::System::String* methodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsInvoking", std::vector<std::string> { "UnityEngine.MonoBehaviour", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)self;
	params[1] = (intptr_t)methodName;
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
bool UnityEngine_CoreModule::UnityEngine::MonoBehaviour::IsObjectMonoBehaviour(UnityEngine_CoreModule::UnityEngine::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsObjectMonoBehaviour", std::vector<std::string> { "UnityEngine.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
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
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StartCoroutineManaged(mscorlib::System::String* methodName, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartCoroutineManaged", std::vector<std::string> { "System.String", "System.Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)methodName;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
UnityEngine_CoreModule::UnityEngine::Coroutine* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StartCoroutineManaged2(mscorlib::System::Collections::IEnumerator* enumerator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartCoroutineManaged2", std::vector<std::string> { "System.Collections.IEnumerator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)enumerator;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Coroutine*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StopCoroutineManaged(UnityEngine_CoreModule::UnityEngine::Coroutine* routine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopCoroutineManaged", std::vector<std::string> { "UnityEngine.Coroutine" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)routine;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged(mscorlib::System::Collections::IEnumerator* routine)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StopCoroutineFromEnumeratorManaged", std::vector<std::string> { "System.Collections.IEnumerator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)routine;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_CoreModule::UnityEngine::MonoBehaviour::GetScriptClassName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetScriptClassName");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::MonoBehaviour::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
