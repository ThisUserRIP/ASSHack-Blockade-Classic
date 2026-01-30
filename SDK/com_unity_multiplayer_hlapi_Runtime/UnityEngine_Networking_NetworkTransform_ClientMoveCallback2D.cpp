#include "UnityEngine_Networking_NetworkTransform_ClientMoveCallback2D.h"

IL2CPP::Il2CppClass* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform::GetIl2CppClass(), "ClientMoveCallback2D");
	return il2cppclass;
}
mscorlib::System::Type* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D::_ctor(mscorlib::System::Object* object, intptr_t method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Object", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)object;
	params[1] = (intptr_t)&method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D::Invoke(UnityEngine_CoreModule::UnityEngine::Vector2& position, UnityEngine_CoreModule::UnityEngine::Vector2& velocity, float& rotation)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Invoke", std::vector<std::string> { "UnityEngine.Vector2&", "UnityEngine.Vector2&", "System.Single&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&velocity;
	params[2] = (intptr_t)&rotation;
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
mscorlib::System::IAsyncResult* com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D::BeginInvoke(UnityEngine_CoreModule::UnityEngine::Vector2& position, UnityEngine_CoreModule::UnityEngine::Vector2& velocity, float& rotation, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginInvoke", std::vector<std::string> { "UnityEngine.Vector2&", "UnityEngine.Vector2&", "System.Single&", "System.AsyncCallback", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&velocity;
	params[2] = (intptr_t)&rotation;
	params[3] = (intptr_t)callback;
	params[4] = (intptr_t)object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::IAsyncResult*)returnValue;
}
bool com_unity_multiplayer_hlapi_Runtime::UnityEngine::Networking::NetworkTransform_ClientMoveCallback2D::EndInvoke(UnityEngine_CoreModule::UnityEngine::Vector2& position, UnityEngine_CoreModule::UnityEngine::Vector2& velocity, float& rotation, mscorlib::System::IAsyncResult* result)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndInvoke", std::vector<std::string> { "UnityEngine.Vector2&", "UnityEngine.Vector2&", "System.Single&", "System.IAsyncResult" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&position;
	params[1] = (intptr_t)&velocity;
	params[2] = (intptr_t)&rotation;
	params[3] = (intptr_t)result;
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
