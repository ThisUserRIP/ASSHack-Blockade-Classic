#include "UnityEngine_Networking_UnityWebRequest.h"

IL2CPP::Il2CppClass* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.UnityWebRequestModule.dll", "UnityEngine.Networking", "UnityWebRequest");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::GetWebErrorString(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError err)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetWebErrorString", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest/UnityWebRequestError" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&err;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString(int64_t responseCode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHTTPStatusString", std::vector<std::string> { "System.Int64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&responseCode;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_disposeCertificateHandlerOnDispose");
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
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_disposeCertificateHandlerOnDispose", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_disposeDownloadHandlerOnDispose");
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
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_disposeDownloadHandlerOnDispose", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_disposeUploadHandlerOnDispose");
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
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_disposeUploadHandlerOnDispose", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::Create()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Create");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::Release()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Release");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::InternalDestroy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalDestroy");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::InternalSetDefaults()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetDefaults");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::_ctor(mscorlib::System::String* url, mscorlib::System::String* method)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)method;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::_ctor(mscorlib::System::String* url, mscorlib::System::String* method, UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* downloadHandler, UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* uploadHandler)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.String", "UnityEngine.Networking.DownloadHandler", "UnityEngine.Networking.UploadHandler" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)url;
	params[1] = (intptr_t)method;
	params[2] = (intptr_t)downloadHandler;
	params[3] = (intptr_t)uploadHandler;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::Finalize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Finalize");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::DisposeHandlers()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DisposeHandlers");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::BeginWebRequest()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BeginWebRequest");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequestAsyncOperation*)returnValue;
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SendWebRequest()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SendWebRequest");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequestAsyncOperation*)returnValue;
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::Abort()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Abort");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SetMethod(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetMethod", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&methodType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::InternalSetMethod(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetMethod", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&methodType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SetCustomMethod(mscorlib::System::String* customMethodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetCustomMethod", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)customMethodName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod(mscorlib::System::String* customMethodName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetCustomMethod", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)customMethodName;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::set_method(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_method", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::GetError()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetError");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_error()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_error");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_url()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_url");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::set_url(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_url", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::GetUrl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUrl");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SetUrl(mscorlib::System::String* url)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUrl", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)url;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::InternalSetUrl(mscorlib::System::String* url)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetUrl", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)url;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int64_t UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_responseCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_responseCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int64_t ret;
		std::memset(&ret, 0, sizeof(int64_t));
		return ret;
	}
	return static_cast<int64_t>(*(int64_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::IsExecuting()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsExecuting");
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
bool UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_isModifiable()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isModifiable");
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
bool UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_isDone()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_isDone");
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
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_Result UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_result()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_result");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_Result ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_Result));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_Result>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_Result*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::GetDownloadProgress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDownloadProgress");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_downloadProgress()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_downloadProgress");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
uint64_t UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_downloadedBytes()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_downloadedBytes");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SetChunked(bool chunked)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetChunked", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&chunked;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::set_chunkedTransfer(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_chunkedTransfer", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::InternalSetRequestHeader(mscorlib::System::String* name, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetRequestHeader", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SetRequestHeader(mscorlib::System::String* name, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetRequestHeader", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SetUploadHandler(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* uh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUploadHandler", std::vector<std::string> { "UnityEngine.Networking.UploadHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uh;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_uploadHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_uploadHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler*)returnValue;
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::set_uploadHandler(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_uploadHandler", std::vector<std::string> { "UnityEngine.Networking.UploadHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SetDownloadHandler(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* dh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetDownloadHandler", std::vector<std::string> { "UnityEngine.Networking.DownloadHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dh;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError ret;
		std::memset(&ret, 0, sizeof(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError));
		return ret;
	}
	return static_cast<UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(*(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError*)il2cpp_object_unbox(returnValue));
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_downloadHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_downloadHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler*)returnValue;
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::set_downloadHandler(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_downloadHandler", std::vector<std::string> { "UnityEngine.Networking.DownloadHandler" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::CertificateHandler* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::get_certificateHandler()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_certificateHandler");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::CertificateHandler*)returnValue;
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::Get(mscorlib::System::String* uri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Get", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)uri;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest*)returnValue;
}
UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::Post(mscorlib::System::String* uri, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* formData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Post", std::vector<std::string> { "System.String", "UnityEngine.WWWForm" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)uri;
	params[1] = (intptr_t)formData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest*)returnValue;
}
void UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest::SetupPost(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* request, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* formData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetupPost", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest", "UnityEngine.WWWForm" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)request;
	params[1] = (intptr_t)formData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
